/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:43:59 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 21:48:41 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain has been created!" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain copy constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
	*this = other;
}

Brain::~Brain(){
	std::cout << "Brain destructor called!" << std::endl;
}

Brain& Brain::operator=(const Brain &other){
	std::cout << "Brain copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return(*this);
}

void	Brain::setIdea(int id, std::string idea){
	this->ideas[id] = idea;
}

std::string Brain::getIdea(int id){
	return(this->ideas[id]);
}
