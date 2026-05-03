/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:10:22 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/12 14:15:51 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void ) {
	

	Animal* arr[6];
	int l = 0;
	for ( int i = 0; i < 6; i++)
		l++;

	std::cout << l << std::endl;

	for ( int i = 0; i < 6; i++) {

		if (i < l / 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int i = 0; i < 6; i++)
		delete arr[i];

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << '\n'; 
	// const Dog* dogPtr = (Dog*)j;
	// Brain* brainPtr = NULL;
	// if (dogPtr)
	// 	brainPtr = dogPtr->getBrain();
	// std::cout << brainPtr << std::endl;
	// std::cout << '\n'; 

	// const Animal* k = j;
	// const Dog* dogPtrBis = (Dog*)k;
	// Brain* brainPtrBis = NULL;
	// if (dogPtrBis)
	// 	brainPtrBis = dogPtrBis->getBrain();
	// std::cout << brainPtrBis << std::endl;
	// std::cout << '\n'; 

	// Dog d;
	// Brain* brainPtrd = NULL;
	// brainPtrd = d.getBrain();
	// std::cout << brainPtrd << std::endl;
	// std::cout << '\n';
	
	// Dog* l = new Dog(d);
	// Brain* brainDoggo = NULL;
	// brainDoggo = l->getBrain();
	// std::cout << brainDoggo << std::endl;
	// std::cout << '\n'; 
	
	// Cat c;
	// Brain* brainPtrC = NULL;
	// brainPtrC = c.getBrain();
	// std::cout << brainPtrC << std::endl;
	// std::cout << '\n';

	// Cat* e = new Cat(c);
	// Brain* brainE = NULL;
	// brainE = e->getBrain();
	// std::cout << brainE << std::endl;
	// std::cout << '\n'; 
	
	// delete e;
	// delete l;
	// delete i;
	// delete j;
	
	// Dog Basic;
	// Dog Tmp = Basic;
	
	return 0;
}
