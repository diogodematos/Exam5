/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:57:18 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 14:44:11 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>

class ATarget;

class ASpell
{
    protected:

        std::string _name;
        std::string _effects;

    public:

        ASpell();
        ASpell(const std::string name, const std::string effects);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &aspell);
        virtual ~ASpell();
        
        const std::string &getName() const;
        const std::string &getEffects() const;
        
        void launch(const ATarget &target);

        virtual ASpell *clone() const = 0;
} ;

#endif