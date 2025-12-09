/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:36:48 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 15:12:07 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->name = "";
	for (int i = 0; i < INV_SIZE; ++i)
		inventory[i] = NULL;
}

Character::Character(std::string name) {
	this->name = name;
	for (int i = 0; i < INV_SIZE; ++i)
		inventory[i] = NULL;
}

Character::Character(Character& other) {
	this->name = other.name;
	for (int i = 0; i < INV_SIZE; ++i) {
		if (other.inventory[i] != NULL)
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character& Character::operator=(Character& other) {
	this->name = other.name;
	for (int i = 0; i < INV_SIZE; ++i) {
		if (other.inventory[i] != NULL)
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character(void) {
	for (int i = 0; i < INV_SIZE; ++i) {
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

std::string const & Character::getName() const {
	return (this->name);
}
void Character::equip(AMateria* m) {
	for (int i = 0; i < INV_SIZE; ++i) {
		if (inventory[i] == NULL)
			inventory[i] = m;
	}
}
void Character::unequip(int idx) {
	if (idx < 0 || idx >= INV_SIZE || inventory[idx] == NULL)
		return ;
	inventory[idx] == NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= INV_SIZE || inventory[idx] == NULL)
		return ;
	inventory[idx]->use(target);
}

//   private:
// 	std::string	name;
// 	AMateria*	inventory[INV_SIZE];