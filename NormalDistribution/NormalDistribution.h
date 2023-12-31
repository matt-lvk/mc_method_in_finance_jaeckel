//
// NormalDistribution.h
//

#ifndef   NORMAL_DISTRIBUTION_H
#define   NORMAL_DISTRIBUTION_H

#include <cmath>

#define ONE_OVER_SQRT_TWO     0.7071067811865475244008443621048490392848359376887
#define ONE_OVER_SQRT_TWO_PI  0.3989422804014326779399460599343818684758586311649
#define SQRT_TWO_PI           2.506628274631000502415765284811045253006986740610

double ErrorFunction(double x);

double CumulativeNormal(double z);

inline double Normal(double x){ return ONE_OVER_SQRT_TWO_PI * exp( -0.5 * (x*x) ); }

// The Inverse cumulative normal distribution function
// by Peter J. Acklam, University of Oslo, Statistics Division.
//
// URL: http://home.online.no/~pjacklam/notes/invnorm/index.html
//
double InverseCumulativeNormal(double x);


#endif // NORMAL_DISTRIBUTION_H

