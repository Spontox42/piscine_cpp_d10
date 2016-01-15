/*
** SuperMutant.hh for SuperMutant/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/SuperMutant.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:12:31 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:34:35 2016 Marlon Petit
*/

#ifndef SUPERMUTANT_HH_
# define SUPERMUTANT_HH_

#include <iostream>
#include <string>

#include "AEnemy.hh"

class SuperMutant : virtual public AEnemy
{
public:
  SuperMutant();
  ~SuperMutant();
  void	takeDamage(int);
};

#endif /* !SUPERMUTANT_HH_ */
