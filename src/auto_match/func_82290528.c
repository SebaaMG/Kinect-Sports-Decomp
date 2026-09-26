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
extern unsigned int *auStack_230;
extern int fn_82290858();
extern int fn_82F622A8();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82290570) */

void fn_82290528(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_230 [560];
  
  uVar1 = *param_1;
  uVar2 = (int)(param_1[1] - uVar1) >> 9;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar2) {
    uVar5 = (param_2 & 0x7fffff) * 0x200 + (ulonglong)uVar1;
    if ((uVar5 & 0xffffffff) != (ulonglong)param_1[1]) {
      if ((uVar5 & 0xffffffff) != (ulonglong)param_1[1]) {
        uVar4 = uVar5;
        do {
          uVar4 = uVar4 + 0x200;
        } while ((uVar4 & 0xffffffff) != (ulonglong)param_1[1]);
      }
      param_1[1] = (uint)uVar5;
    }
  }
  else if ((ulonglong)uVar2 < (param_2 & 0xffffffff)) {
    lVar3 = param_2 - (longlong)(int)uVar2;
    if ((0x7fffffU - lVar3 & 0xffffffff) < (ulonglong)uVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = lVar3 + (int)uVar2;
    uVar1 = (int)(param_1[2] - uVar1) >> 9;
    if ((ulonglong)uVar1 < (uVar5 & 0xffffffff)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 <= (0x7fffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
        uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
      }
      if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar4 = uVar5;
      }
      fn_82290858(param_1,uVar4);
    }
    if (param_2 != (longlong)((int)(param_1[1] - *param_1) >> 9)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_230,0,0x200);
    }
    param_1[1] = (int)((param_2 - (longlong)((int)(param_1[1] - *param_1) >> 9) & 0xffffffff) << 9)
                 + param_1[1];
  }
  return;
}

