/*
** PowerFist.cpp for PowerFist/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/PowerFist.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 11:46:26 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:33:40 2016 Marlon Petit
*/

#include "PowerFist.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

void	PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
