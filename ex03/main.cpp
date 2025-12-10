/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:13:29 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/10 12:57:07 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main(void) {
	std::cout << "=== Create objects ===" << std::endl;
	AMateria* cure = new Cure();
	std::cout << cure << ": " << cure->getType() << std::endl;
	
	AMateria* ice = new Ice();
	std::cout << ice << ": " << ice->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "=== Objects assignance ===" << std::endl;
	*ice = *cure;
	std::cout << cure << ": " << cure->getType() << std::endl;
	std::cout << ice << ": " << ice->getType() << std::endl;
	std::cout << std::endl;
	
	delete cure;
	delete ice;
	
	std::cout << "=== Character creation ===" << std::endl;
	ICharacter* hero = new Character("Hero_1");
	std::cout << " Char name: " << hero->getName() << std::endl;
	ICharacter* another_hero = new Character("Hero_2");
	std::cout << " Char name: " << another_hero->getName() << std::endl;

	*another_hero = *hero;
	std::cout << " Char name: " << another_hero->getName() << std::endl;
	delete another_hero;
	std::cout << " Char name: " << hero->getName() << std::endl;
	delete hero;
	
	
	return (0);
}