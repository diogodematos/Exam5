/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:09:28 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:04:13 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}

Dummy::Dummy(const Dummy &copy) : ATarget(copy._type)
{}

Dummy &Dummy::operator=(const Dummy &dummy)
{
    if(this != &dummy)
    {
        _type = dummy._type;
    }
    return *this;
}

Dummy::~Dummy()
{}

ATarget *Dummy::clone() const
{
    return new Dummy(*this);
}