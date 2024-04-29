/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:33 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 14:28:28 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
  Fixed a( 1 );
  Fixed b( 2 );

  if (a > 1) {
    std::cout << BBLU("Bigger") << std::endl;
  }

  // Fixed const b(Fixed(5.05f) * Fixed(2));
  // std::cout << b << std::endl;
  // Fixed const x(Fixed(5.05f) / Fixed(2));
  // std::cout << x << std::endl;

  // std::cout << a << std::endl;
  // std::cout << ++a << std::endl;
  // std::cout << a << std::endl;
  // std::cout << a++ << std::endl;
  // std::cout << a << std::endl;
  // std::cout << Fixed::max(a, b) << std::endl;
  return 0;
}
