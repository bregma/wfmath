// -*-C++-*-
// point_test.cpp (Point<> test functions)
//
//  The WorldForge Project
//  Copyright (C) 2001  The WorldForge Project
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
//  For information about WorldForge and its authors, please contact
//  the Worldforge Web Site at http://www.worldforge.org.

// Author: Ron Steinke
// Created: 2001-12-12

#include "vector.h"
#include "point.h"
#include "const.h"
#include <iostream>

using namespace WF::Math;

template<const int dim>
void test_point(const Point<dim>& p)
{
  cout << "Testing point: " << p.toString() << std::endl;

  assert(p == Barycenter(1, &p));
  CoordType weight = 5;
  assert(p == Barycenter(1, &p, &weight));

  assert(p == p + (p - p));

  // FIXME
}

int main()
{
  test_point(Point<2>(1, -1));
  test_point(Point<3>(1, -1, WFMATH_CONST_SQRT2));

  return 0;
}
