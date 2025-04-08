/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 03:57:06 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 12:43:45 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Character.hpp"
# include "../inc/AMateria.hpp"

Character::Character() : _name("Empty"){
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0 ; i < 4 ; i++){
        _inventory[i] = NULL;
        _usable[i] = 0;
    }
}

Character::Character(std::string name) : _name(name){
	std::cout << "Character constructor called" << std::endl;
    for (int i = 0 ; i < 4 ; i++){
        _inventory[i] = NULL;
        _usable[i] = 0;
    }
}

Character::Character(const Character& other) : _name(other._name) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; ++i){
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
		_usable[i] = other._usable[i];
	}
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; ++i){
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character& Character::operator=(const Character& other){
	std::cout << "Character asigment operator called" << std::endl;
	if (this != &other){
		_name = other._name;
		for (int i = 0; i < 4; ++i){
			if (_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
			_usable[i] = other._usable[i];
		}
	}
	return (*this);
}

std::string const & Character::getName() const{
    return (_name);
}

void Character::equip(AMateria* m){
    if (!m)
        return ;
    for (int i = 0; i < 4; ++i){
        if (!_inventory[i]){
            _inventory[i] = m;
            _usable[i] = 1;
            return;
        }
    }
    std::cout << "equip(): This character is full of materias" << std::endl;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3){
        std::cout << "unequip(): Invalid index" << std::endl;
        return ;
    }
    if (_inventory[idx])
		_usable[idx] = 0;
    else
        std::cout << "unequip(): There is no materia at that index" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3){
        std::cout << "use(): Invalid index" << std::endl;
        return ;
    }
    if (_inventory[idx] && _usable[idx]){
		_inventory[idx]->use(target);
	}
    else
        std::cout << "use(): There is no materia at that index" << std::endl;
}
