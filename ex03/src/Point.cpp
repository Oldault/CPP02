/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:41:42 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/29 16:00:37 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
  return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
  return ;
}

Point::Point(const Point& src) : _x(src._x), _y(src._y)
{
  return ;
}

Point::~Point()
{
  return ;
}

Point&  Point::operator=( const Point& src)
{
  (void)src;
  return *this;
}
