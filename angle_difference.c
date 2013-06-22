
// share and preach the love
// public domain, (c) Greg Jaskiewicz 2013

#define min_abs(X, Y) ( fabs(X) < fabs(Y) ? (X) : (Y) )
#define min3_abs(X, Y, Z) ( min_abs(min_abs(X, Y), Z) )

double angle_difference(double neworientation, double oldorientation)
{
  double newrotation = neworientation*(M_PI/180.0);
  double oldrotation = oldorientation*(M_PI/180.0);

  double by = min3_abs(newrotation-oldrotation, newrotation-oldrotation+2*M_PI, newrotation-oldrotation-2*M_PI);

  return by;
}

