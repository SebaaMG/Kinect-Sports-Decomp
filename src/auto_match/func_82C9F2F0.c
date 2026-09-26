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
extern int iRam8329f13c;


void fn_82C9F2F0(undefined8 param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar19;
  longlong lVar18;
  int in_stack_0000005c;
  int in_stack_00000064;
  
  param_2 = param_2 + param_5;
  puVar9 = (undefined1 *)(param_2 + param_8 + -1);
  puVar14 = (undefined8 *)(param_2 - iRam8329f13c);
  iVar16 = iRam8329f13c * 2 + (-param_8 & 0xfU) + param_8;
  iVar2 = iVar16 >> 3;
  iVar16 = iVar16 - iRam8329f13c;
  lVar15 = ((-(ulonglong)(in_stack_00000064 != 0) & 0x1c) << 0x20 |
           -(ulonglong)(in_stack_00000064 != 0) & 0x14) + 0x14;
  puVar17 = puVar14;
  if ((int)param_3 < (int)param_4) {
    param_3 = param_4 - param_3;
    iVar13 = iRam8329f13c;
    do {
      uVar1 = *(undefined1 *)((param_2 - (int)puVar14) + (int)puVar17);
      puVar12 = (undefined8 *)(iVar16 + (int)puVar17);
      iVar10 = 0;
      uVar5 = CONCAT11(uVar1,uVar1);
      uVar6 = CONCAT11(*puVar9,*puVar9);
      uVar7 = CONCAT22(uVar5,uVar5);
      uVar8 = CONCAT22(uVar6,uVar6);
      for (uVar19 = -param_8 & 0xfU; uVar19 != 0; uVar19 = uVar19 - 1) {
        puVar9[iVar10 + 1] = *puVar9;
        iVar10 = iVar10 + 1;
        iVar13 = iRam8329f13c;
      }
      iVar10 = 0;
      if (0 < iVar13) {
        iVar3 = (int)puVar17 - (int)puVar12;
        do {
          *(ulonglong *)(iVar3 + (int)puVar12) = CONCAT44(uVar7,uVar7);
          iVar10 = iVar10 + 8;
          *puVar12 = CONCAT44(uVar8,uVar8);
          puVar12 = puVar12 + 1;
          iVar13 = iRam8329f13c;
        } while (iVar10 < iRam8329f13c);
      }
      param_3 = param_3 + -1;
      puVar17 = (undefined8 *)((int)puVar17 + in_stack_0000005c);
      puVar9 = puVar9 + in_stack_0000005c;
    } while (param_3 != 0);
  }
  if ((param_6 != 0) &&
     (iVar16 = -((int)lVar15 * in_stack_0000005c), lVar11 = lVar15, (int)lVar15 != 0)) {
    do {
      lVar18 = (longlong)iVar2;
      puVar12 = puVar14;
      if (0 < iVar2) {
        do {
          *(undefined8 *)(iVar16 + (int)puVar12) = *puVar12;
          lVar18 = lVar18 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar18 != 0);
      }
      lVar11 = lVar11 + -1;
      iVar16 = iVar16 + in_stack_0000005c;
    } while (lVar11 != 0);
  }
  if (param_7 != 0) {
    if (in_stack_00000064 == 0) {
      uVar4 = -param_4 & 0xf;
    }
    else {
      uVar4 = -param_4 & 0x1f;
    }
    lVar15 = uVar4 + lVar15;
    if ((int)lVar15 != 0) {
      iVar16 = (int)puVar17 - ((int)puVar17 - in_stack_0000005c);
      do {
        lVar11 = (longlong)iVar2;
        puVar14 = (undefined8 *)((int)puVar17 - in_stack_0000005c);
        if (0 < iVar2) {
          do {
            *(undefined8 *)(iVar16 + (int)puVar14) = *puVar14;
            lVar11 = lVar11 + -1;
            puVar14 = puVar14 + 1;
          } while (lVar11 != 0);
        }
        lVar15 = lVar15 + -1;
        iVar16 = iVar16 + in_stack_0000005c;
      } while (lVar15 != 0);
    }
  }
  return;
}

