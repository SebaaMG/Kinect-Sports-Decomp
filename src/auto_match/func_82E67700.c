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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82E674C0();


undefined8
fn_82E67700(int *param_1,uint *param_2,undefined8 param_3,uint *param_4,int param_5,
             longlong param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar8;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar9;
  uint *puVar10;
  
  puVar10 = (uint *)param_2[0x1d];
  iVar1 = *param_1;
  iVar9 = 0;
  iVar5 = (param_2[9] - (int)puVar10) * 8 + param_2[0x12];
  if (*(int *)(iVar1 + 0xd4) != 1) {
    *(undefined1 *)((int)param_2 + 0x81) = 0;
    param_2[0x24] = 0;
    param_2[0x22] = 1;
    if (param_5 == 0) {
      return 0;
    }
    *(undefined4 *)param_2[0x1e] = 0;
    *(undefined4 *)param_2[0x1f] = 0;
    return 0;
  }
  uVar8 = *param_4 + iVar5;
  *param_4 = uVar8;
  if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar8) {
    uVar8 = *(uint *)(iVar1 + 0xc);
  }
  *param_4 = uVar8;
  if (*(int *)(*param_1 + 0x3c) < 3) {
    iVar2 = 8 << (*(uint *)(iVar1 + 8) & 0x3f);
    iVar9 = 4;
    iVar4 = iVar2 + -8;
    if ((((0 < (int)uVar8) &&
         ((iVar4 < (int)(param_2[0x10] - uVar8) || ((iVar2 + -0x18) * 2 < (int)param_2[0x10])))) &&
        ((param_5 != 0 || ((param_1[0x4270] != 0 && (param_6 < 0)))))) ||
       ((iVar4 < (int)*param_4 && ((param_5 != 0 || ((param_1[0x4270] != 0 && (param_6 < 0)))))))) {
      return 0xffffffff8001000c;
    }
  }
  uVar6 = (ulonglong)*(uint *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    uVar6 = 0;
  }
  else if (*(int *)(iVar1 + 0x3c) < 3) {
    uVar6 = uVar6 + 0xb & 0xff;
  }
  else if (*(int *)(iVar1 + 0x25c) == 0) {
    uVar6 = uVar6 + 6 & 0xff;
  }
  else {
    uVar6 = uVar6 + 0x11 & 0xff;
  }
  if (iVar5 != 0) {
    if (param_5 == 0) goto LAB_82e67a68;
    puVar10 = (uint *)param_2[0x1d];
    lVar3 = (uVar6 >> 3 & 0x1c) + ZEXT48(puVar10);
    fn_82E674C0(ZEXT48(puVar10),iVar5,lVar3,uVar6 - (uVar6 & 0xe0),
                  ((ulonglong)param_2[10] - lVar3) + (ulonglong)*param_2);
  }
  if (param_5 != 0) {
    *(undefined4 *)param_2[0x1e] = 0;
    *(undefined4 *)param_2[0x1f] = 0;
    if (0xf < *(byte *)(param_2 + 0x20)) {
      *(undefined1 *)(param_2 + 0x20) = 0;
    }
    if (uVar6 < 0x20) {
      *puVar10 = 0xffffffffU >> ((uint)uVar6 & 0x3f) & *puVar10;
    }
    else {
      *puVar10 = 0;
    }
    uVar8 = (uint)*(byte *)(param_2 + 0x20) << 0x1c | *puVar10;
    *puVar10 = uVar8;
    if (*(int *)(iVar1 + 0x3c) < 3) {
      uVar8 = 0 << (0x1cU - iVar9 & 0x3f) | uVar8;
      *puVar10 = uVar8;
      *puVar10 = *param_4 << ((0x19 - iVar9) - *(int *)(iVar1 + 8) & 0x3fU) | uVar8;
    }
    else {
      uVar8 = *param_4;
      iVar5 = *(int *)(iVar1 + 8);
      *(short *)(param_2 + 0xd) = (short)uVar6;
      param_2[0xe] = uVar8;
      *puVar10 = *(int *)(iVar1 + 0xc) << (0x1aU - iVar5 & 0x3f) | *puVar10;
    }
    *(char *)(param_2 + 0x20) = *(char *)(param_2 + 0x20) + '\x01';
  }
LAB_82e67a68:
  uVar7 = uVar6 + param_2[0x12];
  iVar9 = (int)uVar7;
  iVar5 = (iVar9 >> 3) + (uint)(iVar9 < 0 && (uVar7 & 7) != 0);
  uVar8 = param_2[9] + iVar5;
  param_2[9] = uVar8;
  param_2[0x11] = param_2[0x11] + iVar5;
  param_2[0x12] = iVar9 + ((iVar9 >> 3) + (uint)(iVar9 < 0 && (uVar7 & 7) != 0)) * -8;
  if ((param_2[10] + *param_2 < uVar8) && (param_5 != 0)) {
    return 0xffffffff80040003;
  }
  *(undefined1 *)((int)param_2 + 0x81) = 0;
  if (*(int *)(iVar1 + 0x3c) < 3) {
    param_2[0x21] = 1;
  }
  param_2[0x22] = 1;
  *(ulonglong *)(param_2 + 0x16) = *(longlong *)(param_2 + 0x16) - param_2[0x1a] * uVar6;
  return 0;
}

