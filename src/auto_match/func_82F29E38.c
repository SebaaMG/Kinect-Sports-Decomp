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
extern int fn_82F0D6D0();
extern int fn_82F262C8();


ulonglong fn_82F29E38(int param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       uint *param_5,uint *param_6)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff;
  lVar16 = uVar6 * 2;
  uVar8 = (uint)param_3;
  iVar9 = 0;
  uVar15 = (longlong)(int)lVar16 * (longlong)(int)uVar8 + param_2;
  if (((param_3 & 1) == 0) &&
     ((uVar8 == 0 || (*(int *)(((int)uVar8 >> 1) * 4 + *(int *)(param_1 + 0x8d8)) != 0)))) {
    iVar9 = 1;
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
    fn_82F262C8(param_1,param_2,param_3,param_4,lVar16,*(int *)(param_1 + 0x2d4) << 1,
                    *(undefined4 *)(param_1 + 0x9f0),*(undefined4 *)(param_1 + 0x9f4));
  }
  else {
    *param_5 = (uint)param_2;
    *param_6 = uVar8;
    fn_82F0D6D0(param_1,param_5,param_6,*(undefined4 *)(param_1 + 0x9f0),
                    *(undefined4 *)(param_1 + 0x9f4),param_4,iVar9);
  }
  if (((uint)param_2 == 0) || (iVar9 != 0)) {
    uVar6 = 0;
  }
  else {
    iVar9 = (int)((uVar15 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar9 + *(int *)(param_1 + 0x9f0) + -2);
    uVar8 = *param_6;
    uVar3 = (int)uVar8 >> 0x1f;
    if (sVar1 == 0x4000) {
      uVar2 = *param_5;
      iVar11 = (uVar8 ^ uVar3) - uVar3;
      iVar9 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    }
    else {
      uVar2 = *param_5;
      uVar10 = uVar2 - (int)sVar1;
      uVar7 = uVar8 - (int)*(short *)(iVar9 + *(int *)(param_1 + 0x9f4) + -2);
      uVar4 = (int)uVar7 >> 0x1f;
      uVar5 = (int)uVar10 >> 0x1f;
      iVar11 = (uVar7 ^ uVar4) - uVar4;
      iVar9 = (uVar10 ^ uVar5) - uVar5;
    }
    if (iVar11 + iVar9 < 0x21) {
      iVar9 = (int)((uVar15 + uVar6 * -2 & 0xffffffff) << 1);
      sVar1 = *(short *)(iVar9 + *(int *)(param_1 + 0x9f0));
      if (sVar1 == 0x4000) {
        lVar13 = ((ulonglong)uVar8 ^ (longlong)(int)uVar3) - (longlong)(int)uVar3;
        lVar16 = ((ulonglong)uVar2 ^ (longlong)((int)uVar2 >> 0x1f)) -
                 (longlong)((int)uVar2 >> 0x1f);
      }
      else {
        uVar15 = (ulonglong)uVar2 - (longlong)sVar1;
        uVar6 = (ulonglong)uVar8 - (longlong)*(short *)(iVar9 + *(int *)(param_1 + 0x9f4));
        uVar14 = (ulonglong)((int)uVar6 >> 0x1f);
        uVar12 = (ulonglong)((int)uVar15 >> 0x1f);
        lVar13 = (uVar6 ^ uVar14) - uVar14;
        lVar16 = (uVar15 ^ uVar12) - uVar12;
      }
      uVar6 = ((~(lVar13 + lVar16) & 0xffffffffU) >> 0x1f) +
              (ulonglong)((ulonglong)(lVar13 + lVar16) < 0x21) & 1;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}

