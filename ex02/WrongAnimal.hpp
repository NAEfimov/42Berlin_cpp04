/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:37:33 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/06 16:43:47 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal& other);
    virtual ~WrongAnimal(void);
    WrongAnimal& operator=(const WrongAnimal& other);

    virtual void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;
};

#endif  // WRONGANIMAL_HPP