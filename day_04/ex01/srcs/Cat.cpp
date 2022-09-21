/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:40:41 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/21 11:22:41 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "An Cat has been created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	std::cout << "An Cat has been created by copy" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "An Cat has been destroyed" << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "*MIAOU*" << std::endl;
}
