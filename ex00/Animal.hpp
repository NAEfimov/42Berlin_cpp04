/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:33 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/05 17:21:12 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
public:
    Animal(void);
    Animal(const Animal& other);
    virtual ~Animal(void);
    Animal& operator=(const Animal& other);

    virtual void makeSound(void);

protected:
    std::string type;
};

#endif  // ANIMAL_HPP