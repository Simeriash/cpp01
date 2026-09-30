/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:16:18 by julauren          #+#    #+#             */
/*   Updated: 2026/09/30 14:34:38 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[39m"

class Zombie
{
	public:

		Zombie(void);
		~Zombie(void);

		void announce(void) const;
		void setName(std::string name);

	private:

		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
