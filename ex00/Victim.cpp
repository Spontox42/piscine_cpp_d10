/*
** Victim.cpp for Victim/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex00/Victim.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 09:21:45 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 11:37:42 2016 Marlon Petit
*/

#include "Victim.hh"

Victim::Victim(std::string name)
{
  this->name_ = name;
  std::cout << "Some random victim called " << this->name_ << " just popped !" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim " << this->name_ << " just died for no apparent reason !" << std::endl;
}

std::string	Victim::getName() const
{
  return (this->name_);
}

std::ostream&	operator<<(std::ostream& os, Victim const & k)
{
  os << "I'm " << k.getName() << " and i like otters !" << std::endl;
  return (os);
}

void	Victim::getPolymorphed() const
{
  std::cout << this->name_ << " has been turned into a cute little sheep !" << std::endl;
}
