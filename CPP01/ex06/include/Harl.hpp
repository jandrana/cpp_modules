/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:04:49 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/22 17:06:01 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:
        std::string   levels[4];

        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:
        Harl(void);
        ~Harl();

        void    filterComplaints(std::string level);
};

#endif /* HARL_HPP */
