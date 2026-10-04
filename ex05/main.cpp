/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:45:52 by julauren          #+#    #+#             */
/*   Updated: 2026/10/04 12:29:54 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Harl bot;
	std::string cmd;

	while (true)
	{
		std::cout << GREEN "What's your complain (DEBUG, INFO, WARNING or ERROR)?: " RESET;

		if (!std::getline(std::cin, cmd))
			break;
		if (cmd.empty())
			continue;

		bot.complain(cmd);
	}


	return (0);
}
