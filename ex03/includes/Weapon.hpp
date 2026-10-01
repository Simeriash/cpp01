/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 08:13:54 by julauren          #+#    #+#             */
/*   Updated: 2026/10/01 09:59:30 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:

		Weapon(std::string type);
		~Weapon(void);

		const std::string &getType(void) const;
		void setType(std::string newType);

	private:

		std::string _type;
};

#endif
