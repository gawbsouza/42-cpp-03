/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:02:57 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/05 21:40:05 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ): ClapTrap("Unamed", 100, 50, 20)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & scavTrap ): ClapTrap(scavTrap)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string & name ): ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

// Methods

void ScavTrap::attack( const std::string& target )
{
    if (this->isDied()) {
        std::cout 
            << "ScavTrap " << ClapTrap::getName() 
            << " cannot receive damage because is died!" << std::endl; 
        return ;
    }
    
    if (!this->consumeEnergy(1)) {
        std::cout 
            << "ScavTrap " << ClapTrap::getName() 
            << " insuficient energy points to attack" << std::endl;
        return; 
    }

    std::cout 
        << "ScavTrap " << ClapTrap::getName() << " attacks " 
        << target << ", causing " << ClapTrap::getAttackDamage()
        << " points of damage!" << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}
