/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:30 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 10:33:10 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
  std::cout << FGRN("Default constructor called\n");

  return ;
}

Fixed::Fixed( const int x ) : _value(x << _scale)
{
  std::cout << FMAG("Int constructor called\n");

  return ;
}

Fixed::Fixed( const float x ) : _value(x * (float)(1<<_scale))
{
  std::cout << FMAG("Float constructor called\n");

  return ;
}

Fixed::Fixed( Fixed const & src)
{
  std::cout << FGRN("Copy constructor called\n");
  *this = src;

  return ;
}

Fixed::~Fixed()
{
  std::cout << FRED("Destructor called\n");

  return ;
}

Fixed&  Fixed::operator=( const Fixed& src)
{
  std::cout << FGRN("Copy assignment operator called\n");
  if (this != &src) {
    _value = src.getRawBits();
  }
  return *this;
}

int Fixed::getRawBits( void ) const
{
  // std::cout << FBLU("getRawBits member function called\n");
  
  return _value;
}

void  Fixed::setRawBits( int const raw )
{
  std::cout << FCYN("setRawBits member function called\n");
  _value = raw;

  return ;
}

float Fixed::toFloat( void ) const
{ 
  return ((float)_value / (float)(1<<_scale));
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
