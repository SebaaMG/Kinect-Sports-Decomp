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
extern int fn_82C83C40();
extern int fn_82CB9530();


ulonglong fn_82CBCA98(int param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       uint *param_5,uint *param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar11;
  ulonglong uVar10;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar6;
  
  iVar15 = *(int *)(param_1 + 0x6f0);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff;
  lVar20 = uVar10 * 2;
  iVar3 = *(int *)(param_1 + 0x6f4);
  uVar12 = (uint)param_3;
  iVar17 = 0;
  uVar19 = (longlong)(int)lVar20 * (longlong)(int)uVar12 + param_2;
  if (((param_3 & 1) == 0) &&
     ((uVar12 == 0 || (*(int *)(((int)uVar12 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) != 0)))) {
    iVar17 = 1;
  }
  if (*(int *)(param_1 + 0x50cc) == 0) {
    fn_82CB9530(param_1,param_2,param_3,param_4,lVar20,*(int *)(param_1 + 0x8c) << 1,iVar15,iVar3)
    ;
  }
  else {
    *param_5 = (uint)param_2;
    *param_6 = uVar12;
    fn_82C83C40(param_1,param_5,param_6,*(undefined4 *)(param_1 + 0x6f0),
                      *(undefined4 *)(param_1 + 0x6f4),param_4,iVar17);
  }
  if (((uint)param_2 == 0) || (iVar17 != 0)) {
    uVar10 = 0;
  }
  else {
    iVar17 = (int)((uVar19 & 0xffffffff) << 1);
    uVar12 = *param_5;
    uVar4 = *param_6;
    iVar9 = (int)((uVar19 + uVar10 * -2 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar17 + iVar15 + -2);
    sVar2 = *(short *)(iVar9 + iVar15);
    uVar5 = (int)uVar4 >> 0x1f;
    uVar6 = (int)uVar12 >> 0x1f;
    if (sVar1 == 0x4000) {
      iVar17 = (uVar4 ^ uVar5) - uVar5;
      iVar15 = (uVar12 ^ uVar6) - uVar6;
    }
    else {
      uVar16 = uVar12 - (int)sVar1;
      uVar11 = uVar4 - (int)*(short *)(iVar17 + iVar3 + -2);
      uVar7 = (int)uVar11 >> 0x1f;
      uVar8 = (int)uVar16 >> 0x1f;
      iVar17 = (uVar11 ^ uVar7) - uVar7;
      iVar15 = (uVar16 ^ uVar8) - uVar8;
    }
    if (iVar17 + iVar15 < 0x21) {
      if (sVar2 == 0x4000) {
        lVar18 = ((ulonglong)uVar4 ^ (longlong)(int)uVar5) - (longlong)(int)uVar5;
        lVar20 = ((ulonglong)uVar12 ^ (longlong)(int)uVar6) - (longlong)(int)uVar6;
      }
      else {
        uVar14 = (ulonglong)uVar12 - (longlong)sVar2;
        uVar13 = (ulonglong)uVar4 - (longlong)*(short *)(iVar9 + iVar3);
        uVar19 = (ulonglong)((int)uVar13 >> 0x1f);
        uVar10 = (ulonglong)((int)uVar14 >> 0x1f);
        lVar18 = (uVar13 ^ uVar19) - uVar19;
        lVar20 = (uVar14 ^ uVar10) - uVar10;
      }
      uVar10 = ((~(lVar18 + lVar20) & 0xffffffffU) >> 0x1f) +
               (ulonglong)((ulonglong)(lVar18 + lVar20) < 0x21) & 1;
    }
    else {
      uVar10 = 1;
    }
  }
  return uVar10;
}

