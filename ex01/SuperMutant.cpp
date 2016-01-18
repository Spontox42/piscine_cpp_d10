/*
** SuperMutant.cpp for SuperMutant/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/SuperMutant.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:12:40 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 12:06:47 2016 Marlon Petit
*/

#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
  if (damage >= 3)
    this->hp_ -= (damage - 3);
}
