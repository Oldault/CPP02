/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Comparison.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:25:07 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 14:29:57 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool  Fixed::operator>( const Fixed& x) const
{
  return (this->toFloat() > x.toFloat());
}

bool  Fixed::operator<( const Fixed& x) const
{
  return (this->toFloat() < x.toFloat());
}

bool  Fixed::operator>=( const Fixed& x) const
{
  return (this->toFloat() >= x.toFloat());
}

bool  Fixed::operator<=( const Fixed& x) const
{
  return (this->toFloat() <= x.toFloat());
}

bool  Fixed::operator==( const Fixed& x) const
{
  return (this->toFloat() == x.toFloat());
}

bool  Fixed::operator!=( const Fixed& x) const
{
  return (this->toFloat() != x.toFloat());
}

