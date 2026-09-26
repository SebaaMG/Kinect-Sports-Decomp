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
extern unsigned int lbl_8324DBB0;


bool fn_82F07B68(int param_1,short *param_2,short *param_3,int param_4,int param_5,
                  undefined4 *param_6,int param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar12;
  longlong lVar11;
  short sVar13;
  short sVar14;
  ulonglong uVar15;
  int iVar16;
  int *piVar17;
  int in_stack_00000054;
  
  iVar12 = *(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34;
  sVar14 = 0;
  iVar16 = 0;
  uVar4 = *(uint *)(iVar12 + 0x10);
  uVar15 = (ulonglong)uVar4;
  uVar5 = *(uint *)(iVar12 + 0x14);
  iVar9 = *(int *)(iVar12 + 0x18);
  uVar6 = *(uint *)(iVar12 + 0x1c);
  uVar7 = *(uint *)(iVar12 + 0x24);
  uVar8 = *(uint *)(iVar12 + 0x20);
  *param_3 = 0;
  if (0 < param_7) {
    piVar17 = (int *)(param_5 + 8);
    lVar11 = (ulonglong)(param_7 - 1U >> 2) + 1;
    do {
      sVar1 = *(short *)(piVar17[-1] * 2 + param_4);
      sVar2 = *(short *)(*piVar17 * 2 + param_4);
      sVar3 = *(short *)(piVar17[1] * 2 + param_4);
      if ((uint)(*(short *)(piVar17[-2] * 2 + param_4) + iVar9) < uVar8) {
        sVar13 = sVar14 + 1;
      }
      else {
        sVar13 = 0;
        param_2[*param_3 + 1] = sVar14;
        *param_3 = *param_3 + 2;
      }
      if ((uint)(sVar1 + iVar9) < uVar8) {
        sVar13 = sVar13 + 1;
      }
      else {
        param_2[*param_3 + 1] = sVar13;
        sVar13 = 0;
        *param_3 = *param_3 + 2;
      }
      if ((uint)(sVar2 + iVar9) < uVar8) {
        sVar13 = sVar13 + 1;
      }
      else {
        param_2[*param_3 + 1] = sVar13;
        sVar13 = 0;
        *param_3 = *param_3 + 2;
      }
      if ((uint)(sVar3 + iVar9) < uVar8) {
        sVar14 = sVar13 + 1;
      }
      else {
        sVar14 = 0;
        param_2[*param_3 + 1] = sVar13;
        *param_3 = *param_3 + 2;
      }
      piVar17 = piVar17 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar9 = 0;
  if (0 < *param_3) {
    do {
      sVar14 = *(short *)(*(int *)((param_2[1] + iVar16) * 4 + param_5) * 2 + param_4);
      lVar11 = (longlong)sVar14;
      if ((ulonglong)uVar7 < (lVar11 + (ulonglong)uVar6 & 0xffffffff)) {
        trapWord(6,uVar15,0);
        if (sVar14 < 0) {
          uVar10 = lVar11 + (ulonglong)uVar5;
          trapWord(5,uVar15 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *param_2 = -*(short *)(&lbl_8324DBB0 + ((int)uVar10 / (int)uVar4) * -2);
        }
        else {
          uVar10 = lVar11 - (ulonglong)uVar5;
          trapWord(5,uVar15 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *param_2 = *(short *)(&lbl_8324DBB0 + ((int)uVar10 / (int)uVar4) * 2);
        }
      }
      else if (sVar14 < 0) {
        *param_2 = -1;
      }
      else {
        *param_2 = 1;
      }
      iVar16 = param_2[1] + iVar16 + 1;
      iVar9 = iVar9 + 2;
      param_2 = param_2 + 2;
    } while (iVar9 < *param_3);
  }
  *param_6 = 0;
  return *param_3 != 0;
}

