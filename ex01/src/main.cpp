/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:33 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 10:35:13 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
  Fixed a;
  Fixed const b(10);
  Fixed const c(42.42f);
  Fixed const d(b);

  a = Fixed(1234.4321f);

  std::cout << "\n\ta is " << a << std::endl;
  std::cout << "\tb is " << b << std::endl;
  std::cout << "\tc is " << c << std::endl;
  std::cout << "\td is " << d << std::endl << "\n";

  std::cout << "\ta is " << a.toInt() << " as integer" << std::endl;
  std::cout << "\tb is " << b.toInt() << " as integer" << std::endl;
  std::cout << "\tc is " << c.toInt() << " as integer" << std::endl;
  std::cout << "\td is " << d.toInt() << " as integer" << std::endl << "\n";

  return 0;
}
