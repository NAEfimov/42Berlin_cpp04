/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:28:46 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/06 16:50:01 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

    std::cout << std::endl << "=== Right Classes ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << " Type: " << j->getType() << " " << std::endl;
    std::cout << " Type: " << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "=== Wrong Classes ===" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* y = new WrongCat();
    std::cout << " Type: " << y->getType() << " " << std::endl;
    y->makeSound(); //will output the cat sound!
    wrong_meta->makeSound();
    delete wrong_meta;
    delete y;
    
    return 0;
}