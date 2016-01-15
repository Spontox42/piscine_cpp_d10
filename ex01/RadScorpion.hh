/*
** RadScorpion.hh for RadScorpion/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/RadScorpion.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:12:31 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:32:01 2016 Marlon Petit
*/

#ifndef RADSCORPION_HH_
# define RADSCORPION_HH_

#include <iostream>
#include <string>

#include "AEnemy.hh"

class RadScorpion : virtual public AEnemy
{
public:
  RadScorpion();
  ~RadScorpion();
  void	takeDamage(int);
};

#endif /* !RADSCORPION_HH_ */
