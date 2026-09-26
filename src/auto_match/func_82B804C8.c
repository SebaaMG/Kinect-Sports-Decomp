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
#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int INFINITY;
extern double _seed_nan;
extern int fn_82B16720();
extern int fn_82F6E018();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


double fn_82B804C8(double param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 == lbl_82005758) {
    return lbl_82005758;
  }
  if (lbl_82005710 <= param_1) {
    dVar3 = lbl_82005758;
    dVar4 = lbl_82005710;
    iVar1 = fn_82F6E018(param_1);
    if (iVar1 < 1) {
LAB_82b8056c:
      dVar3 = (double)fn_82B16720(dVar3 / SQRT(param_1));
      return dVar3;
    }
    if ((2 < iVar1) && (iVar1 != 4)) {
      if (iVar1 == 0x20) {
        fVar2 = -INFINITY;
      }
      else {
        if (iVar1 != 0x40) {
          if (iVar1 == 0x200) {
            return dVar4;
          }
          goto LAB_82b8056c;
        }
        fVar2 = INFINITY;
      }
      goto LAB_82b80510;
    }
  }
  fVar2 = -(_seed_nan);
LAB_82b80510:
  return (double)fVar2;
}

