/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:47:25 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/21 17:21:51 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class	Form
{
	public:

		Form(std::string name, unsigned int gToSign, unsigned int gToExecute);
		Form(Form const & src);
		~Form(void);
		
		Form & operator=(Form const & rhs);

		std::string		getName(void) const;
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExecute(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat const & guy);

		class	GradeTooHighException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Grade too high");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Grade too low");
				}
		};

	private:
		
		std::string			_name;
		bool				_signed;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExecute;

		void	_checkGrade(unsigned int grade) const;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
