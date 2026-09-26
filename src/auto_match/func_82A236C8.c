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


longlong fn_82A236C8(longlong param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar4 = (param_1 + -4) - (ulonglong)*(ushort *)((int)param_1 + -4);
  iVar1 = (int)lVar4;
  trapWord(6,(ulonglong)*(ushort *)(iVar1 + 6),0);
  if ((ulonglong)*(ushort *)(iVar1 + 8) != 0) {
    do {
      if ((ulonglong)
          *(byte *)((int)((uVar3 - *(ushort *)(iVar1 + 0xc) & 0xffffffff) << 2) +
                    (uint)*(ushort *)(iVar1 + 4) + iVar1) ==
          ((param_1 - lVar4) - 0x14U & 0xffffffff) / (ulonglong)*(ushort *)(iVar1 + 6)) break;
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(ushort *)(iVar1 + 8));
  }
  puVar2 = (uint *)((int)((uVar3 - *(ushort *)(iVar1 + 0xc) & 0xffffffff) << 2) +
                    (uint)*(ushort *)(iVar1 + 4) + iVar1);
  *param_2 = *(byte *)((int)puVar2 + 1) - 1;
  return ((ulonglong)*puVar2 & 0xffff) + lVar4 + 1;
}

