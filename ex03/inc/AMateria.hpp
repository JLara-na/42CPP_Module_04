/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:52:21 by jlara-na          #+#    #+#             */
/*   Updated: 2025/03/26 20:15:41 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const & type);
		~AMateria();
		std::string const&	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;
};