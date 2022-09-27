/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:11:04 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/27 16:25:07 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP



# include <iostream>

class	Span
{
	public:

		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);
		
		Span & operator=(Span const & rhs);

		void	addNumber(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		class	NoRoomException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Already too many elems in list");
				}
		};

		class	NoElemException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Not enoguh elems in list");
				}
		};

	private:

		std::list<int>	_lst;
		unsigned int	_N;
};
#endif
