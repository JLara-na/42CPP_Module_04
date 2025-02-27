/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:30:23 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 21:58:00 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(){
	std::cout << "Dog has been created!" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Dog copy constructor called!" << std::endl;
	this->brain = NULL;
	*this = other;
}

Dog::~Dog(){
	std::cout << "Dog destructor called!" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(const Dog &other){
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "The \"" << type << "\" does: Guau?"<< std::endl;
}

void Dog::dogSetIdea(int id, const std::string& idea){
    this->brain->setIdea(id, idea);
}

std::string Dog::dogGetIdea(int id){
    return (this->brain->getIdea(id));
}