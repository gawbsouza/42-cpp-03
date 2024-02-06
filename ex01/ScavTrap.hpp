/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:51:30 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/05 06:05:59 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    
public:

    ScavTrap( void );
    ScavTrap( const ScavTrap & scavTrap );
    ScavTrap( const std::string & name );
    ~ScavTrap( void );

    void    attack( const std::string & target);
    void    guardGate( void );
};

#endif