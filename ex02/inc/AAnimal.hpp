/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:50:00 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 21:15:28 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& other);
		virtual void	makeSound() const = 0;
		virtual  std::string getType() const;
};
