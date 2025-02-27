/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:50:04 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 20:04:44 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(){
	std::cout << "Animal has been created!" << std::endl;
	this->type = "";
}

Animal::Animal(std::string atype) : type(atype){
	std::cout << "Animal type: \"" << type << "\" has been created!" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = other;
}

Animal::~Animal(){
	std::cout << "Animal destructor called!" << std::endl;
}

Animal& Animal::operator=(const Animal &other){
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Animal::makeSound() const{
	std::cout << "The animal \"" << type << "\" does: ..."<< std::endl;
}

std::string Animal::getType() const{
	return (this->type);
}
