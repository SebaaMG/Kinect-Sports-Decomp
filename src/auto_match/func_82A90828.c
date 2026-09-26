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
extern int fn_82A8F868();


void fn_82A90828(int param_1,uint *param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 0xc);
  if ((ulonglong)*param_2 <= (ulonglong)*(uint *)(param_1 + 0xc)) {
    uVar10 = (ulonglong)*param_2;
  }
  if (uVar10 != 0) {
    param_2 = param_2 + 0x1a;
    do {
      fn_82A8F868(param_1,param_2 + -0x18,param_3,param_4,param_5);
      puVar2 = param_2 + 0xe;
      puVar3 = param_2 + -0xe;
      uVar10 = uVar10 - 1;
      puVar4 = param_2 + -0xd;
      param_5 = param_5 + 0x30;
      puVar5 = param_2 + -0xc;
      puVar6 = param_2 + 0xc;
      puVar7 = param_2 + -1;
      puVar8 = param_2 + 0xd;
      puVar9 = param_2 + 1;
      uVar1 = *param_2;
      param_2 = param_2 + 0x27;
      param_4 = (ulonglong)*puVar3 + (ulonglong)*puVar2 + (ulonglong)*puVar4 + (ulonglong)*puVar8 +
                (ulonglong)*puVar5 + (ulonglong)*puVar6 + (ulonglong)*puVar7 + (ulonglong)*puVar9 +
                (ulonglong)uVar1 + param_4;
    } while (uVar10 != 0);
  }
  return;
}

