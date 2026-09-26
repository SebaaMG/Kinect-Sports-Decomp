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


void fn_82F13CB0(undefined4 *param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  longlong lVar22;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  puVar20 = (undefined1 *)(param_2 + param_5);
  puVar17 = (undefined4 *)((int)param_1 + param_5 + -0x10);
  puVar15 = (undefined8 *)(puVar20 + -0x10);
  puVar19 = (undefined1 *)((int)param_1 + param_8 + param_5 + -1);
  puVar18 = puVar20 + param_8 + -1;
  puVar16 = puVar17;
  puVar11 = puVar15;
  if ((int)param_3 < (int)param_4) {
    param_4 = param_4 - param_3;
    do {
      lVar21 = 2;
      uVar2 = CONCAT11(*puVar20,*puVar20);
      uVar3 = CONCAT11(puVar20[(int)param_1 - param_2],puVar20[(int)param_1 - param_2]);
      uVar4 = CONCAT11(*puVar19,*puVar19);
      uVar5 = CONCAT11(*puVar18,*puVar18);
      uVar6 = CONCAT22(uVar3,uVar3);
      uVar7 = CONCAT22(uVar2,uVar2);
      uVar8 = CONCAT22(uVar4,uVar4);
      uVar9 = CONCAT22(uVar5,uVar5);
      puVar12 = puVar11;
      do {
        *(ulonglong *)(((int)puVar16 - (int)puVar11) + (int)puVar12) = CONCAT44(uVar6,uVar6);
        *puVar12 = CONCAT44(uVar7,uVar7);
        *(ulonglong *)((int)puVar17 + (in_stack_00000054 - (int)puVar15) + (int)puVar12) =
             CONCAT44(uVar8,uVar8);
        *(ulonglong *)(in_stack_00000054 + (int)puVar12) = CONCAT44(uVar9,uVar9);
        puVar12 = puVar12 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      param_4 = param_4 + -1;
      puVar16 = (undefined4 *)((int)puVar16 + in_stack_0000005c);
      puVar11 = (undefined8 *)((int)puVar11 + in_stack_0000005c);
      puVar20 = puVar20 + in_stack_0000005c;
      puVar19 = puVar19 + in_stack_0000005c;
      puVar18 = puVar18 + in_stack_0000005c;
    } while (param_4 != 0);
  }
  iVar1 = in_stack_0000005c >> 2;
  if (param_6 != 0) {
    iVar10 = (int)puVar15 - (int)param_1;
    param_2 = param_2 - (int)param_1;
    lVar21 = 0x10;
    do {
      if (0 < iVar1) {
        lVar22 = (longlong)iVar1;
        puVar14 = param_1;
        do {
          *puVar14 = *(undefined4 *)((int)puVar17 + (iVar10 - (int)puVar15) + (int)puVar14);
          *(undefined4 *)(param_2 + (int)puVar14) = *(undefined4 *)(iVar10 + (int)puVar14);
          puVar14 = puVar14 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar21 = lVar21 + -1;
      param_1 = (undefined4 *)((int)param_1 + in_stack_0000005c);
      iVar10 = iVar10 - in_stack_0000005c;
    } while (lVar21 != 0);
  }
  if (param_7 != 0) {
    iVar13 = (int)puVar11 - in_stack_0000005c;
    iVar10 = iVar13 - (int)puVar16;
    lVar21 = 0x10;
    puVar17 = puVar16;
    do {
      if (0 < iVar1) {
        lVar22 = (longlong)iVar1;
        puVar14 = puVar17;
        do {
          *puVar14 = *(undefined4 *)
                      ((int)puVar16 + iVar10 + (-iVar13 - in_stack_0000005c) + (int)puVar14);
          *(undefined4 *)(((int)puVar11 - (int)puVar17) + (int)puVar14) =
               *(undefined4 *)(iVar10 + (int)puVar14);
          puVar14 = puVar14 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar21 = lVar21 + -1;
      puVar17 = (undefined4 *)((int)puVar17 + in_stack_0000005c);
      iVar10 = iVar10 - in_stack_0000005c;
      puVar11 = (undefined8 *)((int)puVar11 + in_stack_0000005c);
    } while (lVar21 != 0);
  }
  return;
}

