/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:26:30 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/27 10:37:19 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	incIntElem(int & elem)
{
	elem++;
}

int main(void)
{
	int		arrInt[] = {0, 2, 4, 6, 8};
	char	arrChar[] = {'a', 'b', 'c', 'd'};

	iter(arrChar, 4, printElem);
	std::cout << std::endl;

	iter(arrInt, 5, printElem<int>);
	std::cout << std::endl;

	iter(arrInt, 5, incIntElem);
	iter(arrInt, 5, printElem<int>);
	std::cout << std::endl;

	return 0;
}
