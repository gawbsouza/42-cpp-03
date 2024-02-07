/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:54:43 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/07 05:51:14 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// Constructors

ClapTrap::ClapTrap( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = "Unamed";
    this->_hitPoints = INITIAL_HIT_POINTS;
    this->_energyPoints = INITIAL_ENERGY_POINTS;
    this->_attackDamage = INITIAL_ATTACK_DAMAGE;
}

ClapTrap::ClapTrap( const ClapTrap & ref )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

ClapTrap::ClapTrap( const std::string & name )
{
    std::cout << "Name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = INITIAL_HIT_POINTS;
    this->_energyPoints = INITIAL_ENERGY_POINTS;
    this->_attackDamage = INITIAL_ATTACK_DAMAGE;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called" << std::endl;
}

// Methods

bool ClapTrap::isDied( void )
{
    return this->_hitPoints == 0;
}

bool ClapTrap::consumeEnergy( unsigned int quantity )
{
    if (this->_energyPoints == 0 || quantity > this->_energyPoints) {
        return false; 
    }

    this->_energyPoints -= quantity;
    return true;
}

void ClapTrap::attack( const std::string& target )
{
    if (this->isDied()) {
        std::cout 
            << "ClapTrap " << _name 
            << " cannot receive damage because is died!" << std::endl; 
        return ;
    }
    
    if (!this->consumeEnergy(1)) {
        std::cout << "ClapTrap " << _name << " insuficient energy points to attack" << std::endl;
        return; 
    }

    std::cout 
        << "ClapTrap " << _name << " attacks " 
        << target << ", causing " << _attackDamage 
        << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->isDied()) {
        std::cout 
            << "ClapTrap " << _name 
            << " cannot receive damage because is died!" << std::endl; 
        return ;
    }
    
    std::cout 
        << "ClapTrap " << _name << " received " 
        << amount << " points of damage" << std::endl;

    if (this->_hitPoints >= amount) {
        this->_hitPoints -= amount;
        return;
    }

    this->_hitPoints = 0;
    std::cout << "ClapTrap " << _name << " died!" << std::endl; 
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->isDied()) {
        std::cout 
            << "ClapTrap " << _name 
            << " cannot repair because is died!" << std::endl; 
        return ;
    }

    if (!this->consumeEnergy(1)) {
        std::cout << "ClapTrap " << _name << " insuficient energy points to repair" << std::endl;
        return; 
    }
    
    std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points" << std::endl;
    this->_hitPoints += amount;
    
}

void ClapTrap::printStatus( void )
{
    std::cout << 
        this->_name << " | Hit Points: " << this->_hitPoints 
        << " | Energy Points: " << this->_energyPoints 
        << " | Attack Dagame: " << this->_attackDamage << std::endl;
}

// Operators

ClapTrap & ClapTrap::operator=( const ClapTrap & ref )
{
    std::cout << "ClapTrap assign operator called" << std::endl;
    this->_name = ref._name;
    this->_hitPoints = ref._hitPoints;
    this->_energyPoints = ref._energyPoints;
    this->_attackDamage = ref._attackDamage;
    return *this;
}
