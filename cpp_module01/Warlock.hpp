/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:29:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:12:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    private:

        std::string _name;
        std::string _title;
        std::vector<ASpell *> _spells;

    public:

        Warlock(const std::string name, const std::string title);
        ~Warlock();
        
        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(const std::string &title);

        void introduce() const;

        void learnSpell(ASpell *aspell);
        void forgetSpell(std::string spell);
        void launchSpell(std::string spell, const ATarget &target);
        
} ;

#endif