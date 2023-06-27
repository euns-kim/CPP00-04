/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:30:44 by eunskim           #+#    #+#             */
/*   Updated: 2023/06/27 17:17:16 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toUpper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		toUpper(argv[i]);
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
