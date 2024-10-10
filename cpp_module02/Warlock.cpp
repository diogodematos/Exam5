/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:36:03 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 17:11:46 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "SpellBook.hpp"

Warlock::Warlock(const std::string name, const std::string title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
    _spells = new SpellBook();
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
    delete _spells;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

const std::string &Warlock::getName() const
{
    return _name;
}

const std::string &Warlock::getTitle() const
{
    return _title;
}

void Warlock::setTitle(const std::string &title)
{
    _title = title;
}

void Warlock::learnSpell(ASpell *aspell)
{
    _spells->learnSpell(aspell);
}

void Warlock::forgetSpell(std::string spell)
{
    _spells->forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, const ATarget &target)
{
    // for(unsigned int i = 0; i < _spells.size(); i++)
    // {
    //     if (_spells[i]->getName() == spell)
    //         target.getHitBySpell(*_spells[i]);
    // }
    target.getHitBySpell(*_spells->createSpell(spell));
}