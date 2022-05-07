/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_complex_to_simple_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[100] = {96, 1, 0, 96, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95};
static const casadi_int casadi_s1[58] = {54, 1, 0, 54, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53};
static const casadi_int casadi_s2[56] = {52, 1, 0, 52, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};

/* eval_g_leg_complex_to_simple:(w[96],p[54])->(g[52]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][84] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a2=arg[0]? arg[0][6] : 0;
  a3=arg[1]? arg[1][0] : 0;
  a4=(a2*a3);
  a1=(a1+a4);
  a4=5.0000000000000000e-01;
  a5=arg[0]? arg[0][60] : 0;
  a6=arg[0]? arg[0][63] : 0;
  a7=(a5+a6);
  a8=arg[0]? arg[0][66] : 0;
  a7=(a7+a8);
  a9=arg[0]? arg[0][69] : 0;
  a7=(a7+a9);
  a10=1.3300000000000001e+01;
  a7=(a7/a10);
  a7=(a4*a7);
  a11=casadi_sq(a3);
  a7=(a7*a11);
  a1=(a1+a7);
  a0=(a0-a1);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][85] : 0;
  a1=arg[0]? arg[0][1] : 0;
  a7=arg[0]? arg[0][7] : 0;
  a12=(a7*a3);
  a1=(a1+a12);
  a12=arg[0]? arg[0][61] : 0;
  a13=arg[0]? arg[0][64] : 0;
  a14=(a12+a13);
  a15=arg[0]? arg[0][67] : 0;
  a14=(a14+a15);
  a16=arg[0]? arg[0][70] : 0;
  a14=(a14+a16);
  a14=(a14/a10);
  a14=(a4*a14);
  a14=(a14*a11);
  a1=(a1+a14);
  a0=(a0-a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][86] : 0;
  a1=arg[0]? arg[0][2] : 0;
  a14=arg[0]? arg[0][8] : 0;
  a17=(a14*a3);
  a1=(a1+a17);
  a17=arg[0]? arg[0][62] : 0;
  a18=arg[0]? arg[0][65] : 0;
  a19=(a17+a18);
  a20=arg[0]? arg[0][68] : 0;
  a19=(a19+a20);
  a21=arg[0]? arg[0][71] : 0;
  a19=(a19+a21);
  a19=(a19/a10);
  a22=9.8100000000000005e+00;
  a19=(a19-a22);
  a19=(a4*a19);
  a19=(a19*a11);
  a1=(a1+a19);
  a0=(a0-a1);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][87] : 0;
  a1=arg[0]? arg[0][3] : 0;
  a0=(a0-a1);
  a19=arg[0]? arg[0][9] : 0;
  a11=arg[0]? arg[0][4] : 0;
  a23=cos(a11);
  a24=(a19*a23);
  a25=arg[0]? arg[0][11] : 0;
  a26=cos(a1);
  a27=(a25*a26);
  a28=sin(a11);
  a27=(a27*a28);
  a24=(a24+a27);
  a27=arg[0]? arg[0][10] : 0;
  a1=sin(a1);
  a29=(a27*a1);
  a29=(a29*a28);
  a24=(a24+a29);
  a24=(a24/a23);
  a24=(a24*a3);
  a0=(a0-a24);
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[0]? arg[0][88] : 0;
  a0=(a0-a11);
  a11=(a27*a26);
  a24=(a25*a1);
  a11=(a11-a24);
  a11=(a11*a3);
  a0=(a0-a11);
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[0]? arg[0][89] : 0;
  a11=arg[0]? arg[0][5] : 0;
  a0=(a0-a11);
  a24=(a25*a26);
  a29=(a27*a1);
  a24=(a24+a29);
  a24=(a24/a23);
  a24=(a24*a3);
  a0=(a0-a24);
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[0]? arg[0][90] : 0;
  a24=(a5+a6);
  a24=(a24+a8);
  a24=(a24+a9);
  a24=(a24/a10);
  a24=(a24*a3);
  a2=(a2+a24);
  a0=(a0-a2);
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[0]? arg[0][91] : 0;
  a2=(a12+a13);
  a2=(a2+a15);
  a2=(a2+a16);
  a2=(a2/a10);
  a2=(a2*a3);
  a7=(a7+a2);
  a0=(a0-a7);
  if (res[0]!=0) res[0][7]=a0;
  a0=arg[0]? arg[0][92] : 0;
  a7=(a17+a18);
  a7=(a7+a20);
  a7=(a7+a21);
  a7=(a7/a10);
  a7=(a7-a22);
  a7=(a7*a3);
  a14=(a14+a7);
  a0=(a0-a14);
  if (res[0]!=0) res[0][8]=a0;
  a0=9.3212278260869572e-02;
  a14=arg[0]? arg[0][93] : 0;
  a14=(a14-a19);
  a0=(a0*a14);
  a7=2.8968800000000020e-02;
  a22=(a27*a25);
  a7=(a7*a22);
  a22=arg[1]? arg[1][2] : 0;
  a10=(a22*a28);
  a2=arg[1]? arg[1][4] : 0;
  a24=(a2*a23);
  a29=cos(a11);
  a24=(a24*a29);
  a10=(a10+a24);
  a10=(a10*a12);
  a24=arg[1]? arg[1][3] : 0;
  a30=(a24*a28);
  a31=(a2*a23);
  a11=sin(a11);
  a31=(a31*a11);
  a30=(a30+a31);
  a30=(a30*a5);
  a10=(a10-a30);
  a30=(a24*a29);
  a31=(a22*a11);
  a30=(a30-a31);
  a30=(a23*a30);
  a30=(a30*a17);
  a10=(a10-a30);
  a30=arg[1]? arg[1][6] : 0;
  a31=(a30*a28);
  a32=arg[1]? arg[1][7] : 0;
  a33=(a32*a23);
  a33=(a33*a11);
  a31=(a31+a33);
  a31=(a31*a6);
  a10=(a10-a31);
  a31=arg[1]? arg[1][5] : 0;
  a33=(a31*a28);
  a34=(a32*a23);
  a34=(a34*a29);
  a33=(a33+a34);
  a33=(a33*a13);
  a10=(a10+a33);
  a33=(a30*a29);
  a34=(a31*a11);
  a33=(a33-a34);
  a33=(a23*a33);
  a33=(a33*a18);
  a10=(a10-a33);
  a33=arg[1]? arg[1][9] : 0;
  a34=(a33*a28);
  a35=arg[1]? arg[1][10] : 0;
  a36=(a35*a23);
  a36=(a36*a11);
  a34=(a34+a36);
  a34=(a34*a8);
  a10=(a10-a34);
  a34=arg[1]? arg[1][8] : 0;
  a36=(a34*a28);
  a37=(a35*a23);
  a37=(a37*a29);
  a36=(a36+a37);
  a36=(a36*a15);
  a10=(a10+a36);
  a36=(a33*a29);
  a37=(a34*a11);
  a36=(a36-a37);
  a36=(a23*a36);
  a36=(a36*a20);
  a10=(a10-a36);
  a36=arg[1]? arg[1][12] : 0;
  a37=(a36*a28);
  a38=arg[1]? arg[1][13] : 0;
  a39=(a38*a23);
  a39=(a39*a11);
  a37=(a37+a39);
  a37=(a37*a9);
  a10=(a10-a37);
  a37=arg[1]? arg[1][11] : 0;
  a39=(a37*a28);
  a40=(a38*a23);
  a40=(a40*a29);
  a39=(a39+a40);
  a39=(a39*a16);
  a10=(a10+a39);
  a39=(a36*a29);
  a40=(a37*a11);
  a39=(a39-a40);
  a39=(a23*a39);
  a39=(a39*a21);
  a10=(a10-a39);
  a7=(a7-a10);
  a7=(a7*a3);
  a0=(a0+a7);
  if (res[0]!=0) res[0][9]=a0;
  a0=4.3125046780173909e-01;
  a7=(a0*a26);
  a10=arg[0]? arg[0][94] : 0;
  a10=(a10-a27);
  a7=(a7*a10);
  a39=-4.6021926780173911e-01;
  a39=(a39*a1);
  a40=arg[0]? arg[0][95] : 0;
  a40=(a40-a25);
  a39=(a39*a40);
  a7=(a7+a39);
  a39=-1.3877787807814460e-17;
  a41=26445640661418040.;
  a42=(a25*a26);
  a41=(a41*a42);
  a42=24358218631252112.;
  a43=(a27*a1);
  a42=(a42*a43);
  a41=(a41+a42);
  a41=(a19*a41);
  a39=(a39*a41);
  a41=(a22*a29);
  a42=(a24*a11);
  a41=(a41+a42);
  a41=(a41*a17);
  a42=(a2*a29);
  a42=(a42*a5);
  a2=(a2*a11);
  a2=(a2*a12);
  a42=(a42+a2);
  a41=(a41-a42);
  a42=(a32*a29);
  a42=(a42*a6);
  a41=(a41-a42);
  a32=(a32*a11);
  a32=(a32*a13);
  a41=(a41-a32);
  a32=(a31*a29);
  a42=(a30*a11);
  a32=(a32+a42);
  a32=(a32*a18);
  a41=(a41+a32);
  a32=(a35*a29);
  a32=(a32*a8);
  a41=(a41-a32);
  a35=(a35*a11);
  a35=(a35*a15);
  a41=(a41-a35);
  a35=(a34*a29);
  a32=(a33*a11);
  a35=(a35+a32);
  a35=(a35*a20);
  a41=(a41+a35);
  a35=(a38*a29);
  a35=(a35*a9);
  a41=(a41-a35);
  a38=(a38*a11);
  a38=(a38*a16);
  a41=(a41-a38);
  a29=(a37*a29);
  a11=(a36*a11);
  a29=(a29+a11);
  a29=(a29*a21);
  a41=(a41+a29);
  a39=(a39-a41);
  a39=(a39*a3);
  a7=(a7+a39);
  if (res[0]!=0) res[0][10]=a7;
  a7=-9.3212278260869572e-02;
  a7=(a7*a28);
  a7=(a7*a14);
  a14=(a23*a1);
  a0=(a0*a14);
  a0=(a0*a10);
  a7=(a7+a0);
  a0=4.6021926780173911e-01;
  a10=(a26*a23);
  a0=(a0*a10);
  a0=(a0*a40);
  a7=(a7+a0);
  a0=-2.8968800000000020e-02;
  a40=(a27*a25);
  a40=(a40*a28);
  a0=(a0*a40);
  a40=3.3803818954086950e-01;
  a27=(a19*a27);
  a27=(a27*a26);
  a27=(a27*a23);
  a40=(a40*a27);
  a0=(a0+a40);
  a40=3.6700698954086952e-01;
  a19=(a19*a25);
  a19=(a19*a23);
  a19=(a19*a1);
  a40=(a40*a19);
  a0=(a0-a40);
  a24=(a24*a5);
  a22=(a22*a12);
  a24=(a24-a22);
  a30=(a30*a6);
  a24=(a24+a30);
  a31=(a31*a13);
  a24=(a24-a31);
  a33=(a33*a8);
  a24=(a24+a33);
  a34=(a34*a15);
  a24=(a24-a34);
  a36=(a36*a9);
  a24=(a24+a36);
  a37=(a37*a16);
  a24=(a24-a37);
  a0=(a0-a24);
  a0=(a0*a3);
  a7=(a7+a0);
  if (res[0]!=0) res[0][11]=a7;
  a7=arg[1]? arg[1][1] : 0;
  a0=(a7*a17);
  a0=(a5-a0);
  if (res[0]!=0) res[0][12]=a0;
  a0=(a7*a17);
  a5=(a5+a0);
  a5=(-a5);
  if (res[0]!=0) res[0][13]=a5;
  a5=(a7*a17);
  a5=(a12-a5);
  if (res[0]!=0) res[0][14]=a5;
  a17=(a7*a17);
  a12=(a12+a17);
  a12=(-a12);
  if (res[0]!=0) res[0][15]=a12;
  a12=(a7*a18);
  a12=(a6-a12);
  if (res[0]!=0) res[0][16]=a12;
  a12=(a7*a18);
  a6=(a6+a12);
  a6=(-a6);
  if (res[0]!=0) res[0][17]=a6;
  a6=(a7*a18);
  a6=(a13-a6);
  if (res[0]!=0) res[0][18]=a6;
  a18=(a7*a18);
  a13=(a13+a18);
  a13=(-a13);
  if (res[0]!=0) res[0][19]=a13;
  a13=(a7*a20);
  a13=(a8-a13);
  if (res[0]!=0) res[0][20]=a13;
  a13=(a7*a20);
  a8=(a8+a13);
  a8=(-a8);
  if (res[0]!=0) res[0][21]=a8;
  a8=(a7*a20);
  a8=(a15-a8);
  if (res[0]!=0) res[0][22]=a8;
  a20=(a7*a20);
  a15=(a15+a20);
  a15=(-a15);
  if (res[0]!=0) res[0][23]=a15;
  a15=(a7*a21);
  a15=(a9-a15);
  if (res[0]!=0) res[0][24]=a15;
  a15=(a7*a21);
  a9=(a9+a15);
  a9=(-a9);
  if (res[0]!=0) res[0][25]=a9;
  a9=(a7*a21);
  a9=(a16-a9);
  if (res[0]!=0) res[0][26]=a9;
  a7=(a7*a21);
  a16=(a16+a7);
  a16=(-a16);
  if (res[0]!=0) res[0][27]=a16;
  a16=arg[1]? arg[1][14] : 0;
  a7=arg[0]? arg[0][12] : 0;
  a21=arg[0]? arg[0][24] : 0;
  a9=(a21*a3);
  a7=(a7+a9);
  a9=arg[0]? arg[0][72] : 0;
  a15=1.0000000000000000e-02;
  a20=(a9/a15);
  a20=(a4*a20);
  a8=casadi_sq(a3);
  a20=(a20*a8);
  a7=(a7+a20);
  a16=(a16-a7);
  if (res[0]!=0) res[0][28]=a16;
  a16=arg[1]? arg[1][15] : 0;
  a7=arg[0]? arg[0][13] : 0;
  a20=arg[0]? arg[0][25] : 0;
  a13=(a20*a3);
  a7=(a7+a13);
  a13=arg[0]? arg[0][73] : 0;
  a18=(a13/a15);
  a18=(a4*a18);
  a18=(a18*a8);
  a7=(a7+a18);
  a16=(a16-a7);
  if (res[0]!=0) res[0][29]=a16;
  a16=arg[1]? arg[1][16] : 0;
  a7=arg[0]? arg[0][14] : 0;
  a18=arg[0]? arg[0][26] : 0;
  a6=(a18*a3);
  a7=(a7+a6);
  a6=arg[0]? arg[0][74] : 0;
  a12=(a6/a15);
  a12=(a4*a12);
  a12=(a12*a8);
  a7=(a7+a12);
  a16=(a16-a7);
  if (res[0]!=0) res[0][30]=a16;
  a16=arg[1]? arg[1][17] : 0;
  a7=arg[0]? arg[0][15] : 0;
  a12=arg[0]? arg[0][27] : 0;
  a17=(a12*a3);
  a7=(a7+a17);
  a17=arg[0]? arg[0][75] : 0;
  a5=(a17/a15);
  a5=(a4*a5);
  a5=(a5*a8);
  a7=(a7+a5);
  a16=(a16-a7);
  if (res[0]!=0) res[0][31]=a16;
  a16=arg[1]? arg[1][18] : 0;
  a7=arg[0]? arg[0][16] : 0;
  a5=arg[0]? arg[0][28] : 0;
  a0=(a5*a3);
  a7=(a7+a0);
  a0=arg[0]? arg[0][76] : 0;
  a24=(a0/a15);
  a24=(a4*a24);
  a24=(a24*a8);
  a7=(a7+a24);
  a16=(a16-a7);
  if (res[0]!=0) res[0][32]=a16;
  a16=arg[1]? arg[1][19] : 0;
  a7=arg[0]? arg[0][17] : 0;
  a24=arg[0]? arg[0][29] : 0;
  a37=(a24*a3);
  a7=(a7+a37);
  a37=arg[0]? arg[0][77] : 0;
  a36=(a37/a15);
  a36=(a4*a36);
  a36=(a36*a8);
  a7=(a7+a36);
  a16=(a16-a7);
  if (res[0]!=0) res[0][33]=a16;
  a16=arg[1]? arg[1][20] : 0;
  a7=arg[0]? arg[0][18] : 0;
  a36=arg[0]? arg[0][30] : 0;
  a34=(a36*a3);
  a7=(a7+a34);
  a34=arg[0]? arg[0][78] : 0;
  a33=(a34/a15);
  a33=(a4*a33);
  a33=(a33*a8);
  a7=(a7+a33);
  a16=(a16-a7);
  if (res[0]!=0) res[0][34]=a16;
  a16=arg[1]? arg[1][21] : 0;
  a7=arg[0]? arg[0][19] : 0;
  a33=arg[0]? arg[0][31] : 0;
  a31=(a33*a3);
  a7=(a7+a31);
  a31=arg[0]? arg[0][79] : 0;
  a30=(a31/a15);
  a30=(a4*a30);
  a30=(a30*a8);
  a7=(a7+a30);
  a16=(a16-a7);
  if (res[0]!=0) res[0][35]=a16;
  a16=arg[1]? arg[1][22] : 0;
  a7=arg[0]? arg[0][20] : 0;
  a30=arg[0]? arg[0][32] : 0;
  a22=(a30*a3);
  a7=(a7+a22);
  a22=arg[0]? arg[0][80] : 0;
  a40=(a22/a15);
  a40=(a4*a40);
  a40=(a40*a8);
  a7=(a7+a40);
  a16=(a16-a7);
  if (res[0]!=0) res[0][36]=a16;
  a16=arg[1]? arg[1][23] : 0;
  a7=arg[0]? arg[0][21] : 0;
  a40=arg[0]? arg[0][33] : 0;
  a19=(a40*a3);
  a7=(a7+a19);
  a19=arg[0]? arg[0][81] : 0;
  a1=(a19/a15);
  a1=(a4*a1);
  a1=(a1*a8);
  a7=(a7+a1);
  a16=(a16-a7);
  if (res[0]!=0) res[0][37]=a16;
  a16=arg[1]? arg[1][24] : 0;
  a7=arg[0]? arg[0][22] : 0;
  a1=arg[0]? arg[0][34] : 0;
  a23=(a1*a3);
  a7=(a7+a23);
  a23=arg[0]? arg[0][82] : 0;
  a25=(a23/a15);
  a25=(a4*a25);
  a25=(a25*a8);
  a7=(a7+a25);
  a16=(a16-a7);
  if (res[0]!=0) res[0][38]=a16;
  a16=arg[1]? arg[1][25] : 0;
  a7=arg[0]? arg[0][23] : 0;
  a25=arg[0]? arg[0][35] : 0;
  a27=(a25*a3);
  a7=(a7+a27);
  a27=arg[0]? arg[0][83] : 0;
  a26=(a27/a15);
  a4=(a4*a26);
  a4=(a4*a8);
  a7=(a7+a4);
  a16=(a16-a7);
  if (res[0]!=0) res[0][39]=a16;
  a16=arg[1]? arg[1][26] : 0;
  a9=(a9/a15);
  a9=(a9*a3);
  a21=(a21+a9);
  a16=(a16-a21);
  if (res[0]!=0) res[0][40]=a16;
  a16=arg[1]? arg[1][27] : 0;
  a13=(a13/a15);
  a13=(a13*a3);
  a20=(a20+a13);
  a16=(a16-a20);
  if (res[0]!=0) res[0][41]=a16;
  a16=arg[1]? arg[1][28] : 0;
  a6=(a6/a15);
  a6=(a6*a3);
  a18=(a18+a6);
  a16=(a16-a18);
  if (res[0]!=0) res[0][42]=a16;
  a16=arg[1]? arg[1][29] : 0;
  a17=(a17/a15);
  a17=(a17*a3);
  a12=(a12+a17);
  a16=(a16-a12);
  if (res[0]!=0) res[0][43]=a16;
  a16=arg[1]? arg[1][30] : 0;
  a0=(a0/a15);
  a0=(a0*a3);
  a5=(a5+a0);
  a16=(a16-a5);
  if (res[0]!=0) res[0][44]=a16;
  a16=arg[1]? arg[1][31] : 0;
  a37=(a37/a15);
  a37=(a37*a3);
  a24=(a24+a37);
  a16=(a16-a24);
  if (res[0]!=0) res[0][45]=a16;
  a16=arg[1]? arg[1][32] : 0;
  a34=(a34/a15);
  a34=(a34*a3);
  a36=(a36+a34);
  a16=(a16-a36);
  if (res[0]!=0) res[0][46]=a16;
  a16=arg[1]? arg[1][33] : 0;
  a31=(a31/a15);
  a31=(a31*a3);
  a33=(a33+a31);
  a16=(a16-a33);
  if (res[0]!=0) res[0][47]=a16;
  a16=arg[1]? arg[1][34] : 0;
  a22=(a22/a15);
  a22=(a22*a3);
  a30=(a30+a22);
  a16=(a16-a30);
  if (res[0]!=0) res[0][48]=a16;
  a16=arg[1]? arg[1][35] : 0;
  a19=(a19/a15);
  a19=(a19*a3);
  a40=(a40+a19);
  a16=(a16-a40);
  if (res[0]!=0) res[0][49]=a16;
  a16=arg[1]? arg[1][36] : 0;
  a23=(a23/a15);
  a23=(a23*a3);
  a1=(a1+a23);
  a16=(a16-a1);
  if (res[0]!=0) res[0][50]=a16;
  a16=arg[1]? arg[1][37] : 0;
  a27=(a27/a15);
  a27=(a27*a3);
  a25=(a25+a27);
  a16=(a16-a25);
  if (res[0]!=0) res[0][51]=a16;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_complex_to_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_complex_to_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_complex_to_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_complex_to_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_complex_to_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_complex_to_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_complex_to_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_complex_to_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_complex_to_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_complex_to_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_complex_to_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_complex_to_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_complex_to_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_complex_to_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_complex_to_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_complex_to_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


