/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:44:44 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/15 21:22:29 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < KNOWN_SIZE; ++i) {
		_known_materia[i] = NULL;
	}
}
MateriaSource::MateriaSource(MateriaSource const & other) {
	*this = other;
}
MateriaSource& MateriaSource::operator=(MateriaSource const & other) {
	if (this != &other) {
		for (int i = 0; i < KNOWN_SIZE; ++i) {
			delete _known_materia[i];
			if (other._known_materia[i] != NULL)
				_known_materia[i] = other._known_materia[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < KNOWN_SIZE; ++i) {
		delete _known_materia[i];
	}
}

AMateria* MateriaSource::getKnownMateria(const int idx) const {
	if (idx < 0 || idx >= KNOWN_SIZE) {
		std::cout << "ERROR: getKnownMateria: index out of range" << std::endl;
		return NULL;
	}
	return _known_materia[idx];
}

bool MateriaSource::setKnownMateria(const int idx, AMateria* mtr) {
	if (idx < 0 || idx >= KNOWN_SIZE) {
		std::cout << "ERROR: setKnownMateria: index out of range" << std::endl;
		return true;
	}
	if (mtr == NULL) {
		std::cout << "ERROR: setKnownMateria: null pointer" << std::endl;
		return true;
	}
	if (_known_materia[idx] != NULL) {
		std::cout << "ERROR: setKnownMateria: index is busy" << std::endl;
		return true;
	}
	_known_materia[idx] = mtr;
	return false;
}

void MateriaSource::learnMateria(AMateria* src) {
	if (src == NULL) {
		std::cout << "ERROR: learnMateria: NULL pointer source" << std::endl;
		return ;
	}
	int i = 0;
	while (i < KNOWN_SIZE) {
		if (getKnownMateria(i) == NULL) {
			if (setKnownMateria(i, src->clone())) {
				std::cout << "ERROR: learnMateria: can't set Materia"
						  << src->getType() << std::endl;
			} else {
				std::cout << "MateriaSource: Materia '" << src->getType()
						   << "' learned: " << std::endl;
			}
			return;
		}
		++i;
	}
	std::cout << "MateriaSource: can't learn more Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	AMateria* mtr;
	int i = 0;
	while (i < KNOWN_SIZE) {
		mtr = getKnownMateria(i);
		if (mtr && mtr->getType() == type) {
			return (mtr->clone());
		}
		++i;
	}
	std::cout << "MateriaSource: Materia '" << type << "' is unknown"
			  << std::endl;
	return NULL;
}

void MateriaSource::printKnownMaterias() {
	std::cout << "Known Materias:" << std::endl;
	for (int i = 0; i < KNOWN_SIZE; ++i) {
		std::cout << i << ": ";
		if (getKnownMateria(i) == NULL) {
			std::cout << "NULL" << std::endl;
		} else {
			std::cout << getKnownMateria(i)->getType() << std::endl;
		}
	}
}