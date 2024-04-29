/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:22:37 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 15:43:32 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_

#include "Fixed.hpp"

class Point
{
  private:

    const Fixed _x;
    const Fixed _y;

  public:

    Point();
    Point(const float x, const float y);
    Point(const Point& src);
    ~Point();

    Point& operator=( const Point& src);

};

#endif