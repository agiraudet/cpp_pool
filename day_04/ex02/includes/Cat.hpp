/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:05:42 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/21 13:48:28 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	public:

		Cat(void);
		Cat(Cat const & src);
		virtual	~Cat(void);
		
		Cat & operator=(Cat const & rhs);

		virtual void	makeSound(void) const;
		std::string		getIdea(int n) const;
		void			setIdea(int n, std::string idea);

	private:
		Brain *	_brain;
};

#endif
