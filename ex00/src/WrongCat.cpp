/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:30:28 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 20:05:39 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat has been created!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
	std::cout << "WrongCat copy constructor called!" << std::endl;
	*this = other;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout << "The \"" << type << "\" does: Miau?"<< std::endl;
}