/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 08:23:49 by julauren          #+#    #+#             */
/*   Updated: 2026/10/01 09:33:32 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	public:

		HumanA(std::string name, Weapon Weapon);
		~HumanA(void);

		void attack(void) const;

	private:

		std::string _name;
		Weapon _Weapon;
};

#endif
