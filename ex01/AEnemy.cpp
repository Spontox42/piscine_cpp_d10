/*
** AEnemy.cpp for AEnemy/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/AEnemy.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:12:40 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:21:12 2016 Marlon Petit
*/

#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const type) : type_(type)
{
  this->hp_ = hp;
}

AEnemy::~AEnemy()
{}

std::string	AEnemy::getType() const
{
  return (this->type_);
}

int	AEnemy::getHP() const
{
  return (this->hp_);
}

void	AEnemy::takeDamage(int damage)
{
  if (damage >= 0)
    this->hp_ -= damage;
  if (getHP() < 0)
    this->hp_ = 0;
}
