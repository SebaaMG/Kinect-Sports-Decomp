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
extern unsigned int lbl_831BB454;
extern unsigned int lbl_831BB458;
extern unsigned int lbl_831BB45C;
extern unsigned int lbl_831BB460;
extern unsigned int lbl_831BB470;
extern unsigned int lbl_831BB480;
extern unsigned int lbl_831BB488;
extern unsigned int lbl_831BB490;
extern unsigned int lbl_831BB498;
extern unsigned int lbl_831BB4A0;
extern unsigned int lbl_831BB4A8;
extern unsigned int lbl_831BB4B0;
extern unsigned int lbl_831BB4B8;
extern unsigned int lbl_831BB4C0;
extern unsigned int lbl_831BB4C8;


/* WARNING: Removing unreachable block (ram,0x82f65ca4) */
/* WARNING: Removing unreachable block (ram,0x82f65cac) */
/* WARNING: Removing unreachable block (ram,0x82f65d18) */
/* WARNING: Removing unreachable block (ram,0x82f65d28) */
/* WARNING: Removing unreachable block (ram,0x82f65d2c) */

double fn_82F65E18(double param_1)

{
  uint uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = ABS(param_1);
  dVar3 = (double)lbl_831BB45C;
  bVar2 = dVar4 <= dVar3;
  if (bVar2) {
    dVar3 = dVar4 * dVar4;
  }
  else {
    dVar3 = ((double)lbl_831BB454 - dVar4) * dVar3;
    dVar4 = -(SQRT(dVar3) * (double)lbl_831BB458);
  }
  uVar1 = (uint)bVar2;
  dVar4 = (((((lbl_831BB4A0 * dVar3 + lbl_831BB498) * dVar3 + lbl_831BB490) * dVar3 + lbl_831BB488)
            * dVar3 + lbl_831BB480) * dVar3 * dVar4) /
          (((((lbl_831BB4C8 + dVar3) * dVar3 + lbl_831BB4C0) * dVar3 + lbl_831BB4B8) * dVar3 +
           lbl_831BB4B0) * dVar3 + lbl_831BB4A8) + dVar4;
  dVar3 = (double)(&lbl_831BB460)[uVar1] - dVar4;
  if (param_1 < 0.0) {
    dVar3 = *(double *)(&lbl_831BB470 + uVar1 * 8) + dVar4;
  }
  return dVar3;
}

