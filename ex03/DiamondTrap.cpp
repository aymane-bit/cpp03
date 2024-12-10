/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:46:43 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 17:40:06 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void)
{
    set_name("nameless_clap_name");
	std::cout << "DiamondTrap from ScavFrag " << this->get_name() << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &_name): ClapTrap(_name + "_clap_name")
{
    this->name = _name;
    this->set_hitpt(gethitpt_frag());
    this->set_energypt(getenergy_scav());
    this->set_damage(getdammage_frag());
    std::cout << "DiamondTrap from ScavFrag " << this->get_name() << " created with constructor." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->get_name() << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "DiamondTrap " << this->get_name() << " copied." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	if (this->get_hitpt() <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->get_name() << " is dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->get_name() << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::get_name() << "." << std::endl;
	}
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
