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
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_829D3900();
extern int fn_829DDD20();


void fn_829DEAE0(double param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,longlong param_7)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 auStack_80 [2];
  ulonglong auStack_78;
  
  auStack_78 = (ulonglong)param_1;
  uVar7 = auStack_78;
  if ((longlong)auStack_78 < 0) {
    uVar7 = 0;
  }
  uVar2 = *(uint *)(param_2[2] + 4);
  lVar5 = (longlong)*(int *)(param_2[2] + 0x14) * (longlong)(int)param_3 +
          (ulonglong)(uint)param_2[3];
  uVar3 = (ulonglong)uVar2 - 1 & 0xffffffff;
  lVar9 = (uVar7 & 0x7fffffff) * 2 + lVar5;
  uVar6 = uVar7;
  uVar8 = uVar7 + param_6;
  if ((longlong)uVar3 <= (longlong)(uVar7 + param_6)) {
    uVar8 = uVar3;
  }
  for (; (longlong)uVar6 <= (longlong)uVar8; uVar6 = uVar6 + 1) {
    uVar1 = *(ushort *)lVar9;
    if (uVar1 < *(ushort *)(param_2 + 5)) {
      if ((int)((uint)*(ushort *)(param_2 + 5) - (uint)uVar1) < 0x2e) {
        *(ushort *)(param_2 + 5) = uVar1;
        goto LAB_829deb8c;
      }
LAB_829deb80:
      bVar4 = false;
    }
    else {
LAB_829deb8c:
      if (*(ushort *)((int)param_2 + 0x16) < uVar1) {
        if (0x2d < (int)((uint)uVar1 - (uint)*(ushort *)((int)param_2 + 0x16))) goto LAB_829deb80;
        *(ushort *)((int)param_2 + 0x16) = uVar1;
      }
      bVar4 = true;
    }
    if (bVar4) {
      fn_829D3900(*(undefined4 *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(ushort *)lVar9,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((uint)((ulonglong)(auStack_78) >> 32)),auStack_80[0]);
    }
    lVar9 = lVar9 + 2;
  }
  uVar8 = param_5;
  if ((longlong)param_5 <= (longlong)uVar7) {
    uVar8 = uVar7 + param_7;
  }
  if ((longlong)uVar3 <= (longlong)uVar8) {
    uVar8 = uVar3;
  }
  if ((longlong)uVar6 <= (longlong)uVar8) {
    lVar9 = lVar9 + -2;
    do {
      uVar1 = *(ushort *)((int)lVar9 + 2);
      if (uVar1 < *(ushort *)(param_2 + 5)) {
        if ((int)((uint)*(ushort *)(param_2 + 5) - (uint)uVar1) < 0x2e) {
          *(ushort *)(param_2 + 5) = uVar1;
          goto LAB_829dec4c;
        }
LAB_829dec40:
        bVar4 = false;
      }
      else {
LAB_829dec4c:
        if (*(ushort *)((int)param_2 + 0x16) < uVar1) {
          if (0x2d < (int)((uint)uVar1 - (uint)*(ushort *)((int)param_2 + 0x16))) goto LAB_829dec40;
          *(ushort *)((int)param_2 + 0x16) = uVar1;
        }
        bVar4 = true;
      }
      if (!bVar4) break;
      lVar9 = lVar9 + 2;
      fn_829D3900(*(undefined4 *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(undefined2 *)lVar9,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((uint)((ulonglong)(auStack_78) >> 32)),auStack_80[0]);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar8);
  }
  uVar6 = uVar7 - 1;
  if ((longlong)(ulonglong)uVar2 <= (longlong)(uVar7 - 1)) {
    uVar6 = uVar3;
  }
  lVar9 = (uVar7 - param_6) + -1;
  lVar5 = (uVar6 & 0x7fffffff) * 2 + lVar5;
  if (lVar9 < 1) {
    lVar9 = 0;
  }
  for (; lVar9 <= (longlong)uVar6; uVar6 = uVar6 - 1) {
    uVar1 = *(ushort *)lVar5;
    if (uVar1 < *(ushort *)(param_2 + 5)) {
      if ((int)((uint)*(ushort *)(param_2 + 5) - (uint)uVar1) < 0x2e) {
        *(ushort *)(param_2 + 5) = uVar1;
        goto LAB_829ded18;
      }
LAB_829ded0c:
      bVar4 = false;
    }
    else {
LAB_829ded18:
      if (*(ushort *)((int)param_2 + 0x16) < uVar1) {
        if (0x2d < (int)((uint)uVar1 - (uint)*(ushort *)((int)param_2 + 0x16))) goto LAB_829ded0c;
        *(ushort *)((int)param_2 + 0x16) = uVar1;
      }
      bVar4 = true;
    }
    if (bVar4) {
      fn_829D3900(*(undefined4 *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(ushort *)lVar5,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((uint)((ulonglong)(auStack_78) >> 32)),auStack_80[0]);
    }
    lVar5 = lVar5 + -2;
  }
  if ((longlong)uVar6 <= (longlong)param_5) {
    param_5 = uVar6 + param_7;
  }
  if ((longlong)param_5 < 1) {
    param_5 = 0;
  }
  if ((longlong)param_5 <= (longlong)uVar6) {
    lVar5 = lVar5 + 2;
    do {
      uVar1 = *(ushort *)((int)lVar5 + -2);
      if (uVar1 < *(ushort *)(param_2 + 5)) {
        if ((int)((uint)*(ushort *)(param_2 + 5) - (uint)uVar1) < 0x2e) {
          *(ushort *)(param_2 + 5) = uVar1;
          goto LAB_829dedd8;
        }
LAB_829dedcc:
        bVar4 = false;
      }
      else {
LAB_829dedd8:
        if (*(ushort *)((int)param_2 + 0x16) < uVar1) {
          if (0x2d < (int)((uint)uVar1 - (uint)*(ushort *)((int)param_2 + 0x16))) goto LAB_829dedcc;
          *(ushort *)((int)param_2 + 0x16) = uVar1;
        }
        bVar4 = true;
      }
      if (!bVar4) {
        return;
      }
      lVar5 = lVar5 + -2;
      fn_829D3900(*(undefined4 *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(undefined2 *)lVar5,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((uint)((ulonglong)(auStack_78) >> 32)),auStack_80[0]);
      uVar6 = uVar6 - 1;
    } while ((longlong)param_5 <= (longlong)uVar6);
  }
  return;
}

