/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:33:05 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 14:54:30 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <cstddef>
#include <new>
#include <string>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde;
	int i;

	if (N <= 0)
		return (NULL);

	horde = new(std::nothrow) Zombie[N];
	if (!horde)
		return NULL;

	for (i = 0; i < N; i++)
		horde[i].setName(name);

	return (horde);
}
