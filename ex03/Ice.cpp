/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:34:40 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 15:01:08 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {
    std::cout << "Ice DEFAULT constructor called" << std::endl;
}

Ice::Ice(Ice& other) : AMateria(other) {
    std::cout << "Ice COPY constructor called" << std::endl;
	this->type = other.type;
}

Ice::~Ice(void) {
    std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(Ice& other) {
	std::cout << "Ice assignment operator called" << std::endl;
	AMateria::operator=(other);
	return (*this);
}

AMateria* Ice::clone() const {
    std::cout << "Ice CLONE() method called" << std::endl;
	AMateria* ice_clone = new Ice();
	return (ice_clone);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}