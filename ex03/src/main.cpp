/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:01:10 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 14:14:17 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../inc/Ice.hpp>
#include <../inc/Cure.hpp>
#include <../inc/Character.hpp>
#include <../inc/MateriaSource.hpp>

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    std::cout << "\033[32m" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
   
    std::cout << "\033[33m" << std::endl; 
    ICharacter* me = new Character("me");
    
    std::cout << "\033[34m" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    std::cout << "\033[32m" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    
    std::cout << "\033[31m" << std::endl;
    delete bob;
    delete me;
    delete src;
    
    std::cout << "\033[m" << std::endl;
    return 0;
}