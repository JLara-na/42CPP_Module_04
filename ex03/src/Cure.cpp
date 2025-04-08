/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:29:40 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 12:44:12 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../inc/Cure.hpp>

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria("cure"){
	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other){
	std::cout << "Cure asigment operator called" << std::endl;
    if (this != &other)
        *this = other;
    return (*this);
}

void		Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*	Cure::clone() const{
    AMateria *clone = new Cure;
    return (clone);
}
