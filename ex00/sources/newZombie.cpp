/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:05:59 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 11:32:46 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>
#include <new>
#include <string>

Zombie *newZombie(std::string name)
{
	Zombie *zombie;

	try
	{
		zombie = new Zombie(name);
	}
	catch(std::bad_alloc &ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
		return nullptr;
	}

	return (zombie);
}
