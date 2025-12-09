/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:13:29 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 14:27:23 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void) {
	std::cout << "=== Create objects ===" << std::endl;
	AMateria* cure = new Cure();
	std::cout << cure << ": " << cure->getType() << std::endl;
	
	AMateria* ice = new Ice();
	std::cout << ice << ": " << ice->getType() << std::endl;


	std::cout << "=== Objects assignance ===" << std::endl;
	*ice = *cure;
	std::cout << cure << ": " << cure->getType() << std::endl;
	std::cout << ice << ": " << ice->getType() << std::endl;
	
	delete cure;
	delete ice;

	
	return (0);
}