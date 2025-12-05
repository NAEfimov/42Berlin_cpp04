/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:28:46 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/05 17:36:59 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    std::cout << "=== Animal Class ===" << std::endl;
    Animal* my_animal = new Animal();
    my_animal->makeSound();
    delete my_animal;
    
    std::cout << std::endl << "=== Cat Class ===" << std::endl;
    Cat* my_cat = new Cat();
    my_cat->makeSound();
    delete my_cat;
    
    Animal* my_an_cat = new Cat();
    my_an_cat->makeSound();
    delete my_cat;

    std::cout << std::endl << "=== Dog Class ===" << std::endl;
    Dog* my_dog = new Dog();
    my_dog->makeSound();
    delete my_dog;

    Animal* my_an_dog = new Dog();
    my_an_dog->makeSound();
    delete my_an_dog;
    
    return 0;
}