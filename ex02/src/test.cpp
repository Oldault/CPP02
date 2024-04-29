/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:12:53 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 15:18:36 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main()
// {
//   Fixed a(3);
//   Fixed b(2.5f);
//   Fixed c;

//   c = a;
//   std::cout << "Expected: 3, Actual: " << c.toInt() << std::endl;

//   Fixed d(a);
//   std::cout << "Expected: 3, Actual: " << d.toInt() << "\n\n";

//   Fixed result = a + b;
//   std::cout << "Expected approximately 5.5, Actual: " << result.toFloat() << std::endl;

//   result = a - b;
//   std::cout << "Expected approximately 0.5, Actual: " << result.toFloat() << std::endl;

//   result = a * b;
//   std::cout << "Expected approximately 7.5, Actual: " << result.toFloat() << std::endl;

//   result = a / b;
//   std::cout << "Expected approximately 1.2, Actual: " << result.toFloat() << "\n\n";

//   std::cout << "a > b Expected: 1, Actual: " << (a > b) << std::endl;
//   std::cout << "a < b Expected: 0, Actual: " << (a < b) << std::endl;
//   std::cout << "a >= b Expected: 1, Actual: " << (a >= b) << std::endl;
//   std::cout << "a <= b Expected: 0, Actual: " << (a <= b) << std::endl;
//   std::cout << "a == b Expected: 0, Actual: " << (a == b) << std::endl;
//   std::cout << "a != b Expected: 1, Actual: " << (a != b) << "\n\n";

//   Fixed &minFixed = Fixed::min(a, b);
//   Fixed &maxFixed = Fixed::max(a, b);
//   std::cout << "Min of a and b Expected: 2.5, Actual: " << minFixed.toFloat() << std::endl;
//   std::cout << "Max of a and b Expected: 3, Actual: " << maxFixed.toInt() << std::endl;

//   return 0;
// }
