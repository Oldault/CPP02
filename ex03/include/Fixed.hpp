/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:43 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 15:07:43 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include "Colors.h"
#include <iostream>
#include <cmath>

class Fixed
{
  private:

    int _value;
    static const int _scale = 8;

  public:

    /* Canonic Orthodox Form */
    Fixed();
    Fixed( const int x );
    Fixed( const float x );
    Fixed( const Fixed& src);
    ~Fixed();

    Fixed& operator=( const Fixed& x);

    /* Arithmetic operators */
    Fixed operator+( const Fixed& x) const;
    Fixed operator-( const Fixed& x) const;
    Fixed operator*( const Fixed& x) const;
    Fixed operator/( const Fixed& x) const;

    /* Comparison operators */
    bool  operator>( const Fixed& x) const;
    bool  operator<( const Fixed& x) const;
    bool  operator>=( const Fixed& x) const;
    bool  operator<=( const Fixed& x) const;
    bool  operator==( const Fixed& x) const;
    bool  operator!=( const Fixed& x) const;

    /* Incremantation & decremantation Operators */
    Fixed& operator++( void );
    Fixed& operator--( void );
    Fixed operator++( int );
    Fixed operator--( int );

    /* Min & Max */
    static Fixed& min(Fixed& x, Fixed& y);
    static const Fixed& min(const Fixed& x, const Fixed& y);
    static Fixed& max(Fixed& x, Fixed& y);
    static const Fixed& max(const Fixed& x, const Fixed& y);

    /* Utils */
    int getRawBits( void ) const;
    void  setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream& operator<<( std::ostream& o, const Fixed& src);

#endif /* _FIXED_HPP_ */