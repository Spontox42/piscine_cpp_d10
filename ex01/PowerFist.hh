/*
** PowerFist.hh for PowerFist/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/PowerFist.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 11:46:10 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:33:54 2016 Marlon Petit
*/

#ifndef POWERFIST_HH_
# define POWERFIST_HH_

#include <iostream>
#include <string>

#include "AWeapon.hh"

class		PowerFist : virtual public AWeapon
{
public:
  PowerFist();
  ~PowerFist();
  void	attack() const;
};

#endif /* !POWERFIST_HH_ */
