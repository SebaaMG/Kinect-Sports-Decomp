typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F67DE8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200F058;
extern unsigned int lbl_820105A0;
extern unsigned int lbl_820153F8;
extern unsigned int lbl_82015400;
extern float lbl_82015408;
extern unsigned int lbl_82015410;
extern unsigned int lbl_82015418;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827792C0(double param_1,double param_2,double param_3)

{
  double *in_r6;
  double *in_r7;
  double *in_r8;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_3;
  dVar3 = param_3;
  if (param_1 != lbl_82005710) {
    if ((param_1 <= lbl_82005710) || (lbl_82015418 <= param_1)) {
      if ((param_1 < lbl_82015418) || (lbl_82015400 <= param_1)) {
        dVar3 = (double)fn_82F67DE8(param_1 - lbl_820153F8);
        dVar3 = (dVar3 / SQRT(lbl_820105A0)) * lbl_82015408;
        param_3 = (lbl_82005758 - param_2) * dVar1;
        dVar3 = (dVar3 + lbl_82015408) * dVar1 - (dVar3 + lbl_82005730) * param_3;
        dVar1 = (dVar1 * lbl_820105A0 - dVar3) - param_3;
      }
      else {
        dVar1 = (double)fn_82F67DE8(param_1 - lbl_8200F058);
        dVar1 = (dVar1 / SQRT(lbl_820105A0)) * lbl_82015408;
        dVar3 = (lbl_82005758 - param_2) * param_3;
        dVar1 = (dVar1 + lbl_82015408) * param_3 - (dVar1 + lbl_82005730) * dVar3;
        param_3 = (param_3 * lbl_820105A0 - dVar1) - dVar3;
      }
    }
    else {
      dVar1 = (double)fn_82F67DE8(param_1 - lbl_82015410);
      dVar2 = (dVar1 / SQRT(lbl_820105A0)) * lbl_82015408;
      dVar1 = (lbl_82005758 - param_2) * dVar3;
      param_3 = (dVar2 + lbl_82015408) * dVar3 - (dVar2 + lbl_82005730) * dVar1;
      dVar3 = (dVar3 * lbl_820105A0 - param_3) - dVar1;
    }
  }
  *in_r6 = dVar3;
  *in_r7 = param_3;
  *in_r8 = dVar1;
  return;
}

