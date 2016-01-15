/*
** PlasmaRifle.cpp for PlasmaRifle/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d10/ex01/PlasmaRifle.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Fri Jan 15 11:46:26 2016 petit_x - Marlon Petit
** Last update Fri Jan 15 13:35:27 2016 Marlon Petit
*/

#include "PlasmaRifle.hh"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

void	PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
