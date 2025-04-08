/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 05:02:20 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 14:06:59 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/MateriaSource.hpp"
# include "../inc/AMateria.hpp"

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
		_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other){
    std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; ++i){
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
		else
			_templates[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; ++i){
		if (_templates[i])
			delete _templates[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    std::cout << "MateriaSource copy operator called" << std::endl;
	if (this != &other){
		for (int i = 0; i < 4; ++i){
			if (_templates[i])
				delete _templates[i];
			if (other._templates[i])
				_templates[i] = other._templates[i]->clone();
			else
				_templates[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; ++i){
		if (!_templates[i]){
			_templates[i] = m->clone();
			delete m;
			std::cout << "learnMateria(): " << _templates[i]->getType() << " learned" << std::endl;
			return;
		}
	}
	std::cout << "learnMateria(): is full of materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; ++i) {
		if (_templates[i] && _templates[i]->getType() == type){
			std::cout << "createMateria(): "<< type <<" created" << std::endl;
			return _templates[i]->clone();
		}		
	}
    std::cout << "createMateria(): Type not found" << std::endl;
	return NULL;
}