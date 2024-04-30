/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:30 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/30 08:43:46 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
  return ;
}

Fixed::Fixed( const int x ) : _value(x << _scale)
{
  return ;
}

Fixed::Fixed( const float x ) : _value(roundf(x * (float)(1 << _scale)))
{
  return ;
}

Fixed::Fixed( Fixed const & src)
{
  *this = src;

  return ;
}

Fixed::~Fixed()
{
  return ;
}

Fixed&  Fixed::operator=( const Fixed& x)
{
  if (this != &x) {
    _value = x.getRawBits();
  }
  return *this;
}

int Fixed::getRawBits( void ) const
{
  return _value;
}

void  Fixed::setRawBits( int const raw )
{
  _value = raw;

  return ;
}

float Fixed::toFloat( void ) const
{ 
  return (static_cast<float>(_value) / (float)(1 << _scale));
}

int Fixed::toInt( void ) const
{
  return (_value >>_scale);
}

std::ostream& operator<<( std::ostream& o, const Fixed& src)
{
  o << src.toFloat();
  return o;
}

Fixed Fixed::abs( void ) const
{
  if (_value < 0)
    return Fixed(_value * -1);
  return *this;
}
