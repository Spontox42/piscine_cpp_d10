/*
** Character.cpp for Character/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/Character.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:30:03 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 16:44:27 2016 Marlon Petit
*/

#include "Character.hh"

Character::Character(std::string const name)
{
  this->name_ = name;
  this->ap_ = 40;
}

Character::~Character()
{}

void	Character::recoverAP()
{
  this->ap_ += 10;
  if (this->ap_ > 40)
    this->ap_ = 40;
}

void	Character::equip(AWeapon *weapon)
{
  this->weapon_ = weapon;
}

void	Character::attack(AEnemy *enemy)
{
  if (this->weapon_ && this->weapon_->getAPCost() <= this->ap_)
    {
      this->ap_ -= this->weapon_->getAPCost();
      std::cout << this->name_ << " attacks " << enemy->getType() << " with a " << this->weapon_->getName() << std::endl;
      this->weapon_->attack();
      enemy->takeDamage(this->weapon_->getDamage());
      if (enemy->getHP() <= 0)
	enemy->~AEnemy();
    }
}

std::string	Character::getName() const
{
  return (this->name_);
}

int	Character::getAP() const
{
  return (this->ap_);
}

int	Character::getWeapon() const
{
  if (this->weapon_)
    return (1);
  return (0);
}

std::string	Character::getWeaponName() const
{
  return (this->weapon_->getName());
}

std::ostream&   operator<<(std::ostream& os, Character const & s)
{
  if (s.getWeapon())
    os << s.getName() << " has " << s.getAP() << " AP and wields a " << s.getWeaponName() << std::endl;
  else
    os << s.getName() << " has " << s.getAP() << " AP and is unarmed" << std::endl;
  return (os);
}
