/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.PrePost.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:32:26 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 14:44:17 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator++( void )
{
  _value += 1;
  return (*this);
}

Fixed& Fixed::operator--( void )
{
  _value -= 1;
  return (*this);
}

Fixed Fixed::operator++( int )
{
  Fixed temp = *this;
  _value += 1;
  return (temp);
}

Fixed Fixed::operator--( int )
{
  Fixed temp = *this;
  _value -= 1;
  return (temp);
}
