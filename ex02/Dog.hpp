/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:33 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/06 21:28:05 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
    Dog(void);
    Dog(const Dog& other);
    ~Dog(void);
    Dog& operator=(const Dog& other);

    void makeSound(void) const;
private:
    Brain* brain;
};

#endif  // DOG_HPP 