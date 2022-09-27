/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:18:21 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/27 16:38:54 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
: _N(0)
{
	return ;
}

Span::Span(unsigned int N)
: _N(N)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span(void)
{
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_lst.size() >= this->_N)
		throw Span::NoRoomException();
	this->_lst.push_back(n);
}

int		Span::shortestSpan(void) const
{
	int sSpan = -1;

	if (this->_lst.size() <= 1)
		throw Span::NoElemException();
	if (!std::is_sorted(this->_list.begin(), this->_list.end()))
		std::sort(this->_list.begin(), this->_list.end());




		int		longestSpan(void) const;
