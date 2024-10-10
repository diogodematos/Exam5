/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:22:20 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 16:45:34 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "Warlock.hpp"

class TargetGenerator
{
    private:

        std::vector<ATarget *> _generator;
        
    public:
    
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType( ATarget *target);
        void forgetTargetType(const std::string &target);
        ATarget *createTarget(const std::string &target);
        
} ;

#endif