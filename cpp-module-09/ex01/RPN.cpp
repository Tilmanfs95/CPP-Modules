/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:16:34 by tfriedri          #+#    #+#             */
/*   Updated: 2023/09/11 14:05:59 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string expression) {
	try
	{
		calculate(expression);
		std::cout << this->num_stack.top() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

RPN::~RPN(void) {
	return ;
}

RPN::RPN(const RPN &src) {
	*this = src;
	return ;
}

RPN &RPN::operator=(const RPN &src) {
	if (this != &src) {
		this->num_stack = src.num_stack;
	}
	return (*this);
}

void	RPN::calculate(std::string expression){
	char c;
	double a;
	double b;
	for (size_t i = 0; i < expression.size(); ++i) {
		c = expression[i];
		if (isdigit(c))
			this->num_stack.push(c - '0');
		else if (c == '+' || c == '-' || c == '*' || c == '/') {
			if (this->num_stack.size() < 2)
				throw RPN::InvalidExpressionException();
			b = this->num_stack.top();
			this->num_stack.pop();
			a = this->num_stack.top();
			this->num_stack.pop();
			if (c == '+')
				this->num_stack.push(a + b);
			else if (c == '-')
				this->num_stack.push(a - b);
			else if (c == '*')
				this->num_stack.push(a * b);
			else if (c == '/')
				this->num_stack.push(a / b);
		}
		else if (c == ' ') {
			continue ;
		}
		else
			throw RPN::InvalidExpressionException();
	}
	if (this->num_stack.size() != 1)
		throw RPN::InvalidExpressionException();
}

const char *RPN::InvalidExpressionException::what() const throw() {
	return ("Error: Invalid expression.");
}
