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


void fn_828194A0(int param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  sVar1 = *(short *)(param_1 + 0x84);
  do {
    if (sVar1 == -1) {
      return;
    }
    iVar2 = sVar1 * 0x40 + *(int *)(param_1 + 0x7c);
    lVar4 = (ulonglong)*(uint *)(iVar2 + 0x24) - param_2;
    if (-1 < lVar4) {
      uVar5 = (ulonglong)*(uint *)(iVar2 + 0x20) + param_4;
      if (((param_3 & 0xffff) - 1 & uVar5) != 0) {
        uVar3 = (param_3 & 0xffff) - 1;
        lVar4 = (uVar5 - (uVar3 + uVar5 & ~uVar3)) + lVar4;
      }
      if (-1 < (int)lVar4) {
        return;
      }
    }
    sVar1 = *(short *)(iVar2 + 0x30);
  } while( true );
}

