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


void fn_825AF850(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  byte bVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = param_3 >> 3;
  param_3 = param_3 & 7;
  uVar5 = 3;
  do {
    iVar1 = (int)uVar4;
    if (param_3 == 0) {
      if (uVar5 < 8) {
        uVar2 = 8 - uVar5;
        bVar3 = (byte)((1L << (uVar5 & 0x7f)) + -1 << (uVar2 & 0x7f));
        uVar5 = 0;
        bVar3 = (byte)(param_2 << (uVar2 & 0x7f)) & bVar3 | ~bVar3 & *(byte *)(iVar1 + param_1);
        goto LAB_825af920;
      }
      uVar5 = uVar5 - 8;
      uVar4 = uVar4 + 1;
      *(char *)(iVar1 + param_1) = (char)(param_2 >> (uVar5 & 0x7f));
    }
    else {
      uVar2 = 8 - param_3;
      if (uVar5 < 8 - param_3) {
        uVar2 = uVar5;
      }
      uVar5 = uVar5 - uVar2;
      param_3 = (8 - uVar2) - param_3;
      bVar3 = (byte)((1L << (uVar2 & 0x7f)) + -1 << (param_3 & 0x7f));
      uVar4 = uVar4 + 1;
      bVar3 = (byte)((param_2 >> (uVar5 & 0x7f)) << (param_3 & 0x7f)) & bVar3 |
              ~bVar3 & *(byte *)(iVar1 + param_1);
      param_3 = 0;
LAB_825af920:
      *(byte *)(iVar1 + param_1) = bVar3;
    }
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}

