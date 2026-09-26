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
extern int fn_8265CA20();
extern int fn_8286A1E0();
extern int fn_82878160();
extern int fn_82878358();
extern int fn_82F622A8();
extern unsigned int uStack_50;


void fn_828787F0(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 uStack_50;
  
  if (0x5555555 < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x30) < (param_2 & 0xffffffff)) {
    uVar3 = fn_82878160(param_2,0);
    uVar1 = param_1[1];
    uVar5 = uVar3;
    for (uVar6 = (ulonglong)*param_1; (uVar6 & 0xffffffff) != (ulonglong)uVar1; uVar6 = uVar6 + 0x30
        ) {
      if ((uVar5 & 0xffffffff) != 0) {
        fn_82878358(uVar5,uVar6);
      }
      uVar5 = uVar5 + 0x30;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_8286A1E0(uVar1,uVar2,param_1 + 3,uStack_50);
      fn_8265CA20(*param_1);
    }
    uVar4 = (uint)uVar3;
    *param_1 = uVar4;
    param_1[2] = (int)param_2 * 0x30 + uVar4;
    param_1[1] = ((int)(uVar2 - uVar1) / 0x30) * 0x30 + uVar4;
  }
  return;
}

