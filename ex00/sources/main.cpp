/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:32:51 by julauren          #+#    #+#             */
/*   Updated: 2026/10/05 08:56:03 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <cstdlib>

int main(void)
{
	int i;
	Zombie *z[10];

	for (i = 0; i < 10; i++)
	{
		z[i] = newZombie("An other Bob");
		if (!z[i])
		{
			for (i = 0; z[i]; i++)
				delete z[i];
			exit(1);
		}
	}

	randomChump("Bob");

	for (i = 0; i < 10; i++)
		z[i]->announce();

	randomChump("Bob_2");

	for (i = 0; i < 10; i++)
		delete z[i];

	return (0);
}
