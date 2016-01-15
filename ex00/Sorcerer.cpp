/*
** Sorcerer.cpp for Sorcerer/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex00/Sorcerer.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 09:21:45 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 11:27:35 2016 Marlon Petit
*/

#include "Sorcerer.hh"
#include "Victim.hh"
#include "Peon.hh"

Sorcerer::Sorcerer(std::string name, std::string title) : name_(name), title_(title)
{
  this->name_ = name;
  this->title_ = title;
  std::cout << this->name_ << ", " << this->title_ << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
  std::cout << this->name_ << ", " << this->title_ << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string	Sorcerer::getName() const
{
  return (this->name_);
}

std::string	Sorcerer::getTitle() const
{
  return (this->title_);
}

std::ostream&	operator<<(std::ostream& os, Sorcerer const & s)
{
  os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl;
  return (os);
}

void	Sorcerer::polymorph(Victim const & v) const
{
  v.getPolymorphed();
}

void	Sorcerer::polymorph(Peon const & p) const
{
  p.getPolymorphed();
}
