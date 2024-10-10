/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:33:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:34:02 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{}

Polymorph::Polymorph(const Polymorph &copy) : ASpell(copy._name, copy._effects)
{}

Polymorph &Polymorph::operator=(const Polymorph &Polymorph)
{
    if (this != &Polymorph)
    {
        _name = Polymorph._name;
        _effects = Polymorph._effects;
    }
    return *this;
}

Polymorph::~Polymorph()
{}

ASpell *Polymorph::clone() const
{
    return new Polymorph();
}