/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 07:30:33 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/19 12:31:00 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

static std::string	replaceAll(const std::string	&line, const std::string &s1,
	const std::string &s2)
{
	std::string result;
	std::size_t pos = 0;
	std::size_t found;

	if (s1.empty())
		return (line);

	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		result.append(line.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(line.substr(pos));
	return (result);
}

static int	process(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile(filename);
	if (!infile)
	{
		std::cerr << "Could not open input file.\n";
		return (EXIT_FAILURE);
	}

	std::string		replaced_content;
	std::string		current_line;
	std::getline(infile, current_line);
	replaced_content += replaceAll(current_line, s1, s2);
	while (std::getline(infile, current_line))
	{
		replaced_content += "\n";
		replaced_content += replaceAll(current_line, s1, s2);
	}
	if (current_line.empty())
		replaced_content += "\n";
	std::ofstream	outfile(filename + ".replace");
	if (!outfile)
	{
		std::cerr << "Could not open output file.\n";
		return (EXIT_FAILURE);
	}
	outfile << replaced_content;
	outfile.close();
	infile.close();

	return (EXIT_SUCCESS);
}


/*In the cases where: the file is empty, s1 and/or s2 are empty, s1 is not
inside the file, I decided the program should not do anything and just
return EXIT_SUCCESS since there is nothing to replace.*/
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
		return (EXIT_SUCCESS);

	if (process(filename, s1, s2) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
