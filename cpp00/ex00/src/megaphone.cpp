/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:30:44 by eunskim           #+#    #+#             */
/*   Updated: 2023/06/29 17:43:41 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < argc)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout << static_cast<char> (std::toupper(static_cast<unsigned char> (argv[i][j])));
	}
	std::cout << std::endl;
	return (0);
}
