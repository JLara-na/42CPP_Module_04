/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:50:04 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 20:11:32 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal has been created!" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(std::string atype) : type(atype){
	std::cout << "WrongAnimal type: \"" << type << "\" has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const{
	std::cout << "The Wronganimal \"" << type << "\" does: ..."<< std::endl;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}
