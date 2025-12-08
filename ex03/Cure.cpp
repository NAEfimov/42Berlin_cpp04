/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:23:18 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/08 17:38:49 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {
    std::cout << "Cure DEFAULT constructor called" << std::endl;
}

Cure::Cure(Cure& other) : AMateria(other) {
    std::cout << "Cure COPY constructor called" << std::endl;
	this->type = other.type;
}

Cure::~Cure(void) {
    std::cout << "Cure destructor called" << std::endl;
	
}

Cure& Cure::operator=(Cure& other) {
	std::cout << "Cure assignment operator called" << std::endl;
	AMateria::operator=(other);
	return (*this);
}

AMateria* Cure::clone() const {
    std::cout << "Cure CLONE() method called" << std::endl;
	AMateria* cure_clone = new Cure();
	return (cure_clone);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}