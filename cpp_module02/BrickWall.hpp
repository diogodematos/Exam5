/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:36:06 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 15:36:33 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        
        BrickWall();
        BrickWall(const BrickWall &copy);
        BrickWall &operator=(const BrickWall &BrickWall);
        ~BrickWall();

        virtual ATarget *clone() const;
};

#endif