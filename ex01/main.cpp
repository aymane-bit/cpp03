/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:53:46 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/03 19:04:56 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    // Create ClapTrap objects
    ClapTrap clap1("Bob");
    ClapTrap clap2("Alice");

    // Initial state
    std::cout << "\n--- Initial State ---\n";
    clap1.attack("Alice");
    clap2.takeDamage(0);  // Initial attack damage is 0

    // Bob attacks Alice multiple times until energy points are depleted
    std::cout << "\n--- Bob Attacking Alice ---\n";
    for (int i = 0; i < 12; i++)  // Go beyond 10 to test energy depletion
    {
        clap1.attack("Alice");
        clap2.takeDamage(0);  // Still 0 damage as attack_damage is initialized to 0
    }

    // Try to repair with no energy
    std::cout << "\n--- Repair Test: Bob ---\n";
    clap1.beRepaired(5);

    // Alice repairs herself
    std::cout << "\n--- Repair Test: Alice ---\n";
    clap2.beRepaired(3);

    // Alice attacks Bob
    std::cout << "\n--- Alice Attacking Bob ---\n";
    for (int i = 0; i < 3; i++)
    {
        clap2.attack("Bob");
        clap1.takeDamage(0);  // Still 0 damage unless attack_damage changes
    }

    // Deplete Alice's hit points and test overkill
    std::cout << "\n--- Alice Takes Massive Damage ---\n";
    clap2.takeDamage(100);

    // Bob tries to attack when he has no energy
    std::cout << "\n--- Bob Attacking with No Energy ---\n";
    clap1.attack("Alice");

    return 0;
}