/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:24 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/08 14:36:18 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("") {
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

// void Animal::makeSound(void) const {
//     std::cout << " Some generic animal sound" << std::endl;
// }

std::string Animal::getType(void) const {
    return (type);
}