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
extern int fn_82644040();
extern int fn_8264D6C0();


void fn_82643B08(uint *param_1)

{
  ulonglong uVar1;
  int *piVar3;
  longlong lVar2;
  uint uVar4;
  
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] =
         ((param_1[3] >> 0x14) + 0x200 & 0x1000) + (param_1[3] & 0x1fffffff) + -0x40000000;
  }
  uVar1 = fn_82644040(param_1[5],param_1[2] >> 2,0x80);
  if (uVar1 == 0) {
    uVar4 = *(uint *)(param_1[5] + 0x4230);
    *param_1 = 0;
  }
  else {
    piVar3 = (int *)uVar1;
    *piVar3 = ((int)((uVar1 + 4 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
              ((uint)(uVar1 + 4) & 0x1fffffff) + -0x40000000;
    if ((int *)param_1[3] == (int *)0x0) {
      *param_1 = (uint)piVar3;
    }
    else {
      *(int *)param_1[3] =
           ((int)((uVar1 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)piVar3 & 0x1fffffff) +
           -0x40000000;
    }
    lVar2 = (((uVar1 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff) + -0x40000000;
    fn_8264D6C0(lVar2,(ulonglong)param_1[2] + lVar2,0);
    uVar4 = (uint)uVar1;
  }
  param_1[1] = uVar4;
  param_1[3] = uVar4 + 4;
  param_1[4] = (param_1[2] - 4 & 0xfffffffc) + uVar4;
  return;
}

