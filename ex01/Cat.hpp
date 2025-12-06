/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:33 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/06 16:42:40 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(void);
    Cat(const Cat& other);
    ~Cat(void);
    Cat& operator=(const Cat& other);

    void makeSound(void) const;
};

#endif  // CAT_HPP 