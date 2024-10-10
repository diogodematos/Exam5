/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:36:46 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 14:49:20 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() : _type("Type")
{}

ATarget::ATarget(const std::string type) : _type(type)
{}

ATarget::ATarget(const ATarget &copy) : _type(copy._type)
{}

ATarget &ATarget::operator=(const ATarget &ATarget)
{
    if (this != &ATarget)
    {
        _type = ATarget._type;
    }
    return *this;
}

ATarget::~ATarget()
{}

const std::string &ATarget::getType() const
{
    return _type;
}

void ATarget::getHitBySpell(const ASpell &aspell) const
{
    std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}
