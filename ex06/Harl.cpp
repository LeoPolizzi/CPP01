/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:41:14 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/16 12:45:52 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;
}

void Harl::debug()
{
	std::cout << "[DEBUG] This is a debugging message." << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO] This is an informational message." << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING] This is a warning message." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR] This is an error message." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaints[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	for (; i < 4; i++)
		if (level == levels[i])
			break ;
	switch (i)
	{
		case 0:
			(this->*complaints[0])();
		case 1:
			(this->*complaints[1])();
		case 2:
			(this->*complaints[2])();
		case 3:
			(this->*complaints[3])();
			break ;
		default:
			std::cout << "Invalid level" << std::endl;
			break ;
	}
}
