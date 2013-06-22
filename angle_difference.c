
// share and preach the love
// public domain, (c) Greg Jaskiewicz 2013

#define MIN_ABS(x,y) ({ __typeof(x) __a = x; __typeof(y) __b = y; fabs(__a) < fabs(__b) ? __a : __b; })
#define MIN3_ABS(X, Y, Z) ( min_abs(min_abs(X, Y), Z) )

double angle_difference(double neworientation, double oldorientation)
{
  double newrotation = neworientation*(M_PI/180.0);
  double oldrotation = oldorientation*(M_PI/180.0);

  double by = MIN3_ABS(newrotation-oldrotation, newrotation-oldrotation+2*M_PI, newrotation-oldrotation-2*M_PI);

  return by;
}

