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


void fn_82A453D0(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  
  param_2 = param_2 * 0x60;
  puVar11 = (uint *)(param_2 + *(int *)(param_1 + 8));
  bVar4 = false;
  uVar1 = *(ushort *)((int)puVar11 + 0x52);
  *param_4 = (puVar11[9] & 0x1f) * 0x100 + puVar11[0x11] + (uint)uVar1;
  uVar2 = param_3 << (puVar11[1] >> 0x1d & 1) + 1;
  uVar5 = 0;
  uVar10 = uVar2;
  if (uVar1 != 0) {
    uVar5 = 0x100 - uVar1;
    if (uVar2 < uVar5) {
      uVar10 = 0;
      *(ushort *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar2 + uVar1;
      uVar5 = uVar2;
    }
    else {
      *(undefined2 *)(param_2 + *(int *)(param_1 + 8) + 0x52) = 0;
      uVar10 = puVar11[9] & 0x1f;
      uVar9 = uVar10 + 1;
      uVar9 = -(uint)(uVar9 < (*puVar11 >> 0x16 & 0x1f)) & uVar9;
      if (uVar10 != uVar9) {
        puVar11[0xe] = 1;
        puVar11[9] = uVar9 & 0x1f | puVar11[9] & 0xffffffe0;
      }
      if ((puVar11[1] & 0x80000000) != 0x80000000) {
        puVar11[0xc] = 1;
        puVar11[1] = puVar11[1] | 0x80000000;
      }
      bVar4 = uVar9 == 0;
      uVar10 = -(uint)!bVar4 & uVar2 - uVar5;
    }
  }
  uVar8 = (ulonglong)(uVar10 >> 8);
  uVar2 = *puVar11;
  uVar10 = uVar10 & 0xff;
  uVar3 = (ulonglong)puVar11[9] & 0x1f;
  uVar7 = (ulonglong)(uVar2 >> 0x1b);
  uVar6 = 0;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7) {
      if (((puVar11[1] & 0x80000000) != 0) && (bVar4)) goto LAB_82a45514;
    }
    uVar7 = (ulonglong)(uVar2 >> 0x16) & 0x1f;
  }
  uVar6 = uVar7 - uVar3;
LAB_82a45514:
  if (uVar8 != 0) {
    if ((uVar6 & 0xffffffff) <= uVar8) {
      uVar8 = uVar6;
    }
    uVar6 = uVar6 - uVar8;
    uVar5 = (int)((uVar8 & 0xffffffff) << 8) + uVar5;
    uVar8 = -(ulonglong)(uVar3 + uVar8 < ((ulonglong)(uVar2 >> 0x16) & 0x1f)) & uVar3 + uVar8;
    if (uVar3 != (uVar8 & 0xffffffff)) {
      puVar11[0xe] = 1;
      puVar11[9] = (uint)uVar8 & 0x1f | puVar11[9] & 0xffffffe0;
    }
    if ((puVar11[1] & 0x80000000) != 0x80000000) {
      puVar11[0xc] = 1;
      puVar11[1] = puVar11[1] | 0x80000000;
    }
  }
  if ((uVar10 != 0) && ((uVar6 & 0xffffffff) != 0)) {
    uVar5 = uVar10 + uVar5;
    *(short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar10;
  }
  param_2 = param_2 + *(int *)(param_1 + 8);
  *(uint *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + (uVar5 >> (puVar11[1] >> 0x1d & 1) + 1);
  return;
}

