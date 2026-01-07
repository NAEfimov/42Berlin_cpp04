/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:44:44 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/15 20:25:51 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define KNOWN_SIZE 4

class MateriaSource : public IMateriaSource {
  public:
	MateriaSource();
	MateriaSource(MateriaSource const & other);
	MateriaSource& operator=(MateriaSource const & other);
 	~MateriaSource();
	
	AMateria*	getKnownMateria(const int idx) const;
	bool		setKnownMateria(const int idx, AMateria* mtr);
	
	AMateria*	createMateria(std::string const & type);
	void		learnMateria(AMateria* src);
	void		printKnownMaterias();

  private:
	AMateria* _known_materia[KNOWN_SIZE];
};

#endif  // MATERIASOURCE_HPP