/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:44 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/18 17:09:58 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: _n(0)
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	this = *src;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this.setRawBits(rhs.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_n;
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}
