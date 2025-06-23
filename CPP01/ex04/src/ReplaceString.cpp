/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:44:48 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 18:29:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceString.hpp"

ReplaceString::ReplaceString(char **argv)
{
    std::cout << "ReplaceString Constructor called" << std::endl;
    this->filename = argv[1];
    this->orig = argv[2];
    this->str = argv[3];
    this->infs.open(this->filename.c_str());
}

ReplaceString::~ReplaceString(void)
{
    this->infs.close();
    this->outfs.close();
    std::cout << "ReplaceString Destructor called" << std::endl;
}

int ReplaceString::checkInput(void)
{
    std::string outfile = this->filename + ".replace";
    if (!this->infs.is_open())
    {
        std::cerr << "Error: Unable to open file" << std::endl;
        return (1);
    }
    this->outfs.open(outfile.c_str());
    if (!this->outfs.is_open())
    {
        std::cerr << "Error: Unable to create output file" << std::endl;
        return (1);
    }
    if (this->orig.empty())
    {
        std::cerr << "Error: Empty string to replace" << std::endl;
        return (1);
    }
    return (0);
}

void    ReplaceString::performReplace(void)
{
    std::string line;
    size_t      pos;

    while (std::getline(this->infs, line))
    {
        pos = 0;
        while ((pos = line.find(this->orig, pos)) != std::string::npos)
        {
            line.erase(pos, this->orig.length());
            line.insert(pos, this->str);
            pos += this->str.length();
        }
        this->outfs << line << std::endl;
    }
}
