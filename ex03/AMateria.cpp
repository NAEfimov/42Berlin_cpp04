/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:10:05 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/10 12:31:43 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) {
    std::cout << "AMateria DEFAULT constructor called" << std::endl;
	this->type = "";
}

AMateria::AMateria(std::string const &type) {
    std::cout << "AMateria STRING constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria& other) {
    std::cout << "AMateria COPY constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria(void) {
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria& other) {
    std::cout << "AMateria assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
    std::cout << "Abstract use method called for " << target.getName() << std::endl;
}