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
extern unsigned int lbl_831BCF54;


void fn_8308A870(uint *param_1,int param_2,ulonglong param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  ushort uVar1;
  undefined2 *puVar3;
  ushort *puVar4;
  longlong lVar2;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort *puVar7;
  int iVar9;
  longlong lVar8;
  ushort *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined2 *puVar14;
  ulonglong uVar13;
  
  if (0 < (int)param_3) {
    iVar9 = 0;
    uVar5 = param_3;
    do {
      puVar14 = (undefined2 *)(iVar9 + (int)param_6);
      uVar5 = uVar5 - 1;
      puVar3 = (undefined2 *)(iVar9 + *param_1);
      iVar9 = iVar9 + 4;
      *puVar14 = *puVar3;
      puVar14[1] = puVar3[1];
    } while (uVar5 != 0);
  }
  uVar13 = (ulonglong)*param_1;
  lVar8 = (param_3 & 0x3fffffff) * 4;
  uVar6 = lVar8 + uVar13;
  uVar5 = param_6 + 4;
  uVar11 = (lVar8 + param_6) - 4;
  uVar12 = (param_3 + param_4 & 0x3fffffff) * 4 + uVar13;
  uVar1 = *(ushort *)((int)param_6 + 4);
  while (uVar13 = uVar13 + 4, uVar1 < *(ushort *)uVar6) {
    uVar5 = uVar5 + 4;
    uVar1 = *(ushort *)uVar5;
  }
  if ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff)) {
    if ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff)) {
      do {
        while( true ) {
          puVar7 = (ushort *)uVar6;
          puVar4 = (ushort *)uVar5;
          puVar10 = (ushort *)uVar13;
          if ((*puVar7 <= *puVar4) && ((*puVar4 != *puVar7 || (puVar7[1] <= puVar4[1])))) break;
          uVar1 = *puVar4;
          *puVar10 = uVar1;
          uVar5 = uVar5 + 4;
          puVar10[1] = puVar4[1];
          uVar13 = uVar13 + 4;
          *(short *)(*(int *)(&lbl_831BCF54 + ((uVar1 & 1) + param_5 * 2) * 4) +
                     (uint)puVar10[1] * 0x10 + param_2) =
               (short)((int)((int)puVar10 - *param_1) >> 2);
          if ((uVar11 & 0xffffffff) <= (uVar5 & 0xffffffff)) goto LAB_8308a9e0;
        }
        uVar1 = *puVar7;
        *puVar10 = uVar1;
        uVar6 = uVar6 + 4;
        puVar10[1] = puVar7[1];
        uVar13 = uVar13 + 4;
        *(short *)(*(int *)(&lbl_831BCF54 + ((uVar1 & 1) + param_5 * 2) * 4) +
                   (uint)puVar10[1] * 0x10 + param_2) = (short)((int)((int)puVar10 - *param_1) >> 2)
        ;
      } while ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff));
    }
  }
  else {
LAB_8308a9e0:
    if ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff)) {
      lVar8 = uVar6 - 4;
      lVar2 = (((uVar12 - uVar6) - 1 & 0xffffffff) >> 2) + 1;
      do {
        lVar8 = lVar8 + 4;
        puVar10 = (ushort *)uVar13;
        *(undefined4 *)puVar10 = *(undefined4 *)lVar8;
        uVar13 = uVar13 + 4;
        *(short *)(*(int *)(&lbl_831BCF54 + ((*puVar10 & 1) + param_5 * 2) * 4) +
                   (uint)puVar10[1] * 0x10 + param_2) = (short)((int)((int)puVar10 - *param_1) >> 2)
        ;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  if ((uVar5 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
    lVar8 = uVar5 - 4;
    lVar2 = ((uVar11 - uVar5 & 0xffffffff) >> 2) + 1;
    do {
      lVar8 = lVar8 + 4;
      puVar10 = (ushort *)uVar13;
      *(undefined4 *)puVar10 = *(undefined4 *)lVar8;
      uVar13 = uVar13 + 4;
      *(short *)(*(int *)(&lbl_831BCF54 + ((*puVar10 & 1) + param_5 * 2) * 4) +
                 (uint)puVar10[1] * 0x10 + param_2) = (short)((int)((int)puVar10 - *param_1) >> 2);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

