/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:53:46 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/09 16:14:42 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"



// void	alice_rundown(void)
// {
// 	ScavTrap alice("Alice");

// 	alice.attack("Bob");
// 	alice.attack("Chris");
// 	alice.attack("Diana");
// 	alice.attack("Elisa");
// 	alice.attack("Fred");
// 	alice.attack("Gemma");
// 	alice.attack("Henry");
// 	alice.attack("Isabella");
// 	alice.attack("Jack");
// 	alice.attack("Kevin");
// 	alice.attack("Laura");
// 	alice.attack("Mike");
// 	alice.guardGate();
// }

// void	bob_rundown(void)
// {
// 	ScavTrap	bob("Bob");

// 	while (bob.get_hitpt())
// 	{
// 		bob.takeDamage(20);
// 		bob.beRepaired(10);
// 	}
// 	bob.takeDamage(1);
// 	bob.guardGate();
// }

int	main(void)
{
	ScavTrap aymane("ana");
	aymane.attack("2");
	// std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
	// alice_rundown();
	// std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
	// bob_rundown();
}