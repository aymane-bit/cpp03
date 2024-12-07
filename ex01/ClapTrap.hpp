/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:53:49 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/03 18:04:24 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private :
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public :
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap &original);
        ClapTrap& operator=(const ClapTrap &original);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};



#endif