/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:28:46 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/08 14:34:05 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ANIMAL_NUM 4

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void) {
	std::cout << "=== Animal Class ===" << std::endl;
    Animal* my_animal = new Animal();
    my_animal->makeSound();
    delete my_animal;
    std::cout << std::endl;
	
    std::cout << "=== Create  Cat and Dog objects ===" << std::endl;
    Animal* my_animals[ANIMAL_NUM];
    for (int i = 0; i < ANIMAL_NUM; ++i) {
        std::cout << "--" << i << "--" << std::endl;
        if (i % 2)
            my_animals[i] = new Cat;
        else
            my_animals[i] = new Dog;
        
    }
    std::cout << std::endl;
    
    std::cout << "=== Delete  Cat and Dog objects ===" << std::endl;
    for (int i = 0; i < ANIMAL_NUM; ++i) {
        std::cout << "--" << i << "--" << std::endl;
        delete my_animals[i];
    }
    std::cout << std::endl;

    std::cout << "=== Deep copy test ===" << std::endl;
    Cat* original_cat = new Cat();
    std::cout << "--" << std::endl;
    {
        Cat copy_cat = *original_cat;
        std::cout << "--" << std::endl;
        
    }
    std::cout << "--" << std::endl;
    delete original_cat;
    std::cout << "--" << std::endl;
    std::cout << "Deep copy test passed" << std::endl;
    
    std::cout << std::endl;

    return 0;
}