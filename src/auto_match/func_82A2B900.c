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


void fn_82A2B900(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 0xc9);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar6 = (uint)bVar1 * 8 + iVar4;
  if (param_2 == bVar1) {
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(iVar6 + 5);
    }
  }
  else {
    uVar5 = (undefined1)param_2;
    if (param_2 != *(byte *)(iVar6 + 6)) {
      iVar7 = param_2 * 8 + iVar4;
      bVar2 = *(byte *)(iVar7 + 6);
      bVar3 = *(byte *)(iVar7 + 5);
      *(byte *)((uint)bVar2 * 8 + iVar4 + 5) = bVar3;
      *(byte *)((uint)bVar3 * 8 + iVar4 + 6) = bVar2;
      *(byte *)(iVar7 + 5) = bVar1;
      *(undefined1 *)(iVar7 + 6) = *(undefined1 *)(iVar6 + 6);
      *(undefined1 *)((uint)*(byte *)(iVar6 + 6) * 8 + iVar4 + 5) = uVar5;
      *(undefined1 *)(iVar6 + 6) = uVar5;
    }
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 0xc9) = uVar5;
    }
  }
  return;
}

