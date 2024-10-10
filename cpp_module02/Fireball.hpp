/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:31:34 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:31:57 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
    public:

        Fireball();
        Fireball(const Fireball &copy);
        Fireball &operator=(const Fireball &Fireball);
        ~Fireball();

        virtual ASpell *clone() const;
} ;

#endif