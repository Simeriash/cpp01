/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:00:32 by julauren          #+#    #+#             */
/*   Updated: 2026/10/04 13:41:42 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_CYAN "\033[96m"
#define B_MAGENTA "\033[95m"
#define B_YELLOW "\033[93m"
#define RESET "\033[39m"

class Harl
{
	public:

		Harl(void);
		~Harl(void);

		void complain(std::string level);

	private:

		int getIndex(const std::string &level);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
