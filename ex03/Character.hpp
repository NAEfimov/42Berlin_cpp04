/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:49:07 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 16:01:11 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define INV_SIZE 4

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
// class AMateria;
// class ICharacter;

class Character : public ICharacter {
  public:
 	Character(void);
 	Character(std::string name);
	Character(Character& other);
	Character& operator=(Character& other);
 	~Character(void);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	// Add const AMateria* (&getInventory(void) const)[INV_SIZE]
	// Add const AMateria* &getInventoryItem(int idx) const;

  private:
	std::string	name;
	AMateria*	inventory[INV_SIZE];
};


#endif  // CHARACTER_HPP