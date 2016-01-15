/*
** AEnemy.hh for AEnemy/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/AEnemy.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 12:12:31 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:20:53 2016 Marlon Petit
*/

#ifndef AENEMY_HH_
# define AENEMY_HH_

#include <iostream>
#include <string>

class AEnemy
{
protected:
  int		hp_;
  std::string const	type_;
public:
  AEnemy(int hp, std::string const type);
  virtual ~AEnemy();
  std::string	getType() const;
  int		getHP() const;
  virtual void	takeDamage(int);
};

#endif /* !AENEMY_HH_ */
