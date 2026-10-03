/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:10:17 by julauren          #+#    #+#             */
/*   Updated: 2026/10/03 16:22:38 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	public:

		Harl(void);
		~Harl(void);

		void complain(std::string level);

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
