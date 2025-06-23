/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:44:12 by user              #+#    #+#             */
/*   Updated: 2025/06/23 17:13:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address (str): " << &str << std::endl;
    std::cout << "Memory address (pointer): " << stringPTR << std::endl;
    std::cout << "Memory address (reference): " << &stringREF << std::endl;
    std::cout << "Content of the string (str): " << str << std::endl;
    std::cout << "Content of the string (pointer): " << *stringPTR << std::endl;
    std::cout << "Content of the string (reference): " << stringREF << std::endl;

    return (0);
}