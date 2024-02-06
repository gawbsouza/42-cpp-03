/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:05 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/05 06:02:26 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
    ScavTrap a("Gabriel");
    
    ClapTrap b = a;
    b.printStatus();

    b.attack("Someone");
    a.attack("Another one");
    
    return 0;
}