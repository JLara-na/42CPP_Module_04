/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:35:43 by jlara-na          #+#    #+#             */
/*   Updated: 2025/02/19 21:43:40 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	virtual	~Brain();
	Brain&	operator=(const Brain& other);
	void	setIdea(int id, std::string idea);
	std::string	getIdea(int id);
};
