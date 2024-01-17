/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:27:35 by tfriedri          #+#    #+#             */
/*   Updated: 2023/05/03 21:48:16 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	examplefunction(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	iter(T *arr, size_t len, void (*func)(T &element))
{
	for(size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif
