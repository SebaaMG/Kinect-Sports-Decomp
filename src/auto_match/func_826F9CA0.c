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
extern int fn_826F69C8();
extern float lbl_8200571C;


void fn_826F9CA0(double param_1,double param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,ulonglong param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_3;
  fVar2 = (float)((double)*(float *)(iVar1 + 0xb0) * param_1 + (double)*(float *)(iVar1 + 0xb8)) *
          lbl_8200571C;
  fVar3 = (float)((double)*(float *)(iVar1 + 0xb4) * param_2 + (double)*(float *)(iVar1 + 0xbc)) *
          lbl_8200571C;
  if ((param_7 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x9d4)) {
    param_3 = param_3 + 0x144;
    uVar4 = 1;
    if ((param_7 & 0xffffffff) < 4) {
      *(uint *)(iVar1 + 0x93c) = 1 << ((uint)param_7 & 0x3f) | *(uint *)(iVar1 + 0x93c);
      *(float *)((int)((param_7 + 0xfb & 0xffffffff) << 3) + (int)param_3) = fVar2;
      *(float *)((int)((param_7 & 0xffffffff) << 3) + (int)param_3 + 0x7dc) = fVar3;
    }
    lVar5 = 0x10;
    uVar6 = (ulonglong)*(uint *)((uint)param_7 * 0x24 + iVar1 + 0x950);
    do {
      if ((((uVar4 & param_6) != 0) && ((uVar4 & uVar6) == 0)) ||
         (((uVar4 & uVar6) != 0 && ((uVar4 & param_6) == 0)))) {
        fn_826F69C8(param_3);
      }
      lVar5 = lVar5 + -1;
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    } while (lVar5 != 0);
  }
  return;
}

