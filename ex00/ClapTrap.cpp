/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:35 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/03 19:07:05 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constructor called\n";
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
    std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "copy constructor called\n";
    *this = original; 
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &original)
{
    std::cout << "copy assigment operator called\n";   
    this->name = original.name;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destractor called\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << "ClapTrap " << name << " have no more hit points or energy points\n"; 
    else
    {
        energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks "
        << target <<  "causing " << this->attack_damage << " points of damage!\n";
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > (int)amount )
        this->hit_points--;
    else if (this->hit_points > 0)
        this->hit_points = 0;
    else
    {
        std::cout << "ClapTrap " << this->name << " is very very dead leave it alone\n";
        return;
    }
    std::cout << "ClapTrap " << this->name << " take a " << amount << " of damage\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << "ClapTrap " << name << " have no more hit points or energy points\n"; 
    else
    {
        this->energy_points--;
        this->hit_points += amount;
        if (this->hit_points > 10)
            this->hit_points = 10;
    }
}