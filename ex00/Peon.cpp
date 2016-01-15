/*
** Peon.cpp for Peon/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex00/Peon.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 09:21:45 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 11:16:56 2016 Marlon Petit
*/

#include "Peon.hh"

Peon::Peon(std::string name): Victim(name)
{
  this->name_ = name;
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

std::string	Peon::getName() const
{
  return (this->name_);
}

void	Peon::getPolymorphed() const
{
  std::cout << this->name_ << " has been turned into a pink pony !" << std::endl;
}
