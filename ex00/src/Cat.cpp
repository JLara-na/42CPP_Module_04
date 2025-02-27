/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:30:28 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 20:05:39 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(){
	std::cout << "Cat has been created!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = other;
}

Cat::~Cat(){
	std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "The \"" << type << "\" does: Miau?"<< std::endl;
}