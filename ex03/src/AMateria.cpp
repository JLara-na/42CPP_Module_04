/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:35:48 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 13:59:47 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../inc/AMateria.hpp>

AMateria::AMateria() : _type(""){
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other){
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const&	AMateria::getType() const{
	return (_type);
}
