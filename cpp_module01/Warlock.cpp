/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:36:03 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:20:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string name, const std::string title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
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
    if (_spells.size() == 0)
        _spells.push_back(aspell);
    for(unsigned int i = 0; i < _spells.size(); i++)
    {
        if (_spells[i]->getName() == aspell->getName())
            return ;
        if (i == _spells.size() - 1)
            _spells.push_back(aspell); // = *aspell->clone();
    }
    
}

void Warlock::forgetSpell(std::string spell)
{
    for(unsigned int i = 0; i < _spells.size(); i++)
    {
        if (_spells[i]->getName() == spell)
            _spells.erase(_spells.begin()+i);
    }
}

void Warlock::launchSpell(std::string spell, const ATarget &target)
{
    for(unsigned int i = 0; i < _spells.size(); i++)
    {
        if (_spells[i]->getName() == spell)
            target.getHitBySpell(*_spells[i]);
    }
}