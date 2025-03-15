/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:51:49 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/15 16:54:48 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string: " << &str << std::endl;
	std::cout << "Address of the string by pointer: " << stringPTR << std::endl;
	std::cout << "Address of the string by reference: " << &stringREF << std::endl;
	std::cout << "String inside of str: " << str << std::endl;
	std::cout << "String inside of stringPTR: " << *stringPTR << std::endl;
	std::cout << "String inside of stringREF: " << stringREF << std::endl;
}
