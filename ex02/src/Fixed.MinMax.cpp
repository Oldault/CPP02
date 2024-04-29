/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.MinMax.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:56:19 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 15:03:39 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
  if (x <= y) {
    return x;
  }
  return y;
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y)
{
  if (x <= y) {
    return x;
  }
  return y;
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
  if (x >= y) {
    return x;
  }
  return y;
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y)
{
  if (x >= y) {
    return x;
  }
  return y;
}
