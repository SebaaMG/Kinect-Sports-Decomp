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
extern unsigned int *auStack_60;
extern int fn_82D44CE0();


ulonglong fn_82D44E48(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint auStack_60 [24];
  ushort *puVar6;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar7 = (uint)param_2 >> (uVar1 & 0x3f);
  param_2 = uVar2 & param_2;
  if (uVar7 == 0) {
    if ((int)(param_2 + 1) < *(int *)(param_1 + 0x60)) {
      return param_2 + 1;
    }
    uVar7 = 1;
    param_2 = 0xffffffffffffffff;
  }
  uVar8 = (1 << (0x20 - uVar1 & 0x3f)) - 1;
  if (uVar7 != uVar8) {
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar10 = uVar7 - 1;
    if (iVar10 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x68);
      puVar9 = (ushort *)(iVar10 * 0x50 + iVar4 + 0x44);
      do {
        auStack_60[0] = 0;
        if (*puVar9 == 0xffff) {
          puVar6 = puVar9 + -0x22;
        }
        else {
          puVar6 = (ushort *)((uint)*puVar9 * 0x50 + iVar4);
        }
        uVar5 = fn_82D44CE0(puVar6,param_2,auStack_60);
        if (((int)uVar5 != -1) && ((int)uVar5 <= (int)uVar2)) {
          return (ulonglong)
                 ((auStack_60[0] & 1) << (*(uint *)(param_1 + 8) & 0x3f) |
                 iVar10 + 1 << (uVar1 & 0x3f)) | *(uint *)(param_1 + 0x10) & uVar5;
        }
        iVar10 = iVar10 + 1;
        param_2 = 0xffffffffffffffff;
        puVar9 = puVar9 + 0x28;
      } while (iVar10 < iVar3);
    }
  }
  if ((int)(param_2 + 1) < *(int *)(param_1 + 0x78)) {
    uVar5 = (ulonglong)(uVar8 << (uVar1 & 0x3f)) | param_2 + 1;
  }
  else {
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

