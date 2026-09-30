/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:56:30 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 10:27:43 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP

#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[39m"

class Zombie
{
	public:

		Zombie(void);
		~Zombie(void);

		void announce(void);

	private:

		Zombie(std::string name);

		std::string _name;
};

#endif
