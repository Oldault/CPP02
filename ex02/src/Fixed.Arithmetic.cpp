/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmetic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:21:34 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 14:21:53 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed  Fixed::operator-( const Fixed& num) const
{
  std::cout << FGRN("Subtraction operation called with: ") << this->toFloat();
  std::cout << FGRN(" and ") << num << std::endl;

  return Fixed(this->toFloat() - num.toFloat());
}

Fixed Fixed::operator*( const Fixed& num) const
{
  std::cout << FGRN("Multiplication operation called with: ") << this->toFloat();
  std::cout << FGRN(" and ") << num << std::endl;

  return Fixed(this->toFloat() * num.toFloat());
}


Fixed Fixed::operator/( const Fixed& num) const
{
  std::cout << FGRN("Division operation called with: ") << this->toFloat();
  std::cout << FGRN(" and ") << num << std::endl;

  return Fixed(this->toFloat() / num.toFloat());
}
