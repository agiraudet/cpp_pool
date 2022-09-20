/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:40:41 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/20 15:48:16 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "An animal has been created" << std::endl;
}

Animal::Animal(const & src)
{
	*this =src;
	std::cout << "An animal has been created by copy" << std::endl;
}

Animal::~Animal(void);
{
	std::cout << "An animal has been destroyed" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs._type;
	return *this;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
