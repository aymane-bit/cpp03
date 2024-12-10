/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:53:49 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 12:14:48 by akajjou          ###   ########.fr       */
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
        // orthodox form
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap &original);
        ClapTrap& operator=(const ClapTrap &original);
        ~ClapTrap();
        // mm fct
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // gettersetter
        std::string const &get_name() const;
        int const &get_hitpt() const;
        int const &get_dammage() const;
        int const &get_energypt() const;
        void      decrement_energypt();
};



#endif