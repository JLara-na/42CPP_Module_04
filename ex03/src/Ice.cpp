/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:29:35 by jlara-na          #+#    #+#             */
/*   Updated: 2025/03/28 16:52:31 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice has been created!" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria("ice"){
	std::cout << "Ice copy constructor called!" << std::endl;
	*this = other;
}

Ice::~Ice(){
	std::cout << "Ice destructor called!" << std::endl;
	delete (this);
}

Ice& Ice::operator=(const Ice &other){
	std::cout << "Ice copy assignment operator called!" << std::endl;
	return (*this);
}

AMateria* Ice::clone() const{
    return (new Ice);
}

