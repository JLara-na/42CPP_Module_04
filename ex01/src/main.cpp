/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:50:06 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 20:24:06 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main(){
	{
		Animal *animals[4];
		
		std::cout << "\033[0;31mMain part:\033[m" << std::endl;
		for (int i = 0; i < 4; i++){
			if (i < 4 / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 4; i++){
			animals[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 4; i++){
			delete animals[i];
		}
	}
	{
		std::cout << "\033[0;31mDeep copy test:\033[m" << std::endl;
		
		Cat	gato1;

		gato1.catSetIdea(0, "I am a cat");
		
		Cat gato2(gato1);
		Cat gato3;
		
		gato3 = gato2;
		std::cout << std::endl;
		std::cout << "Cat1 idea: " << gato1.catGetIdea(0) << std::endl;
		std::cout << "Cat2 idea: " << gato2.catGetIdea(0) << std::endl;
		std::cout << "Cat3 idea: " << gato3.catGetIdea(0) << std::endl;
		std::cout << std::endl;

		Dog	perro1;
		
		perro1.dogSetIdea(0, "I am a dog");
		
		Dog	perro2(perro1);
		Dog	perro3;
		
		perro3 = perro2;
		std::cout << std::endl;
		std::cout << "Dog1 idea: " << perro1.dogGetIdea(0) << std::endl;
		std::cout << "Dog2 idea: " << perro2.dogGetIdea(0) << std::endl;
		std::cout << "Dog3 idea: " << perro3.dogGetIdea(0) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "\033[0;31mSubject test:\033[m" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;
	}
	return 0;
}