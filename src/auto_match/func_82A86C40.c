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


void fn_82A86C40(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
  if ((longlong)uVar2 < 0) {
    return;
  }
  lVar3 = (uVar2 & 0x7fffff) << 9;
  do {
    lVar4 = 0x14;
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x2c) + lVar3 + 0x1d4;
    do {
      puVar1 = (undefined4 *)lVar5;
      if (puVar1[-1] == param_2) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + -0x18;
    } while (lVar4 != 0);
    uVar2 = uVar2 - 1;
    lVar3 = lVar3 + -0x200;
  } while (-1 < (longlong)uVar2);
  return;
}

