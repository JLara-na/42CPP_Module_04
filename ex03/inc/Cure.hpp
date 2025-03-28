/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:11:29 by jlara-na          #+#    #+#             */
/*   Updated: 2025/03/26 20:57:35 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		~Cure();
		
		Cure				&operator=(const Cure& other);
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};