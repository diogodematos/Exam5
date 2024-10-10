/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:51:30 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 14:16:47 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:

        Fwoosh();
        Fwoosh(const Fwoosh &copy);
        Fwoosh &operator=(const Fwoosh &fwoosh);
        ~Fwoosh();

        virtual ASpell *clone() const;
} ;

#endif