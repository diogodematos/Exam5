/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:58:56 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:32:12 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(const Fwoosh &copy) : ASpell(copy._name, copy._effects)
{}

Fwoosh &Fwoosh::operator=(const Fwoosh &fwoosh)
{
    if (this != &fwoosh)
    {
        _name = fwoosh._name;
        _effects = fwoosh._effects;
    }
    return *this;
}

Fwoosh::~Fwoosh()
{}

ASpell *Fwoosh::clone() const
{
    return new Fwoosh();
}