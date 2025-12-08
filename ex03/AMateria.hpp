/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:46:45 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/08 17:16:08 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
  protected:
	std::string type;
	
  public:
  	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria& other);
	virtual ~AMateria(void);
	AMateria& operator=(AMateria& other);
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif  // AMATERIA_HPP