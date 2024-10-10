/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:05:54 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 14:49:02 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() : _name("Name"), _effects("Effects")
{}

ASpell::ASpell(const std::string name, const std::string effects) : _name(name), _effects(effects)
{}

ASpell::ASpell(const ASpell &copy) : _name(copy._name), _effects(copy._effects)
{}

ASpell &ASpell::operator=(const ASpell &aspell)
{
    if (this != &aspell)
    {
        _name = aspell._name;
        _effects = aspell._effects;
    }
    return *this;
}

ASpell::~ASpell()
{}

const std::string &ASpell::getName() const
{
    return _name;
}

const std::string &ASpell::getEffects() const
{
    return _effects;
}

void ASpell::launch(const ATarget &target)
{
    target.getHitBySpell(*this);
}