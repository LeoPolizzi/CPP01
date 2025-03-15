/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:07:04 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/15 16:07:36 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombie = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}
