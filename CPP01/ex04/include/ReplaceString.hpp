/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceString.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:46:19 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/22 16:17:26 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESTRING_HPP
# define REPLACESTRING_HPP

#include <iostream> 
#include <fstream>
#include <string>

class ReplaceString
{
    private:
        std::string     filename;
        std::string     orig;
        std::string     str;
        std::ifstream   infs;
        std::ofstream   outfs;

    public:
        ReplaceString(char **argv);
        ~ReplaceString(void);

        int     checkInput(void);
        void    performReplace(void);
};

#endif /* REPLACESTRING_HPP */
