#include "circle.hpp"

novikov::Circle::Circle(double r, double x, double y):
  r(r),
  x(x),
  y(y)
{}

double novikov::Circle::getR() const
{
  return r;
}

double novikov::Circle::getX() const
{
  return x;
}

double novikov::Circle::getY() const
{
  return y;
}
