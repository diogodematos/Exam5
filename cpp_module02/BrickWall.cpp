/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:36:57 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:37:28 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::BrickWall(const BrickWall &copy) : ATarget(copy._type)
{}

BrickWall &BrickWall::operator=(const BrickWall &BrickWall)
{
    if(this != &BrickWall)
    {
        _type = BrickWall._type;
    }
    return *this;
}

BrickWall::~BrickWall()
{}

ATarget *BrickWall::clone() const
{
    return new BrickWall(*this);
}