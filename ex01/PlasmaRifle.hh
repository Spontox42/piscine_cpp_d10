/*
** PlasmaRifle.hh for PlasmaRifle/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/PlasmaRifle.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 11:46:10 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:32:38 2016 Marlon Petit
*/

#ifndef PLASMARIFLE_HH_
# define PLASMARIFLE_HH_

#include <iostream>
#include <string>

#include "AWeapon.hh"

class		PlasmaRifle : virtual public AWeapon
{
public:
  PlasmaRifle();
  ~PlasmaRifle();
  void	attack() const;
};

#endif /* !PLASMARIFLE_HH_ */
