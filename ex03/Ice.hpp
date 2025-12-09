/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:02:51 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 15:01:15 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
  public:
	Ice(void);
	Ice(Ice& other);
	~Ice(void);
	Ice& operator=(Ice& other);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif  // ICE_HPP