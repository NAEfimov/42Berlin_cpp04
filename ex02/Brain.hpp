/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:23:35 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/08 13:45:59 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define NUM_OF_IDEAS 100

#include <string>

class Brain {
  public:
    Brain(void);
    Brain(const Brain& other);
    ~Brain(void);
    Brain& operator=(const Brain& other);

	const std::string (&getIdeas(void) const)[NUM_OF_IDEAS];
	const std::string &getIdea(int index) const;

  protected:
    std::string ideas[NUM_OF_IDEAS];
};

#endif  // BRAIN_HPP