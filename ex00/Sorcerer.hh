/*
** Sorcerer.hh for Sorcerer/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex00/Sorcerer.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 09:21:39 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 11:27:49 2016 Marlon Petit
*/

#ifndef SORCERER_HH_
# define SORCERER_HH_

#include <iostream>
#include <string>

#include "Victim.hh"
#include "Peon.hh"

class		Sorcerer
{
public:
  Sorcerer(std::string, std::string);
  ~Sorcerer();
  std::string	getName() const;
  std::string	getTitle() const;
  void		polymorph(Victim const &) const;
  void		polymorph(Peon const &) const;
protected:
  std::string	name_;
  std::string	title_;
};

std::ostream&   operator<<(std::ostream&, Sorcerer const &);

#endif /* !SORCERER_HH_ */
