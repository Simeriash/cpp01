/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:36:19 by julauren          #+#    #+#             */
/*   Updated: 2026/10/01 10:33:34 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	public:

		HumanB(std::string name);
		~HumanB(void);

		void attack(void) const;
		void setWeapon(Weapon &weapon);

	private:

		std::string _name;
		Weapon *_weapon;
};

#endif
