/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:47:01 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/10 17:54:34 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : public FragTrap , public ScavTrap
{
    private :
        std::string name;
    public :
        // orthodox form
        DiamondTrap();
        DiamondTrap(std::string const &_name);
        DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap(void);
        DiamondTrap	&operator=(DiamondTrap const &copy);
        // mm fct
        void	whoAmI(void);
		void	attack(std::string const &target);

};



#endif