/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:02:57 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/07 07:01:41 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdio>
#include <limits>

FragTrap::FragTrap( void ): ClapTrap("Unamed", 100, 100, 30)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & fragTrap ): ClapTrap(fragTrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string & name ): ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor called" << std::endl;
}

// Methods

void FragTrap::attack( const std::string& target )
{
    if (this->isDied()) {
        std::cout 
            << "FragTrap " << ClapTrap::getName() 
            << " cannot attack because is died!" << std::endl; 
        return ;
    }
    
    if (!this->consumeEnergy(1)) {
        std::cout 
            << "FragTrap " << ClapTrap::getName() 
            << " insuficient energy points to attack" << std::endl;
        return; 
    }

    std::cout 
        << "FragTrap " << ClapTrap::getName() << " attacks " 
        << target << ", causing " << ClapTrap::getAttackDamage()
        << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "Give me a high five 🙏: " << std::endl;
    std::string highFive;
    
    for (;;) {
    
        getline(std::cin, highFive);

        if (highFive.compare("high five") != 0) {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << "Try again!" << std::endl;
            continue;
        }

        break;
    }
}