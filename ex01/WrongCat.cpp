/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:24 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/05 17:18:59 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal() {
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    *this = other;
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound(void) const {
    std::cout << " WRONG Meow!" << std::endl;
}