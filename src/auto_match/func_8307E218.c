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


void fn_8307E218(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar7;
  uint *puVar9;
  
  param_2 = param_2 * 0x60;
  puVar9 = (uint *)(param_2 + *(int *)(param_1 + 8));
  uVar1 = *(ushort *)((int)puVar9 + 0x52);
  *param_4 = (puVar9[9] & 0x1f) * 0x100 + puVar9[0x11] + (uint)uVar1;
  uVar3 = param_3 << (puVar9[1] >> 0x1d & 1) + 1;
  uVar6 = 0;
  uVar8 = uVar3;
  if (uVar1 != 0) {
    uVar6 = 0x100 - uVar1;
    if (uVar3 < uVar6) {
      uVar8 = 0;
      *(ushort *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar3 + uVar1;
      uVar6 = uVar3;
    }
    else {
      *(undefined2 *)(param_2 + *(int *)(param_1 + 8) + 0x52) = 0;
      uVar8 = (puVar9[9] & 0x1f) + 1;
      puVar9[1] = puVar9[1] | 0x80000000;
      uVar8 = -(uint)(uVar8 < (*puVar9 >> 0x16 & 0x1f)) & uVar8;
      puVar9[9] = uVar8 & 0x1f | puVar9[9] & 0xffffffe0;
      uVar8 = -(uint)(uVar8 != 0) & uVar3 - uVar6;
    }
  }
  uVar5 = (ulonglong)(uVar8 >> 8);
  uVar3 = *puVar9;
  uVar8 = uVar8 & 0xff;
  uVar4 = (ulonglong)puVar9[9] & 0x1f;
  uVar2 = (ulonglong)(uVar3 >> 0x1b);
  uVar7 = 0;
  if (uVar4 < uVar2) {
    uVar7 = uVar2 - uVar4;
  }
  else if ((uVar2 < uVar4) || ((puVar9[1] & 0x80000000) == 0)) {
    uVar7 = ((ulonglong)(uVar3 >> 0x16) & 0x1f) - uVar4;
  }
  if (uVar5 != 0) {
    if ((uVar7 & 0xffffffff) <= uVar5) {
      uVar5 = uVar7;
    }
    uVar6 = (int)((uVar5 & 0xffffffff) << 8) + uVar6;
    puVar9[1] = puVar9[1] | 0x80000000;
    uVar7 = uVar7 - uVar5;
    puVar9[9] = -(uint)(uVar4 + uVar5 < ((ulonglong)(uVar3 >> 0x16) & 0x1f)) & (uint)(uVar4 + uVar5)
                & 0x1f | puVar9[9] & 0xffffffe0;
  }
  if ((uVar8 != 0) && ((uVar7 & 0xffffffff) != 0)) {
    uVar6 = uVar8 + uVar6;
    *(short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar8;
  }
  param_2 = param_2 + *(int *)(param_1 + 8);
  *(uint *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + (uVar6 >> (puVar9[1] >> 0x1d & 1) + 1);
  return;
}

