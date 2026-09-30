/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:44:30 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 15:01:03 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int i, N = 10;

	horde = zombieHorde(N, "An other Bob");

	if (!horde)
		return (1);

	for (i = 0; i < N; i++)
		horde[1].announce();

	delete[] horde;

	return (0);
}
