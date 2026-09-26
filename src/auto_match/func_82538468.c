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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern int fn_82537D18();
extern int fn_82538598();
extern int fn_82F622A8();
extern int fn_82F691F0();


void fn_82538468(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [256];
  
  uVar2 = *param_1;
  uVar1 = (int)(param_1[1] - uVar2) / 0xc4;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82537D18(auStack_110,param_1,param_2 * 0xc4 + (ulonglong)uVar2);
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    lVar4 = param_2 - (longlong)(int)uVar1;
    if ((0x14e5e0aU - lVar4 & 0xffffffff) < (ulonglong)uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = (int)uVar1 + lVar4;
    uVar1 = (int)(param_1[2] - uVar2) / 0xc4;
    if ((ulonglong)uVar1 < (uVar5 & 0xffffffff)) {
      uVar3 = 0;
      if ((ulonglong)uVar1 <= (0x14e5e0a - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
        uVar3 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
      }
      if ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar3 = uVar5;
      }
      fn_82538598(param_1,uVar3);
    }
    if (param_2 != (longlong)((int)(param_1[1] - *param_1) / 0xc4)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_100,0,0xc4);
    }
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0xc4) * 0xc4 + param_1[1];
  }
  return;
}

