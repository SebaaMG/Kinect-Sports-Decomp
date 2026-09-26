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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))


void fn_82F13E90(int param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar17;
  longlong lVar15;
  longlong lVar16;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  param_1 = param_1 + param_4;
  uVar2 = -param_7 & 0xf;
  puVar12 = (undefined8 *)(param_1 + -0x20);
  puVar8 = (undefined1 *)(param_1 + param_7 + -1);
  lVar13 = ((-(ulonglong)(in_stack_0000005c != 0) & 0x1c) << 0x20 |
           -(ulonglong)(in_stack_0000005c != 0) & 0x14) + 0x14;
  puVar14 = puVar12;
  if ((int)param_2 < (int)param_3) {
    param_2 = param_3 - param_2;
    do {
      uVar1 = *(undefined1 *)((param_1 - (int)puVar12) + (int)puVar14);
      iVar10 = 0;
      uVar4 = CONCAT11(uVar1,uVar1);
      uVar5 = CONCAT11(*puVar8,*puVar8);
      uVar6 = CONCAT22(uVar4,uVar4);
      uVar7 = CONCAT22(uVar5,uVar5);
      for (uVar17 = uVar2; uVar17 != 0; uVar17 = uVar17 - 1) {
        puVar8[iVar10 + 1] = *puVar8;
        iVar10 = iVar10 + 1;
      }
      iVar10 = 0;
      lVar15 = 4;
      do {
        *(ulonglong *)(iVar10 + (int)puVar14) = CONCAT44(uVar6,uVar6);
        *(ulonglong *)((int)puVar14 + iVar10 + uVar2 + param_8) = CONCAT44(uVar7,uVar7);
        iVar10 = iVar10 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      param_2 = param_2 + -1;
      puVar14 = (undefined8 *)((int)puVar14 + in_stack_00000054);
      puVar8 = puVar8 + in_stack_00000054;
    } while (param_2 != 0);
  }
  iVar10 = (int)(uVar2 + param_7 + 0x40) >> 3;
  if ((param_5 != 0) &&
     (iVar9 = -((int)lVar13 * in_stack_00000054), lVar15 = lVar13, (int)lVar13 != 0)) {
    do {
      lVar16 = (longlong)iVar10;
      puVar11 = puVar12;
      if (0 < iVar10) {
        do {
          *(undefined8 *)(iVar9 + (int)puVar11) = *puVar11;
          lVar16 = lVar16 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar16 != 0);
      }
      lVar15 = lVar15 + -1;
      iVar9 = iVar9 + in_stack_00000054;
    } while (lVar15 != 0);
  }
  if (param_6 != 0) {
    if (in_stack_0000005c == 0) {
      uVar3 = -param_3 & 0xf;
    }
    else {
      uVar3 = -param_3 & 0x1f;
    }
    lVar13 = uVar3 + lVar13;
    if ((int)lVar13 != 0) {
      iVar9 = (int)puVar14 - ((int)puVar14 - in_stack_00000054);
      do {
        lVar15 = (longlong)iVar10;
        puVar12 = (undefined8 *)((int)puVar14 - in_stack_00000054);
        if (0 < iVar10) {
          do {
            *(undefined8 *)(iVar9 + (int)puVar12) = *puVar12;
            lVar15 = lVar15 + -1;
            puVar12 = puVar12 + 1;
          } while (lVar15 != 0);
        }
        lVar13 = lVar13 + -1;
        iVar9 = iVar9 + in_stack_00000054;
      } while (lVar13 != 0);
    }
  }
  return;
}

