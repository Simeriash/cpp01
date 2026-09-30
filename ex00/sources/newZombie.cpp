/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:05:59 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 14:26:48 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <cstddef>
#include <new>
#include <string>

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new(std::nothrow) Zombie(name);

	if (!zombie)
		return NULL;

	return (zombie);
}
