/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:36:27 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/16 12:41:09 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <cstdlib>
# include <iostream>
# include <string>

class Harl
{
  private:
	void debug();
	void info();
	void warning();
	void error();

  public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif
