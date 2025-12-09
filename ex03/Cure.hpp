/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:02:10 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 15:01:01 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
  public:
	Cure(void);
	Cure(Cure& other);
	~Cure(void);
	Cure& operator=(Cure& other);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif  // CURE_HPP