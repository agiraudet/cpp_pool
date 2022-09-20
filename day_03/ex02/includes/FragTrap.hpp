/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:16:59 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/20 14:50:39 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		
		FragTrap & operator=(FragTrap const & rhs);

		void	highFivesGuys(void) const;
		void	attack(const std::string & target);
};

std::ostream &	operator<<(std::ostream & o, FragTrap & rhs);


#endif
