/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:11:19 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/21 11:27:52 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "An Brain has been created" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "An Brain has been created by copy" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "An Brain has been destroyed" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::copy(rhs._ideas, rhs._ideas + 100, this->_ideas);
	return *this;
}

