/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:48:38 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/22 12:40:15 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "An PresidentialPardonForm has been created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
: AForm("PresidentialPardonForm", 25, 5)
{
	*this = src;
	std::cout << "An PresidentialPardonForm has been created by copy" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "An PresidentialPardonForm has been destroyed" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_target = rhs._target;
	return *this;
}

void	PresidentialPardonForm::act(void) const
{
	std::cout << this->_target << " have been pardonned by Zaphod Beeblebrox himself !"
		<< std::endl;
	return;
}
