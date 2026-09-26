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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int iStack00000020;
extern unsigned int iStack00000024;
extern unsigned int uRam8323b6bc;
extern unsigned int uRam8323b6c0;
extern unsigned int uRam8323b6c4;


void fn_82D1FD80(int *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iStack00000020;
  int iStack00000024;
  
  iStack00000020 = (int)(param_3 >> 0x20);
  iStack00000024 = (int)param_3;
  param_3 = param_3 & 0xffffffff;
  iVar16 = (int)((param_3 + 5 & 0xffffffff) << 2);
  uVar12 = *(uint *)(iVar16 + iStack00000020);
  uVar5 = uVar12 & 0xfffffffc;
  uVar6 = (ulonglong)uVar12 & 3;
  if (uVar5 == 0) {
    uVar12 = uRam8323b6c4 & 1;
    if ((uRam8323b6c4 & 1) == 0) {
      uRam8323b6c4 = uRam8323b6c4 | 1;
      uRam8323b6c0 = 0;
      uRam8323b6bc = uVar12;
    }
    *(ulonglong *)param_1 = CONCAT44(uRam8323b6bc,uRam8323b6c0);
  }
  else {
    uVar1 = *(uint *)((int)(((-(ulonglong)(param_3 != 2) & param_3 + 1) + 5 & 0xffffffff) << 2) +
                     iStack00000020);
    uVar7 = uVar1 & 3;
    uVar1 = uVar1 & 0xfffffffc;
    lVar13 = 2;
    if (param_3 != 0) {
      lVar13 = param_3 - 1;
    }
    iVar11 = (int)uVar6;
    uVar2 = *(uint *)((int)((lVar13 + 5U & 0xffffffff) << 2) + iStack00000020);
    uVar8 = uVar2 & 3;
    uVar2 = uVar2 & 0xfffffffc;
    uVar3 = *(uint *)(((-(uint)(uVar6 != 2) & iVar11 + 1U) + 5) * 4 + uVar5);
    uVar9 = uVar3 & 3;
    uVar3 = uVar3 & 0xfffffffc;
    lVar13 = 2;
    if ((uVar12 & 3) != 0) {
      lVar13 = uVar6 - 1;
    }
    lVar14 = 2;
    uVar4 = *(uint *)((int)((lVar13 + 5U & 0xffffffff) << 2) + uVar5);
    uVar10 = uVar4 & 3;
    uVar4 = uVar4 & 0xfffffffc;
    if ((uVar12 & 3) != 0) {
      lVar14 = uVar6 - 1;
    }
    *(undefined4 *)((int)((param_3 + 2 & 0xffffffff) << 2) + iStack00000020) =
         *(undefined4 *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar5);
    lVar13 = 2;
    if (param_3 != 0) {
      lVar13 = param_3 - 1;
    }
    lVar14 = 2;
    *(undefined4 *)((iVar11 + 2) * 4 + uVar5) =
         *(undefined4 *)((int)((lVar13 + 2U & 0xffffffff) << 2) + iStack00000020);
    if ((uVar12 & 3) != 0) {
      lVar14 = uVar6 - 1;
    }
    lVar13 = 2;
    if (param_3 != 0) {
      lVar13 = param_3 - 1;
    }
    uVar15 = -(ulonglong)(param_3 != 2) & param_3 + 1;
    *(uint *)((int)((lVar13 + 5U & 0xffffffff) << 2) + iStack00000020) = (int)lVar14 + uVar5;
    *(int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar5) = (int)lVar13 + iStack00000020;
    *(uint *)((int)((uVar15 + 5 & 0xffffffff) << 2) + iStack00000020) = uVar7 + uVar1;
    if (uVar1 != 0) {
      *(int *)((uVar7 + 5) * 4 + uVar1) = (int)uVar15 + iStack00000020;
    }
    *(uint *)(iVar16 + iStack00000020) = uVar10 + uVar4;
    if (uVar4 != 0) {
      *(int *)((uVar10 + 5) * 4 + uVar4) = iStack00000020 + iStack00000024;
    }
    uVar12 = -(uint)(uVar6 != 2) & iVar11 + 1U;
    *(uint *)((uVar12 + 5) * 4 + uVar5) = uVar9 + uVar3;
    if (uVar3 != 0) {
      *(uint *)((uVar9 + 5) * 4 + uVar3) = uVar12 + uVar5;
    }
    *(uint *)((iVar11 + 5) * 4 + uVar5) = uVar8 + uVar2;
    if (uVar2 != 0) {
      *(uint *)((uVar8 + 5) * 4 + uVar2) = iVar11 + uVar5;
    }
    iVar16 = 2;
    if (param_3 != 0) {
      iVar16 = iStack00000024 + -1;
    }
    *param_1 = iStack00000020;
    param_1[1] = iVar16;
  }
  return;
}

