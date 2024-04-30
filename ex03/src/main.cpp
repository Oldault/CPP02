/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:33 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/30 09:11:15 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void print_result(bool result);

int main(void)
{
  {
    /* Point inside Triangle */
    const Point a(0, 0);
    const Point b(10, 30);
    const Point c(20, 0);

    const Point P(10, 15);

    bool result = bsp(a, b, c, P);
    print_result(result);
  }

  {
    /* Point outside Triangle */
    const Point a(0, 0);
    const Point b(10, 30);
    const Point c(20, 0);

    const Point P(30, 15);

    bool result = bsp(a, b, c, P);
    print_result(result);
  }
  
  return 0;
}

void print_result(bool result)
{
  if (result) {
    std::cout << "\n" << BOLD_A << KGRN40;
    std::cout << "The Point is Inside of the Triangle ✅" << RST << "\n\n";
  }
  else {
    std::cout << "\n" << BOLD_A << KRED40;
    std::cout << "The Point is Outside of the Triangle ❌" << RST << "\n\n";
  }
}
