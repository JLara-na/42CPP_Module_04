/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:45:14 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 21:13:11 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "../inc/AAnimal.hpp"
# include "../inc/Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog& operator=(const Dog& other);
		virtual void	makeSound() const;
		void 			dogSetIdea(int id, const std::string& idea);
		std::string		dogGetIdea(int id);
};
