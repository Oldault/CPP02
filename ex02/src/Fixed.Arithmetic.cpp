/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Arithmetic.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:21:34 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 15:05:52 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed  Fixed::operator+( const Fixed& num) const
{  
  return Fixed(this->toFloat() + num.toFloat());
}

Fixed  Fixed::operator-( const Fixed& num) const
{
  return Fixed(this->toFloat() - num.toFloat());
}

Fixed Fixed::operator*( const Fixed& num) const
{
  return Fixed(this->toFloat() * num.toFloat());
}


Fixed Fixed::operator/( const Fixed& num) const
{
  return Fixed(this->toFloat() / num.toFloat());
}
