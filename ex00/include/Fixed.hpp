/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:01:43 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 09:29:08 by svolodin         ###   ########.fr       */
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
    static const int _fractional_bits = 8;

  public:

    Fixed();
    Fixed( const Fixed& src);
    ~Fixed();

    Fixed& operator=( const Fixed& src);

    int getRawBits( void ) const;
    void  setRawBits( int const raw );
};

#endif /* _FIXED_HPP_ */