/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 07:30:33 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/19 08:28:04 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

static int	process(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile(filename);
	if (!infile)
	{
		std::cerr << "Could not open input file.\n";
		return (EXIT_FAILURE);
	}
	
	int				s1_len = s1.length();
	int				s2_len = s2_len;
	size_t			pos = 0;
	std::string		line;
	while (true)
	{
		if (!std::getline(infile, line))
			break;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1_len);
			line.insert(pos, s2);
			pos += s2_len;
		}
	}

	std::ofstream	outfile(filename + ".replace");
	if (!outfile)
	{
		std::cerr << "Could not open output file.\n";
		return (EXIT_FAILURE);
	}
	outfile << line;
	outfile.close();
	infile.close();

	return (EXIT_SUCCESS);
}

int	main(int argc, char *argv[])
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>"
			<< std::endl;
		return (EXIT_FAILURE);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: s1 and/or s2 cannot be empty." << std::endl;
		return (EXIT_FAILURE);
	}

	if (process(filename, s1, s2) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
