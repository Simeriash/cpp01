/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:19:09 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 14:37:57 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << RED << _name << " is finally dead." RESET " RIP little angel." << std::endl;
	return;
}

void Zombie::announce(void) const
{
	std::cout << _name << GREEN ": BraiiiiiiinnnzzzZ..." RESET << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
