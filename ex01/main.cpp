/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:28:46 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/06 18:16:44 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ANIMAL_NUM 4

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    std::cout << "=== Create Animal Class objects ===" << std::endl;
    Animal* my_animals[ANIMAL_NUM];
    for (int i = 0; i < ANIMAL_NUM; ++i) {
        std::cout << "--" << i << "--" << std::endl;
        if (i % 2)
            my_animals[i] = new Cat;
        else
            my_animals[i] = new Dog;
        
    }
    std::cout << std::endl;
    
    std::cout << "=== Delete Animal Class objects ===" << std::endl;
    for (int i = 0; i < ANIMAL_NUM; ++i) {
        std::cout << "--" << i << "--" << std::endl;
        delete my_animals[i];
    }
    std::cout << std::endl;

    /*
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
    */
    return 0;
}