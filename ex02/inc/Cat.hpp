/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:45:17 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/20 21:13:19 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "../inc/AAnimal.hpp"
# include "../inc/Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat& 			operator=(const Cat& other);
		virtual void	makeSound() const;
		void 			catSetIdea(int id, const std::string& idea);
		std::string		catGetIdea(int id);
};
