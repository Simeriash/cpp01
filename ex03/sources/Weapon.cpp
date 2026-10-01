/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 08:19:13 by julauren          #+#    #+#             */
/*   Updated: 2026/10/01 09:59:43 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string &Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}
