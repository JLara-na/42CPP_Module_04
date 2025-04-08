/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:49:34 by jlara-na          #+#    #+#             */
/*   Updated: 2025/04/08 05:21:46 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
    	AMateria* _templates[4];
    public:
    	MateriaSource();
    	MateriaSource(const MateriaSource& other);
    	~MateriaSource();

        MateriaSource& operator=(const MateriaSource& other);
    	virtual void learnMateria(AMateria* m);
    	virtual AMateria* createMateria(std::string const & type);
};