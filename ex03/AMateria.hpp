/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:46:45 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/09 15:00:52 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{	
  public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria& other);
	virtual ~AMateria(void);
	AMateria& operator=(AMateria& other);
	
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
  protected:
	std::string type;
};


#endif  // AMATERIA_HPP