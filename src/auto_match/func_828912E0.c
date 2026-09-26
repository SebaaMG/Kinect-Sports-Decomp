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
extern int fn_8288E5C8();
extern int fn_828B5580();
extern int fn_828E62F0();
extern int fn_82F622A8();


void fn_828912E0(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (0x1fffffff < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) >> 3) < (param_2 & 0xffffffff)) {
    uVar3 = fn_828E62F0(param_1 + 3,param_2);
    uVar6 = (ulonglong)*param_1;
    uVar1 = param_1[1];
    uVar5 = uVar3;
    if (uVar6 != uVar1) {
      do {
        if ((uVar5 & 0xffffffff) != 0) {
          fn_828B5580(uVar5,uVar6);
        }
        uVar6 = uVar6 + 8;
        uVar5 = uVar5 + 8;
      } while ((uVar6 & 0xffffffff) != (ulonglong)uVar1);
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_8288E5C8(uVar1,uVar2,param_1 + 3);
      fn_8265CA20(*param_1);
    }
    uVar4 = (uint)uVar3;
    *param_1 = uVar4;
    param_1[2] = (int)((param_2 & 0xffffffff) << 3) + uVar4;
    param_1[1] = ((int)(uVar2 - uVar1) >> 3) * 8 + uVar4;
  }
  return;
}

