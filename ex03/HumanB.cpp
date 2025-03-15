/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:14:44 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/15 17:26:19 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB named " << this->_name << " created" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "HumanB named " << this->_name << " destroyed" << std::endl;
	return ;
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << (this->_weapon)->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}
