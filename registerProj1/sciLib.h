/*
* Created By: Thomas Osgood
*/
#ifndef SCILIB_H_INCLUDED
#define SCILIB_H_INCLUDED

/* Library Includes */
#include <math.h>

/* Physics Equations */
#define ACCELERATION(vi,vf,t) ((vf-vi)/t)
#define DISTANCE(x,v,t,a) (x+(v*t)+(.5*a*pow(t,2)))
#define FORCEGRAVITY(G,m1,m2,r) ((G*m1*m2)/(r*r))
#define MOMENTUM(m,v) (m*v)
#define MPHTOMS(mph) (mph/2.23694)
#define MSTOMPH(ms) (ms*2.23694)
#define NEWTONSECLAW(m,a) (m*a)
#define VELOCITY(d,t) (d/t)
#define VELOCITYACCEL(v0,a,t) (v0+a*t)
#define WEIGHT(m,g) (m*g)

/* Physics Constants */
#define ATMOSPHERE 101325
#define EARTHGRAVITYACCEL 9.80665
#define EARTHMASS 5.97*pow(10,24)
#define EARTHRADIUSKM 6380
#define JUPITERMASS 1.9*pow(10,27)
#define JUPITERRADIUSKM 71500
#define LIGHTSPEED 299792458
#define MARSMASS 6.42*pow(10,23)
#define MARSRADIUSKM 3400
#define MERCURYMASS 3.3*pow(10,23)
#define MERCURYRADIUSKM 2440
#define MOONMASS 7.36*pow(10,22)
#define MOONRADIUSKM 1740
#define NEPTUNEMASS 1.02*pow(10,26)
#define NEPTUNERADIUSKM 24800
#define PLUTOMASS 1.31*pow(10,22)
#define PLUTORADIUSKM 1180
#define SATURNMASS 5.69*pow(10,26)
#define SATURNRADIUSKM 60300
#define SUNMASS 1.99*pow(10,30)
#define SUNRADIUSKM 696000
#define URANUSMASS 8.68*pow(10,25)
#define URANUSRADIUSKM 25600
#define VENUSMASS 4.87*pow(10,24)
#define VENUSRADIUSKM 6050

#endif // SCILIB_H_INCLUDED
