/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:32:28 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:33:04 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}

Fireball::Fireball(const Fireball &copy) : ASpell(copy._name, copy._effects)
{}

Fireball &Fireball::operator=(const Fireball &Fireball)
{
    if (this != &Fireball)
    {
        _name = Fireball._name;
        _effects = Fireball._effects;
    }
    return *this;
}

Fireball::~Fireball()
{}

ASpell *Fireball::clone() const
{
    return new Fireball();
}