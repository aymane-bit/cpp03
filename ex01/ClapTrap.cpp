/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:35 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/07 12:10:58 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constructor called\n";
    name = "nameless";
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
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
    if (this->hit_points == 0)
        std::cout << "ClapTrap " << this->name << " has no hit points left and cannot attack!\n";
    else if (this->energy_points == 0)
        std::cout << "ClapTrap " << this->name << " has no energy points left and cannot attack!\n";
    else
    {
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        if (this->hit_points > (int)amount)
            this->hit_points -= amount;
        else
            this->hit_points = 0;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is very very dead, leave it alone\n";
        return;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " of damage\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " has no hit points left and cannot be repaired!\n";
        return;
    }
    if (this->energy_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy points left and cannot be repaired!\n";
        return;
    } 
    this->energy_points--;
    this->hit_points += amount;
    std::cout << "ClapTrap " << this->name << " repairs itself, restoring " 
              << amount << " hit points!\n";
}