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


void fn_82778E90(int param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (undefined1)param_4;
  uVar2 = param_4;
  if ((param_3 == 0) || (param_2 < 0)) goto LAB_82778fb4;
  if (0x167 < param_2) {
    param_2 = param_2 % 0x168;
  }
  iVar3 = (int)param_4;
  uVar1 = param_2 / 0x3c;
  uVar7 = (((longlong)(0xff - param_3) * (longlong)iVar3 & 0x7fffffffU) * 2 + 0xff & 0xffffffff) /
          0x1fe;
  uVar2 = uVar7;
  if ((uVar1 & 1) == 0) {
    uVar6 = (((longlong)(0x3bc4 - (0x3c - param_2 % 0x3c) * param_3) * (longlong)iVar3 + 0x1de2U &
             0x7fffffff) << 1) / 0x7788;
    uVar4 = param_4;
    if (uVar1 == 0) {
LAB_82778fb0:
      uVar5 = (undefined1)uVar4;
      param_4 = uVar6;
      goto LAB_82778fb4;
    }
    if (uVar1 != 2) {
      uVar2 = param_4;
      if (uVar1 == 4) {
        uVar5 = (undefined1)uVar6;
        param_4 = uVar7;
      }
      goto LAB_82778fb4;
    }
  }
  else {
    uVar6 = (((longlong)(0x3bc4 - (param_2 % 0x3c) * param_3) * (longlong)iVar3 + 0x1de2U &
             0x7fffffff) << 1) / 0x7788;
    if (uVar1 == 1) {
      uVar5 = (undefined1)uVar6;
      goto LAB_82778fb4;
    }
    uVar2 = param_4;
    uVar4 = uVar7;
    if (uVar1 == 3) goto LAB_82778fb0;
    uVar7 = param_4;
    if (uVar1 != 5) goto LAB_82778fb4;
  }
  uVar5 = (undefined1)uVar7;
  uVar2 = uVar6;
  param_4 = uVar4;
LAB_82778fb4:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(char *)(param_1 + 2) = (char)param_4;
  *(char *)(param_1 + 3) = (char)uVar2;
  return;
}

