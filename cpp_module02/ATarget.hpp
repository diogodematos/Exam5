/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:16:27 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 14:44:25 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>


class ASpell;

class ATarget
{
    protected:

        std::string _type;

    public:

        ATarget();
        ATarget(const std::string name);
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &ATarget);
        virtual ~ATarget();
        
        const std::string &getType() const;
        
        void getHitBySpell(const ASpell &aspell) const;

        virtual ATarget *clone() const = 0;
           
} ;

#endif