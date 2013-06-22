
// share and preach the love
// public domain, (c) Greg Jaskiewicz 2013

#define MIN_ABS(x,y) ({ __typeof(x) __a = x; __typeof(y) __b = y; fabs(__a) < fabs(__b) ? __a : __b; })
#define MIN3_ABS(X, Y, Z) ( min_abs(min_abs(X, Y), Z) )


inline double angle_difference(double neworientation, double oldorientation)
{
  double by = MIN3_ABS(neworientation-oldorientation, neworientation-oldorientation+2*M_PI, neworientation-oldorientation-2*M_PI);

  return by;
}

