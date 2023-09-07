/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:56:22 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/06 17:12:43 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	check_before_sed(std::string content, const std::string search, const std::string replace)
{
	if (content.empty() == true)
	{
		std::cerr << "File is empty" << std::endl;
		return (EXIT_FAILURE);
	}
	if (search.empty() == true)
	{
		std::cerr << "s1 is an empty string" << std::endl;
		return (EXIT_FAILURE);
	}
	if (search == replace)
	{
		std::cerr << "s1 and s2 are the same" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	replace_sed(const std::string filename, const std::string search, const std::string replace)
{
	size_t		pos = 0;
	std::string	content;

	std::ifstream	ifs(filename);
	if (ifs.is_open())
	{
		if (!ifs.good())
		{
			std::cerr << "Error reading from the file" << std::endl;
			ifs.close();
			return (EXIT_FAILURE);
		}
	}
	else
	{
		std::cerr << "Failed to open the file" << std::endl;
		return (EXIT_FAILURE);
	}

	std::getline(ifs, content, '\x1A');
	ifs.close();
	if (check_before_sed(content, search, replace))
		return (EXIT_FAILURE);

	std::ofstream	ofs(filename + ".replace");
	if (ofs.is_open())
	{
		if (!ofs.good())
		{
			std::cerr << "Error writing to the file" << std::endl;
			ofs.close();
			return (EXIT_FAILURE);
		}
	}
	else
	{
		std::cerr << "Failed to open the file" << std::endl;
		return (EXIT_FAILURE);
	}

	while ((pos = content.find(search, pos)) != std::string::npos)
	{
		content.erase(pos, search.length());
		content.insert(pos, replace);
		pos += replace.length();
	}

	ofs << content;
	ofs.close();
	return (EXIT_SUCCESS);
}

int	arg_check(int argc)
{
	if (argc != 4)
	{
		std::cerr << "Invalid argument.";
		std::cerr << "Usage: ./Sed [filename] [string1] [string2]" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (arg_check(argc) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	if (replace_sed(argv[1], argv[2], argv[3]))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
