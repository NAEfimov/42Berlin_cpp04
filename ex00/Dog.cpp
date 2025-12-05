/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:24 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/05 17:20:25 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal() {
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other) {
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound(void) {
    std::cout << " Wuff!" << std::endl;
}