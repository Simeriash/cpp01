/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:08:17 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 10:34:41 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << RED << _name << " is finally dead." RESET " RIP little angel." << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << _name << GREEN ": BraiiiiiiinnnzzzZ..." RESET << std::endl;
}
