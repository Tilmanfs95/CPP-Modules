/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:51:15 by tfriedri          #+#    #+#             */
/*   Updated: 2023/05/05 12:22:58 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T				*arr;
	unsigned int	arr_size;
public:
	// constructors
	Array(): arr(0), arr_size(0){}
	Array(unsigned int n): arr(new T[n]), arr_size(n)
	{
		for (unsigned int i = 0; i < n; ++i)
			arr[i] = T();
	}
	// copy constructor
	Array(const Array<T>& other): arr(new T[other.arr_size]), arr_size(other.arr_size)
	{
		for (unsigned int i = 0; i < arr_size; ++i)
			arr[i] = other.arr[i];
	}
	// copy assignment operator
	Array<T>& operator=(const Array<T>& other)
	{
		if (this != &other)
		{
			T* newArr = new T[other.arr_size];
			for (unsigned int i = 0; i < other.arr_size; ++i)
				newArr[i] = other.arr[i];
			delete[] arr;
			arr = newArr;
			arr_size = other.arr_size;
		}
		return *this;
	}
	// destructor
	~Array()
	{
		delete[] arr;
	}
	// []-operator
	T& operator[](unsigned int index)
	{
		if (index >= arr_size)
			throw std::exception();
		return arr[index];
	}
	// member functions
	unsigned int	size() const
	{
		return arr_size;
	}
};

#endif
