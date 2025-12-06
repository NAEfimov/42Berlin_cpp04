/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:33 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/06 21:27:30 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
    Cat(void);
    Cat(const Cat& other);
    ~Cat(void);
    Cat& operator=(const Cat& other);

    void makeSound(void) const;
private:
    Brain* brain;
};

#endif  // CAT_HPP 