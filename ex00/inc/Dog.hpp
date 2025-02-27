/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:45:14 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 20:02:19 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "../inc/Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog& operator=(const Dog& other);
		virtual void	makeSound() const;
};
