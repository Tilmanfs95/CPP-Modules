/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:40:21 by tfriedri          #+#    #+#             */
/*   Updated: 2023/05/02 19:15:08 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <stdint.h>

int	main()
{
	Data		data;
	Data		*data_ptr;
	Data		*data_ptr_2;
	uintptr_t	ptr_num;
	
	data.number = 23;
	data.valid = true;
	data_ptr = &data;
	std::cout << "pointer-address to Data:\t" << data_ptr << std::endl;
	ptr_num = Serializer::serialize(data_ptr);
	std::cout << "adress converted to uintprt_t:\t" << ptr_num << std::endl;
	data_ptr_2 = Serializer::deserialize(ptr_num);
	std::cout << "converted back to pointer:\t" << data_ptr_2 << std::endl;
	std::cout << "data.number = " << data_ptr_2->number << std::endl;
	std::cout << "data.valid = " << data_ptr_2->valid << std::endl;
}
