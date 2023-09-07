/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:48:30 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/07 16:33:45 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Invalid argument." << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << std::endl;
	harl.complain(argv[1]);
}
