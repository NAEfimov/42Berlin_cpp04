/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:13:29 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/15 21:28:20 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

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
	delete cure;
	delete ice;
	std::cout << std::endl;
	
	
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
	std::cout << std::endl;
	
	std::cout << "=== Materia Source ===" << std::endl;
	
	MateriaSource* m_src = new MateriaSource;
	m_src->printKnownMaterias();
	AMateria* created_materia = m_src->createMateria("ice");
	AMateria* m_ice = new Ice;
	m_src->learnMateria(m_ice);
	m_src->printKnownMaterias();
	created_materia = m_src->createMateria("ice");
	
	delete created_materia;
	delete m_ice;
	delete m_src;
	return (0);
}