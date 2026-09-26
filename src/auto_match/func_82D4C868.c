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


longlong fn_82D4C868(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar3 = param_2;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return lVar3;
  }
  iVar5 = param_1 + 0x20;
  do {
    puVar1 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    iVar4 = iVar4 + 1;
    puVar2 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    iVar5 = iVar5 + 0x10;
    param_2 = param_2 + 0x10;
  } while (iVar4 < *(int *)(param_1 + 0x10));
  return lVar3;
}

