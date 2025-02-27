/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:50:04 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 21:17:06 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "AAnimal has been created!" << std::endl;
	this->type = "";
}

AAnimal::AAnimal(std::string atype) : type(atype){
	std::cout << "AAnimal type: \"" << type << "\" has been created!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other){
	std::cout << "AAnimal copy constructor called!" << std::endl;
	*this = other;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destructor called!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other){
	std::cout << "AAnimal copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string AAnimal::getType() const{
	return (this->type);
}
