/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/07 06:25:49 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
    ScavTrap a("Scav");
    ClapTrap b("Clap");

    a.printStatus();
    b.printStatus();

    a.attack("Someone");
    b.attack("Another one");
    a.takeDamage(9);
    b.takeDamage(9);

    a.printStatus();
    b.printStatus();

    a.beRepaired(10);
    b.beRepaired(10);

    a.printStatus();
    b.printStatus();

    a.takeDamage(20);
    b.takeDamage(20);
    a.attack("Someone");
    b.attack("Another one");
    a.beRepaired(10);
    b.beRepaired(10);
    
    a.guardGate();
    
    a.printStatus();
    b.printStatus();

    b = a;

    a.printStatus();
    b.printStatus();
    
    return 0;
}