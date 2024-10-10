/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:59:26 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 17:10:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
    _book.clear();
}

void SpellBook::learnSpell(ASpell *aspell)
{
    if (_book.size() == 0)
        _book.push_back(aspell);
    for(unsigned int i = 0; i < _book.size(); i++)
    {
        if (_book[i]->getName() == aspell->getName())
            return ;
        if (i == _book.size() - 1)
            _book.push_back(aspell); // = *aspell->clone();
    }
    
}

void SpellBook::forgetSpell(const std::string &spell)
{
    for(unsigned int i = 0; i < _book.size(); i++)
    {
        if (_book[i]->getName() == spell)
            _book.erase(_book.begin()+i);
    }
}

ASpell *SpellBook::createSpell(const std::string &spell)
{
    for(unsigned int i = 0; i < _book.size(); i++)
    {
        if (_book[i]->getName() == spell)
            return _book[i]->clone();
    }
    return NULL;
}