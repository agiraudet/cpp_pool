/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:36:59 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/21 13:46:42 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
	public:

		virtual void	makeSound(void) const = 0;
		void			setType(std::string type);
		std::string		getType(void) const;

	protected:

		std::string	_type;

};

#endif
