/*
** AWeapon.cpp for AWeapon/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/AWeapon.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 11:46:26 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:21:33 2016 Marlon Petit
*/

#include "AWeapon.hh"

AWeapon::AWeapon(std::string const name, int apcost, int damage)
{
  this->name_ = name;
  this->apcost_ = apcost;
  this->damage_ = damage;
}

AWeapon::~AWeapon()
{}

std::string	AWeapon::getName() const
{
  return (this->name_);
}

int	AWeapon::getAPCost() const
{
  return (this->apcost_);
}

int	AWeapon::getDamage() const
{
  return (this->damage_);
}

void	AWeapon::attack() const
{}
