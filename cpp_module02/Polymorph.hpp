/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:34:31 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:35:34 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
    public:

        Polymorph();
        Polymorph(const Polymorph &copy);
        Polymorph &operator=(const Polymorph &Polymorph);
        ~Polymorph();

        virtual ASpell *clone() const;
} ;

#endif