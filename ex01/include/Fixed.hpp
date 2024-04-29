/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:43 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 10:26:27 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include "Colors.h"
#include <iostream>

class Fixed
{
  private:

    int _value;
    static const int _scale = 8;

  public:

    Fixed();
    Fixed( const int x );
    Fixed( const float x );
    Fixed( const Fixed& src);
    ~Fixed();

    Fixed& operator=( const Fixed& src);

    int getRawBits( void ) const;
    void  setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<( std::ostream& o, const Fixed& src);

#endif /* _FIXED_HPP_ */