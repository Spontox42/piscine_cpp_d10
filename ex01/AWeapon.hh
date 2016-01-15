/*
** AWeapon.hh for AWeapon/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/AWeapon.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 11:46:10 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:21:47 2016 Marlon Petit
*/

#ifndef AWEAPON_HH_
# define AWEAPON_HH_

#include <iostream>
#include <string>

class		AWeapon
{
protected:
  int		apcost_;
  int		damage_;
  std::string	name_;
public:
  AWeapon(std::string const name, int apcost, int damage);
  virtual ~AWeapon();
  std::string	getName() const;
  int		getAPCost() const;
  int		getDamage() const;
  virtual void	attack() const = 0;
};

#endif /* !AWEAPON_HH_ */
