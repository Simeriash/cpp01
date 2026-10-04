/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:00:04 by julauren          #+#    #+#             */
/*   Updated: 2026/10/04 13:46:37 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

int Harl::getIndex(const std::string &level)
{
	std::string request[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == request[i])
			return (i);
	}
	return (-1);
}

void Harl::complain(std::string level)
{
	switch (getIndex(level))
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << GREEN "[ Probably complaining about insignificant problems ]" RESET << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << B_MAGENTA "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" RESET << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << B_CYAN "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" RESET << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << B_YELLOW "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." RESET << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << RED "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." RESET << std::endl;
	std::cout << std::endl;
}
