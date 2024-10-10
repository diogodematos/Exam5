/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:46:07 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 17:10:32 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator()
{
    _generator.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (_generator.size() == 0)
        _generator.push_back(target);
    for(unsigned int i = 0; i < _generator.size(); i++)
    {
        if (_generator[i]->getType() == target->getType())
            return ;
        if (i == _generator.size() - 1)
            _generator.push_back(target); // = *target->clone();
    }
    
}

void TargetGenerator::forgetTargetType(const std::string &target)
{
    for(unsigned int i = 0; i < _generator.size(); i++)
    {
        if (_generator[i]->getType() == target)
            _generator.erase(_generator.begin()+i);
    }
}

ATarget *TargetGenerator::createTarget(const std::string &target)
{
    for(unsigned int i = 0; i < _generator.size(); i++)
    {
        if (_generator[i]->getType() == target)
            return _generator[i]->clone();
    }
    return NULL;
}