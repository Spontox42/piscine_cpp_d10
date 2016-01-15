/*
** Victim.hh for Victim/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex00/Victim.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 09:21:39 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 10:58:29 2016 Marlon Petit
*/

#ifndef VICTIM_HH_
# define VICTIM_HH_

#include <iostream>
#include <string>

class		Victim
{
public:
  Victim(std::string);
  ~Victim();
  std::string	getName() const;
  void		getPolymorphed() const;
protected:
  std::string	name_;
};
  
std::ostream&   operator<<(std::ostream&, Victim const &);

#endif /* !VICTIM_HH_ */
