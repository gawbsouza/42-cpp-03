/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/05 21:42:22 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
    FragTrap a("Gabriel");
    FragTrap b;
    ClapTrap c;

    b.printStatus();
    a.printStatus();
    c.printStatus();

    a.attack("Someone");
    a.attack("Someone");
    a.attack("Someone");
    b.attack("Another one");
    c.attack("Ghost");

    a.printStatus();
    b.printStatus();
    c.printStatus();

    c = b;
    b = FragTrap("Ghost");

    a.takeDamage(7);
    b.takeDamage(42);
    a.beRepaired(5);
    c.attack("Other");
    c.takeDamage(50);
    
    a.printStatus();
    b.printStatus();
    c.printStatus();

    a.highFivesGuys();
    
    return 0;
}