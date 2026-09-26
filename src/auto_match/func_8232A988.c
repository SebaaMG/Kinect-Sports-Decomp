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


void fn_8232A988(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar5 = param_3 >> 3;
  param_3 = param_3 & 7;
  do {
    iVar1 = (int)uVar5;
    if (param_3 == 0) {
      if (param_4 < 8) {
        bVar2 = (byte)((1L << (param_4 & 0x7f)) + -1 << (8 - param_4 & 0x7f));
        bVar4 = (byte)(param_2 << (8 - param_4 & 0x7f)) & bVar2;
        bVar2 = ~bVar2 & *(byte *)(iVar1 + param_1);
        param_4 = 0;
        goto LAB_8232aa44;
      }
      param_4 = param_4 - 8;
      uVar5 = uVar5 + 1;
      *(char *)(iVar1 + param_1) = (char)(param_2 >> (param_4 & 0x7f));
    }
    else {
      uVar3 = 8 - param_3;
      if (param_4 < 8 - param_3) {
        uVar3 = param_4;
      }
      param_4 = param_4 - uVar3;
      param_3 = (8 - uVar3) - param_3;
      bVar2 = (byte)((1L << (uVar3 & 0x7f)) + -1 << (param_3 & 0x7f));
      bVar4 = (byte)((param_2 >> (param_4 & 0x7f)) << (param_3 & 0x7f)) & bVar2;
      uVar5 = uVar5 + 1;
      bVar2 = ~bVar2 & *(byte *)(iVar1 + param_1);
      param_3 = 0;
LAB_8232aa44:
      *(byte *)(iVar1 + param_1) = bVar4 | bVar2;
    }
    if (param_4 == 0) {
      return;
    }
  } while( true );
}

