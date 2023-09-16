/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:37:25 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/16 15:29:17 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "BSP.hpp"

// Triangle1 with sides (3.5, 4.2, 5.7):

// Vector A: (3.5, 0.0)
// Vector B: (0.0, 4.2)
// Vector C: (2.0, 0.0)

// Triangle2 with sides (6.1, 8.3, 10.2):

// Vector A: (6.1, 0.0)
// Vector B: (0.0, 8.3)
// Vector C: (1.2, 0.0)

// Triangle3 with sides (2.2, 3.3, 4.4):

// Vector A: (2.2, 0.0)
// Vector B: (0.0, 3.3)
// Vector C: (1.0, 0.0)

int	main(void)
{

	{
		Point	T1_A = Point(3.5f, 0.0f);
		Point	T1_B = Point(0.0f, 4.2f);
		Point	T1_C = Point(2.0f, 0.0f);

		if (bsp(T1_A, T1_B, T1_C, Point(1.5f, 2.0f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T1_A, T1_B, T1_C, Point(2.0f, 1.5f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T1_A, T1_B, T1_C, Point(2.0f, 1.0f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T1_A, T1_B, T1_C, Point(3.0f, 3.0f)) == false)
			std::cout << "Correct. This point is not inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T1_A, T1_B, T1_C, Point(4.0f, 1.0f)) == false)
			std::cout << "Correct. This point is not inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
	}
	
	{
		Point	T2_A = Point(6.1f, 0.0f);
		Point	T2_B = Point(0.0f, 8.3f);
		Point	T2_C = Point(1.2f, 0.0f);

		if (bsp(T2_A, T2_B, T2_C, Point(2.2f, 3.1f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T2_A, T2_B, T2_C, Point(4.7f, 0.9f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T2_A, T2_B, T2_C, Point(2.2f, 4.2f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T2_A, T2_B, T2_C, Point(5.1f, 3.2f)) == false)
			std::cout << "Correct. This point is not inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T2_A, T2_B, T2_C, Point(1.5f, 8.0f)) == false)
			std::cout << "Correct. This point is not inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
	}
	
	{
		Point	T3_A = Point(2.2f, 0.0f);
		Point	T3_B = Point(0.0f, 3.3f);
		Point	T3_C = Point(1.0f, 0.0f);

		if (bsp(T3_A, T3_B, T3_C, Point(1.4f, 0.8f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T3_A, T3_B, T3_C, Point(1.8f, 0.3f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T3_A, T3_B, T3_C, Point(0.2f, 2.8f)))
			std::cout << "Correct. This point is inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T3_A, T3_B, T3_C, Point(0.2f, 2.6f)) == false)
			std::cout << "Correct. This point is not inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T3_A, T3_B, T3_C, Point(0.8f, 2.2f)) == false)
			std::cout << "Correct. This point is not inside the triangle." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T3_A, T3_B, T3_C, Point(2.2f, 0.0f)) == false)
			std::cout << "Correct. This point is a vertex." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
		if (bsp(T3_A, T3_B, T3_C, Point(1.8f, 0.6f)) == false)
			std::cout << "Correct. This point is on edge." << std::endl;
		else
			std::cerr << "Something wrong with the calculation." << std::endl;
	}

}