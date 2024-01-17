/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:12:16 by tfriedri          #+#    #+#             */
/*   Updated: 2023/09/11 14:08:00 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stack>
#include <cmath>

class RPN {
	private:
		std::stack<double> num_stack;
	public:
		RPN(std::string expression);
		~RPN(void);
		RPN(const RPN &src);
		RPN &operator=(const RPN &src);

		void calculate(std::string expression);

		class InvalidExpressionException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
};

#endif
