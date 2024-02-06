/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:51:30 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/05 21:13:46 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    
public:

    FragTrap( void );
    FragTrap( const FragTrap & fragTrap );
    FragTrap( const std::string & name );
    ~FragTrap( void );

    void    attack( const std::string & target);
    void    highFivesGuys( void );
};

#endif