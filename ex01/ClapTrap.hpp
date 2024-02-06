/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:47:39 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/05 21:05:06 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# define INITIAL_HIT_POINTS 10
# define INITIAL_ENERGY_POINTS 10
# define INITIAL_ATTACK_DAMAGE 0

# include <string>

class ClapTrap
{
private:

    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

protected:

    ClapTrap( 
        const std::string & name, 
        unsigned int hitPoints, 
        unsigned int energyPoints,
        unsigned int attackDamage
    );
    
    bool            consumeEnergy( unsigned int quantity );
    std::string     getName( void );
    unsigned int    getAttackDamage( void );

public:

    ClapTrap( void );
    ClapTrap( const ClapTrap & clapTrap );
    ClapTrap( const std::string & name );
    ~ClapTrap( void );

    void            attack( const std::string& target );
    void            takeDamage( unsigned int amount );
    void            beRepaired( unsigned int amount );
    
    bool            isDied( void );
    void            printStatus (void );

    ClapTrap &  operator=( const ClapTrap & clapTrap );
};

#endif