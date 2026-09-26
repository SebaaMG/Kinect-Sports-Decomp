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


void fn_82819688(int param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  sVar1 = *(short *)(param_1 + 0x84);
  sVar2 = -1;
  while( true ) {
    if (sVar1 == -1) break;
    iVar3 = sVar1 * 0x40 + *(int *)(param_1 + 0x7c);
    lVar5 = (ulonglong)*(uint *)(iVar3 + 0x24) - param_2;
    if (-1 < lVar5) {
      uVar6 = (ulonglong)*(uint *)(iVar3 + 0x20) + param_4;
      if (((param_3 & 0xffff) - 1 & uVar6) != 0) {
        uVar4 = (param_3 & 0xffff) - 1;
        lVar5 = (uVar6 - (uVar4 + uVar6 & ~uVar4)) + lVar5;
      }
      if ((-1 < (int)lVar5) &&
         ((sVar2 == -1 ||
          ((ulonglong)*(uint *)(iVar3 + 0x20) <
           (ulonglong)*(uint *)(sVar2 * 0x40 + *(int *)(param_1 + 0x7c) + 0x20))))) {
        sVar2 = sVar1;
      }
    }
    sVar1 = *(short *)(iVar3 + 0x30);
  }
  return;
}

