/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:24:28 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/08 13:52:17 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
    std::cout << "Brain constructor called" << std::endl;
}
Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}
Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < NUM_OF_IDEAS; ++i) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

const std::string (&Brain::getIdeas(void) const)[NUM_OF_IDEAS] {
	return (ideas);
}

const std::string &Brain::getIdea(int index) const {
	return (ideas[index]);
}