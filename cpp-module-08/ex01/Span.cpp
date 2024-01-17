/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:01:31 by tfriedri          #+#    #+#             */
/*   Updated: 2023/09/04 14:32:24 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


// Constructors and destructor

Span::Span(void) : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const &src) : _N(src._N), _vec(src._vec) {}

Span::~Span(void) {}


// Operator overloads

Span &Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		this->_N = rhs._N;
		this->_vec = rhs._vec;
	}
	return (*this);
}


// Member functions

void	Span::addNumber(int n) {
	if (this->_vec.size() >= this->_N)
		throw Span::FullException();
	this->_vec.push_back(n);
}

int		Span::shortestSpan(void) {
	if (this->_vec.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++) {
		if (tmp[i] - tmp[i - 1] < shortest)
			shortest = tmp[i] - tmp[i - 1];
	}
	return (shortest);
}

int		Span::longestSpan(void) {
	if (this->_vec.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->_vec.size() + std::distance(begin, end) > this->_N)
		throw Span::FullException();
	this->_vec.insert(this->_vec.end(), begin, end);
}


// Exceptions

const char *Span::FullException::what() const throw() {
	return ("Span is full");
}

const char *Span::NoSpanException::what() const throw() {
	return ("Span is empty or contains only one element");
}
