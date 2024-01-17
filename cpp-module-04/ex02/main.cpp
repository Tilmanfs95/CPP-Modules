/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:53:23 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/11 16:23:01 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Example
	int				farm_size = 6;
	const AAnimal	*farm[farm_size];

	for (int i = 0; i < farm_size; i++)
	{
		if (i < farm_size / 2)
			farm[i] = new Dog();
		else
			farm[i] = new Cat();
	}
	for (int i = 0; i < farm_size; i++)
	{
		std::cout << farm[i]->getType() << std::endl;
	}
	for (int i = 0; i < farm_size; i++)
	{
		delete farm[i];
	}
	std::cout << std::endl;
	
	
	// Check deep-copy
	std::cout << std::endl;
	
	Dog	a;
	a.getBrain()->setSpecIdea(3, "hello");
	Dog b(a);
	Dog c;
	c = b;
	std::cout << std::endl;
	std::cout << a.getBrain()->getIdeas()[3] << std::endl;
	std::cout << b.getBrain()->getIdeas()[3] << std::endl;
	std::cout << c.getBrain()->getIdeas()[3] << std::endl;
	b.getBrain()->setSpecIdea(3, "this is b ;)");
	c.getBrain()->setSpecIdea(3, "test123");
	std::cout << std::endl;
	std::cout << a.getBrain()->getIdeas()[3] << std::endl;
	std::cout << b.getBrain()->getIdeas()[3] << std::endl;
	std::cout << c.getBrain()->getIdeas()[3] << std::endl;
	std::cout << std::endl;
	
	// Check if Animal Class is instantiable
	// uncomment the following to get the compiler error message, that AAnimal is abstract !
	/*
	AAnimal d;
	AAnimal e(d);
	d.makeSound();
	std::cout << std::endl;
	*/
	
	return 0;
}
