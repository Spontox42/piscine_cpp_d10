/*
** Peon.hh for Peon/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex00/Peon.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 09:21:39 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 11:19:59 2016 Marlon Petit
*/

#ifndef PEON_HH_
# define PEON_HH_

#include <iostream>
#include <string>

#include "Victim.hh"

class		Peon : public Victim
{
public:
  Peon(std::string);
  ~Peon();
  std::string	getName() const;
  void		getPolymorphed() const;
};

#endif /* !PEON_HH_ */
