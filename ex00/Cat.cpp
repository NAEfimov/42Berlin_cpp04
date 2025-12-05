/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:24 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/05 17:18:59 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal() {
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other) {
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Cat::makeSound(void) {
    std::cout << " Meow!" << std::endl;
}