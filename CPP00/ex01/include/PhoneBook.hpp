/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:08:08 by ana-cast          #+#    #+#             */
/*   Updated: 2024/11/15 23:43:29 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>

# define MAX_CONTACTS 8

class   PhoneBook
{
    private:
        Contact _contacts[MAX_CONTACTS];
        int     _index;
        int     _numContacts;
        std::string _getInput(std::string newField, int type);
        int    _checkInput(std::string input, int type);

    public:
        PhoneBook();
        ~PhoneBook();
        void    start(void);
        //void     testmode(void);
        void    addContact(void);
        void    searchContact(void);
        void    exitPhoneBook(void);
};

#endif /* PHONEBOOK_HPP */