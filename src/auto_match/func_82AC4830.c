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
extern unsigned int stack0x00000010;
extern unsigned int stack0xfffffff8;
extern unsigned int uStack00000010;
extern unsigned int uStack_10;


undefined8 fn_82AC4830(ulonglong param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uStack00000010;
  ulonglong uStack_10;
  
  uStack00000010 = param_1;
  uStack00000010 = ((((U64)(uStack00000010)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_1)) & ((U64)0xFFFFFFFF)) << 32));
  puVar8 = &uStack_10;
  pbVar6 = (byte *)&stack0x00000010;
  uStack_10 = param_1 & 0x70000f700;
  do {
    bVar1 = *(byte *)puVar8;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    puVar8 = (ulonglong *)((int)puVar8 + 1);
    pbVar6 = pbVar6 + 1;
  } while (puVar8 != (ulonglong *)&stack0xfffffff8);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    return 0xffffffff80004005;
  }
  iVar3 = *param_2;
  uVar5 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF) >> 9 & 3;
  uVar4 = param_2[iVar3 * 4 + 3];
  uVar7 = uVar4 & 0xffffefff;
  param_2[iVar3 * 4 + 3] = uVar7;
  if (uVar5 == 0) {
    return 0xffffffff80004005;
  }
  if (uVar5 == 1) {
    if ((param_1 & 0x700000000) != 0) {
      return 0xffffffff80004005;
    }
    if (*(char *)(param_3 + 0x28) != '\0') {
      return 0xffffffff80004005;
    }
    if ((uVar4 & 0x800) != 0) {
      return 0xffffffff80004005;
    }
    uVar7 = uVar7 | 0x1800;
  }
  else {
    if (2 < uVar5) {
      if (uVar5 == 3) {
        return 0xffffffff80004005;
      }
      goto LAB_82ac4928;
    }
    if ((param_1 & 0x700000000) != 0) {
      return 0xffffffff80004005;
    }
    if ((uVar4 & 0x400) != 0) {
      return 0xffffffff80004005;
    }
    uVar7 = uVar7 | 0x400;
  }
  param_2[iVar3 * 4 + 3] = uVar7;
LAB_82ac4928:
  uVar4 = param_2[iVar3 * 4 + 3];
  param_2[iVar3 * 4 + 3] = uVar4 | 0x200;
  if ((param_1 & 0x100) == 0) {
    param_2[iVar3 * 4 + 3] = uVar4 & 0xffffffbf | 0x200;
  }
  return 0;
}

