/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:26:01 by julauren          #+#    #+#             */
/*   Updated: 2026/10/04 12:35:45 by julauren         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	std::string request[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	typedef void (Harl::*function)(void);

	function tab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == request[i])
		{
			std::cout << std::endl;
			(this->*tab[i])();
			std::cout << std::endl;
		}
	}
}

void Harl::debug(void)
{
	std::cout << B_MAGENTA "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" RESET << std::endl;
}

void Harl::info(void)
{
	std::cout << B_CYAN "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" RESET << std::endl;
}

void Harl::warning(void)
{
	std::cout << B_YELLOW "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." RESET << std::endl;
}

void Harl::error(void)
{
	std::cout << RED "This is unacceptable! I want to speak to the manager now." RESET << std::endl;
}
