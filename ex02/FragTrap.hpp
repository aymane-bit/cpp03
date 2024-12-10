/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:55:35 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 16:28:22 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>


class FragTrap : public ClapTrap
{
    public :
        // orthodox form
        FragTrap();
        FragTrap(std::string const &_name);
        FragTrap(const FragTrap &original);
        FragTrap& operator=(const FragTrap &original);
        ~FragTrap();
        // mm fct
        void highFivesGuys(void);
};




#endif