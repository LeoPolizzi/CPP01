/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:56:37 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/15 18:35:44 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#define ARG_ERROR 0
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2

int	print_error(int error)
{
	if (error == ARG_ERROR)
		std::cerr << "Error: Invalid arguments" << std::endl;
	else if (error == INFILE_ERROR)
		std::cerr << "Error: File could not be opened" << std::endl;
	else if (error == OUTFILE_ERROR)
		std::cerr << "Error: File could not be created" << std::endl;
	return (1);
}

void	replaceLine(std::ofstream &outfile, std::string line, std::string s1, std::string s2)
{
	size_t	pos = line.find(s1);

	if (pos == std::string::npos)
		outfile << line;
	else
	{
		outfile << line.substr(0, pos) << s2;
		replaceLine(outfile, line.substr(pos + s1.length()), s1, s2);
	}
}

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		s1;
	std::string		s2;
	std::string		buffer;
	std::string		filename_in;
	std::string		filename_out;

	if (ac != 4)
		return (print_error(ARG_ERROR));
	filename_in = av[1];
	s1 = av[2];
	s2 = av[3];
	infile.open(filename_in.c_str());
	if (!infile.good())
		return (print_error(INFILE_ERROR));
	filename_out = filename_in + ".replace";
	outfile.open(filename_out.c_str());
	if (!outfile.good())
	{
		infile.close();
		return (print_error(OUTFILE_ERROR));
	}
	while (getline(infile, buffer))
		replaceLine(outfile, buffer + "\n", s1, s2);
	infile.close();
	outfile.close();
}
