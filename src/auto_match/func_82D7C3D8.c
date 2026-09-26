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


void fn_82D7C3D8(int *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *param_3;
  iVar3 = *(int *)(*param_1 + 0xc);
  iVar4 = *(int *)(*param_2 + 0xc);
  iVar5 = iVar3 * 0x20 + iVar4 + iVar7;
  if (param_3[5] == 0) {
    bVar1 = *(byte *)(iVar5 + 0xeb0);
  }
  else {
    bVar1 = *(byte *)(iVar5 + 0x12b0);
  }
  uVar6 = (uint)LZCOUNT(*(int *)((uint)bVar1 * 0x50 + iVar7 + 0x16f0) + -2) >> 5;
  if (bVar1 == 1) {
    cVar2 = *(char *)((*(byte *)((iVar3 + 0xd) * 0x20 + iVar4 + iVar7) + 0x7c) * 0x14 + iVar7);
    uVar6 = (int)cVar2 + ((1 - cVar2) - (uint)(cVar2 == '\0'));
  }
  *param_5 = uVar6;
  if (uVar6 != 0) {
    iVar7 = iVar4 * 0x20 + iVar3 + iVar7;
    if (param_3[5] != 0) {
      *param_4 = (uint)*(byte *)(iVar7 + 0x12b0);
      return;
    }
    *param_4 = (uint)*(byte *)(iVar7 + 0xeb0);
    return;
  }
  *param_4 = (uint)bVar1;
  return;
}

