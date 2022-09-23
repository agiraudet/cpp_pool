/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:47:25 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/22 11:57:03 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>

class	Bureaucrat;

class	AForm
{
	public:

		AForm(std::string name, unsigned int gToSign, unsigned int gToExecute);
		AForm(AForm const & src);
		~AForm(void);
		AForm & operator=(AForm const & rhs);

		virtual void	act(void) const = 0;

		void			setName(std::string name);
		std::string		getName(void) const;
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExecute(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat const & guy);
		void			execute(Bureaucrat const & executor) const;

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

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif
