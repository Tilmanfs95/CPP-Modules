/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:51:21 by tfriedri          #+#    #+#             */
/*   Updated: 2023/09/04 14:22:56 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {

	private:
		unsigned int		_N;
		std::vector<int>	_vec;

	public:
		// Constructors and destructor
		Span(void);
		Span(unsigned int N);
		Span(Span const &src);
		~Span(void);

		// Operator overloads
		Span &operator=(Span const &rhs);

		// Member functions
		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		// Exceptions
		class FullException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class NoSpanException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
