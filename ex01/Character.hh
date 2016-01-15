/*
** Character.hh for Character/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/Character.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:30:10 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:26:46 2016 Marlon Petit
*/

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

#include <iostream>
#include <string>

#include "AWeapon.hh"
#include "AEnemy.hh"

class		Character
{
private:
  std::string	name_;
  int		ap_;
  AWeapon	*weapon_;
public:
  Character(std::string const name);
  ~Character();
  void		recoverAP();
  void		equip(AWeapon*);
  void		attack(AEnemy*);
  int		getAP() const;
  int		getWeapon() const;
  std::string	getWeaponName() const;
  std::string	getName() const;
};

std::ostream&   operator<<(std::ostream&, Character const &);

#endif /* !CHARACTER_HH_ */
