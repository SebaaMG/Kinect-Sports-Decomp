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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFB0;
extern unsigned int lbl_8201DFB4;
extern unsigned int lbl_8201DFB8;
extern unsigned int lbl_8201DFBC;
extern unsigned int lbl_8201DFC0;
extern unsigned int lbl_8201DFC4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82809FC0(ushort param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  
  uVar3 = param_1 & 0xe000;
  fVar1 = (float)(longlong)(short)(param_1 << 2);
  fVar2 = fVar1 * fVar1;
  if ((param_1 & 0xe000) != 0) {
    if ((uVar3 == 0x2000) || (uVar3 == 0x4000)) {
      return -(double)(((fVar2 * lbl_8201DFC4 - lbl_8201DFC0) * fVar2 + lbl_8201DFBC) * fVar1);
    }
    if ((uVar3 == 0x6000) || (uVar3 == 0x8000)) {
      return -(double)((-(fVar2 * lbl_8201DFB8 - lbl_8201DFB4) * fVar2 - lbl_8201DFB0) * fVar2 +
                      lbl_82002AE0);
    }
    if (uVar3 != 0xe000) {
      return (double)(((fVar2 * lbl_8201DFC4 - lbl_8201DFC0) * fVar2 + lbl_8201DFBC) * fVar1);
    }
  }
  return (double)((-(fVar2 * lbl_8201DFB8 - lbl_8201DFB4) * fVar2 - lbl_8201DFB0) * fVar2 +
                 lbl_82002AE0);
}

