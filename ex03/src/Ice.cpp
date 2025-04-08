/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:29:35 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 13:05:27 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria("ice"){
	std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other){
	std::cout << "Ice copy operator called" << std::endl;
    if (this != &other)
        *this = other;
    return (*this);
}

void		Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone() const{
    AMateria *clone = new Ice;
    return (clone);
}

