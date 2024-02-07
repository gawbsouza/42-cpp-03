/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/07 05:56:09 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
    ClapTrap c2("Gabriel");
    
    c2.printStatus();

    c2.attack("Someone");
    c2.attack("Someone");
    c2.attack("Someone");

    c2.takeDamage(3);
    c2.takeDamage(2);
    c2.attack("Someone");
    c2.attack("Someone");
    c2.attack("Someone");
    c2.attack("Someone");
    c2.attack("Someone");
    c2.attack("Someone");

    c2.printStatus();

    c2.takeDamage(4);
    c2.beRepaired(10);
    c2.attack("Someone");

    c2.printStatus();
    
    c2.takeDamage(50);
    c2.beRepaired(10);
    c2.attack("Someone");
    
    c2.printStatus();
    
    return 0;
}