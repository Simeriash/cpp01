/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:44:30 by julauren          #+#    #+#             */
/*   Updated: 2026/10/05 09:30:50 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 10;

	horde = zombieHorde(N, "An other Bob");

	if (!horde)
		return (1);

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;

	return (0);
}
