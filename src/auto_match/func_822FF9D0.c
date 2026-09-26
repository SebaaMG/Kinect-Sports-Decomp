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
extern int fn_82300178();
extern int fn_82300210();
extern int fn_823003A8();
extern int fn_82300480();
extern int fn_823005D0();
extern int fn_823006E0();
extern int fn_823008E8();
extern int fn_82300E58();
extern unsigned int lbl_821CC160;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_822FF9D0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_1 + 0x574) != *(int *)(param_1 + 0x578)) {
    *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x578);
    *(undefined4 *)(param_1 + 0x550) = 0;
    *(undefined4 *)(param_1 + 0x554) = 0;
    *(undefined4 *)(param_1 + 0x564) = 0;
    *(undefined4 *)(param_1 + 0x568) = 0xffffffff;
    uVar7 = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x56c) = 0;
    *(undefined4 *)(param_1 + 0x560) = uVar7;
    *(undefined4 *)(param_1 + 0x55c) = uVar7;
  }
  if (*(int *)(param_1 + 0x574) != 0) {
    iVar4 = *(int *)(param_1 + 0x550) * 0x160 + param_1;
    fn_823008E8(param_1,param_2,iVar4);
    uVar3 = *(int *)(param_1 + 0x550) + 1;
    *(uint *)(param_1 + 0x550) = uVar3;
    if (2 < uVar3) {
      *(undefined4 *)(param_1 + 0x550) = 0;
    }
    uVar3 = *(int *)(param_1 + 0x554) + 1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    *(uint *)(param_1 + 0x554) = uVar3;
    puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    lVar5 = 0x13;
    puVar1 = (undefined4 *)(in_r0 + param_1 + 0x500 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(in_r0 + param_1 + 0x4f0 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    do {
      iVar4 = iVar4 + 0x10;
      puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs32); memcpy(auVar6, &_vt0, 16); }
      puVar2 = (undefined4 *)(in_r0 + param_1 + 0x4f0 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs45,auVar6); memcpy(in_vs32, &_vt1, 16); }
      puVar2 = (undefined4 *)(in_r0 + param_1 + 0x500 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82300E58(param_1 + 0x420,*(undefined4 *)(param_1 + 0x52c));
    fn_82300178(param_1);
    fn_82300210(param_1);
    iVar4 = *(int *)(param_1 + 0x56c);
    if (iVar4 == 1) {
      fn_82300480(param_1);
    }
    else if (iVar4 == 2) {
      fn_823005D0(param_1);
    }
    else if (iVar4 == 3) {
      fn_823006E0();
    }
    if (*(int *)(param_1 + 0x570) == 1) {
      fn_823003A8(param_1);
    }
  }
  return;
}

