/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:43:58 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/30 09:10:30 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed get_area(Point const a, Point const b, Point const c)
{
  Fixed part1 = a.getX() * (b.getY() - c.getY());
  Fixed part2 = b.getX() * (c.getY() - a.getY());
  Fixed part3 = c.getX() * (a.getY() - b.getY());
  Fixed sum = part1 + part2 + part3;

  Fixed area = sum / Fixed(2 * 256);
  return area.abs();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
  /* Total Area of the Triangle */
  Fixed A = get_area(a, b, c);
  std::cout << "\tTotal Area is: " << UNDL_A << A << RST << std::endl;

  /* Areas of Triangles inside the main Tiangle(A) */
  Fixed A1 = get_area(point, b, c);
  Fixed A2 = get_area(a, point, c);
  Fixed A3 = get_area(a, b, point);
  Fixed sum = A1 + A2 + A3;
  
  std::cout << "\tArea1 (Point, B, C): " << UNDL_A << A1 << RST << std::endl;
  std::cout << "\tArea2 (A, Point, C): " << UNDL_A << A2 << RST << std::endl;
  std::cout << "\tArea3 (A, B, Point): " << UNDL_A << A3 << RST << std::endl;
  std::cout << "\tSum is: " << BOLD_A << sum << RST << std::endl;

  /* If P lies inside the triangle, then: [sum == A] */
  if (sum == A) {
    return true;    
  }
  return false;
}
