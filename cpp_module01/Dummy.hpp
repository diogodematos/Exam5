/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:07:21 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 14:17:28 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        
        Dummy();
        Dummy(const Dummy &copy);
        Dummy &operator=(const Dummy &dummy);
        ~Dummy();

        virtual ATarget *clone() const;
};

#endif