/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:50:06 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 22:06:49 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

/*Even though AAnimal cannot be instantiated, pointers and references to
AAnimal are allowed, as long as they point to valid derived class objects.*/
int main(){
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	
	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete dog;
	delete cat;
	
	// This wont compile due to being an abstract class
	// {
	// 	AAnimal	heap;
	// 	AAnimal *stack = new AAnimal();
	// }
	return 0;
}