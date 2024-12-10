/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:53:49 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 17:53:17 by akajjou          ###   ########.fr       */
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
            // setter
            void    set_hitpt(const int &hitpt);
            void    set_energypt(const int &energypt);
            void    set_damage(const int &dammage);
            void      set_name(std::string _name);
            void      decrement_energypt();
            // getter
            std::string const &get_name() const;
            int const &get_hitpt() const;
            int const &get_dammage() const;
            int const &get_energypt() const;
};



#endif