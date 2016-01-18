/*
** RadScorpion.cpp for RadScorpion/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/RadScorpion.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:12:40 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 12:06:34 2016 Marlon Petit
*/

#include "RadScorpion.hh"

RadScorpion::RadScorpion() : AEnemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int damage)
{
  if (damage >= 0)
    this->hp_ -= damage;
}
