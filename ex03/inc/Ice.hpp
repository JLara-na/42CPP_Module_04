/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:11:31 by jlara-na          #+#    #+#             */
/*   Updated: 2025/03/26 20:56:55 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		~Ice();
		
		Ice					&operator=(const Ice& other);
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};