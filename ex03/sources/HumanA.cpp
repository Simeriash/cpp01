/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:27:54 by julauren          #+#    #+#             */
/*   Updated: 2026/10/01 09:35:53 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon Weapon) : _name(name), _Weapon(Weapon)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}
