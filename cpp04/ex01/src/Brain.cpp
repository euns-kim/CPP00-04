/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:18:16 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:48:17 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Orthodox Canonical Form */

Brain::Brain(void)
{
	std::cout << VIOLET << "[Brain] Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << VIOLET << "[Brain] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &op)
{
	std::cout << VIOLET << "[Brain] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = op._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << VIOLET << "[Brain] Destructor called" << RESET << std::endl;
}

void	Brain::setIdea(int idx, std::string idea)
{
	if (idx < 0 || idx >= 100)
		std::cerr << GREY << "* Given index is out of range. *" << RESET << std::endl;
	else
	{
		_ideas[idx] = idea;
		std::cerr << VIOLET << "* New idea is set in the brain: [" << idea << " (idx: " << idx << ")] *" << RESET << std::endl;
	}		
}

void	Brain::printIdea(int idx) const
{
	if (idx < 0 || idx >= 100)
		std::cerr << GREY << "* Given index is out of range. *" << RESET << std::endl;
	else
	{
		std::cerr << VIOLET << "* Idea(idx: " << idx << "): [" << _ideas[idx] << "] *" << RESET << std::endl;
	}		
}
