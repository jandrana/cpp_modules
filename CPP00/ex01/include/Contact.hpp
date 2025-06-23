/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:08:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 12:52:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		std::string	_summaryLen(std::string value);
		
	public:
		Contact();
		~Contact();
		void	setContact(std::string firstName, std::string lastName,
				std::string nickname, std::string phoneNumber, std::string darkestSecret);

		std::string getFirstName(void);
		std::string getlastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
		void    	printSummary(int i);
};

#endif /* CONTACT_HPP */