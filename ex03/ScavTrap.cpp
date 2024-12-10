/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:55:38 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 17:09:40 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &_name): ClapTrap(_name)
{
    std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destractor called for " << this->get_name() << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap from ClapTrap " << this->get_name() << " copied." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->get_hitpt() == 0)
        std::cout << "ClapTrap " << this->get_name() << " has no hit points left and cannot attack!\n";
    else if (this->get_energypt() == 0)
        std::cout << "ClapTrap " << this->get_name() << " has no energy points left and cannot attack!\n";
    else
    {
        this->decrement_energypt();
        std::cout << "ClapTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_dammage() << " points of damage!\n";
    }
}

void    ScavTrap::guardGate()
{
    if (this->get_hitpt() <= 0)
        std::cout << "ScavTrap " << this->get_name() << " can't be in Gatekeeper Mode , he is dead" << std::endl;
    else
        std::cout << "ScavTrap " << this->get_name() << " is in Gatekeeper Mode" << std::endl;
}

int const &ScavTrap::getenergy_scav() const
{
    return get_hitpt();
}