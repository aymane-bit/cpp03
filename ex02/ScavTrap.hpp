/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:07:16 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 16:28:38 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCARTRAP_HPP
# define SCARTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>


class ScavTrap : public ClapTrap
{
    public :
        // orthodox form
        ScavTrap();
        ScavTrap(std::string const &_name);
        ScavTrap(const ScavTrap &original);
        ScavTrap& operator=(const ScavTrap &original);
        ~ScavTrap();
        // mm fct
        void guardGate();
        void attack(const std::string& target);
        
};





#endif