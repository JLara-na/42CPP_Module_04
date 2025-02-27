/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:30:28 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 21:14:46 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(){
	std::cout << "Cat has been created!" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : AAnimal(other){
	std::cout << "Cat copy constructor called!" << std::endl;
	this->brain = NULL;
	*this = other;
}

Cat::~Cat(){
	std::cout << "Cat destructor called!" << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "The \"" << type << "\" does: Miau?"<< std::endl;
}

void Cat::catSetIdea(int id, const std::string& idea){
    this->brain->setIdea(id, idea);
}

std::string Cat::catGetIdea(int id){
    return (this->brain->getIdea(id));
}