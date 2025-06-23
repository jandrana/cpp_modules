/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:08:08 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 13:59:30 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>
# include <cstdlib>

# define MAX_CONTACTS 8

class   PhoneBook
{
    private:
        Contact _contacts[MAX_CONTACTS];
        int     _index;
        int     _numContacts;
        std::string _getInput(std::string newField, int type);
        int     _checkInput(std::string input, int type);
        int     _checkDigits(std::string str);
        void    _printContact(Contact contact);

    public:
        PhoneBook();
        ~PhoneBook();
        void    start(void);
        void    addContact(void);
        void    searchContact(void);
        void    exitPhoneBook(void);
};

#endif /* PHONEBOOK_HPP */