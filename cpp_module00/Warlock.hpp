/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:29:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/10/10 10:41:30 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock
{
    private:

        std::string _name;
        std::string _title;

    public:

        Warlock(const std::string name, const std::string title);
        ~Warlock();
        
        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(const std::string &title);

        void introduce() const;
        
} ;

#endif