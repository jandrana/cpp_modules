/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:08:04 by ana-cast          #+#    #+#             */
/*   Updated: 2024/11/15 23:39:51 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int			_index;
		std::string    _summaryLen(std::string value);
		
	public:
		Contact();
		~Contact();
		void	setContact(std::string firstName, std::string lastName,
				std::string nickname, std::string phoneNumber, std::string darkestSecret);
		void	setIndex(int index);
		
		int			getIndex(void);
		std::string getFirstName(void);
		std::string getlastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);

		void    printSummary(int i);
		void    printContact(void);
};

#endif /* CONTACT_HPP */