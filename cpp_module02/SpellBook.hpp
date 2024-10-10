/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:44:22 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 17:03:18 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "Warlock.hpp"

class SpellBook
{
    private:

        std::vector<ASpell *> _book;

    public:

        SpellBook();
        ~SpellBook();
        
        void learnSpell(ASpell *aspell);
        void forgetSpell(const std::string &spell);
        ASpell *createSpell(const std::string &spell);
} ;

#endif