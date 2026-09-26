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


void fn_82F13B88(int param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int in_stack_00000054;
  
  param_4 = param_1 + param_4;
  puVar10 = (undefined8 *)(param_4 + -0x20);
  puVar11 = (undefined1 *)(param_4 + param_7 + -1);
  puVar12 = puVar10;
  if ((int)param_2 < (int)param_3) {
    puVar7 = (undefined8 *)((int)puVar10 + param_8);
    param_3 = param_3 - param_2;
    do {
      uVar1 = *(undefined1 *)((param_4 - (int)puVar10) + (int)puVar12);
      uVar3 = CONCAT11(uVar1,uVar1);
      lVar13 = 4;
      uVar4 = CONCAT11(*puVar11,*puVar11);
      uVar5 = CONCAT22(uVar3,uVar3);
      uVar6 = CONCAT22(uVar4,uVar4);
      puVar9 = puVar7;
      do {
        *(ulonglong *)(((int)puVar12 - (int)puVar7) + (int)puVar9) = CONCAT44(uVar5,uVar5);
        *puVar9 = CONCAT44(uVar6,uVar6);
        puVar9 = puVar9 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      param_3 = param_3 + -1;
      puVar12 = (undefined8 *)((int)puVar12 + in_stack_00000054);
      puVar7 = (undefined8 *)((int)puVar7 + in_stack_00000054);
      puVar11 = puVar11 + in_stack_00000054;
    } while (param_3 != 0);
  }
  iVar2 = in_stack_00000054 >> 3;
  if (param_5 != 0) {
    param_1 = param_1 - (int)puVar10;
    lVar13 = 0x20;
    do {
      lVar14 = (longlong)iVar2;
      puVar7 = puVar10;
      if (0 < iVar2) {
        do {
          *(undefined8 *)(param_1 + (int)puVar7) = *puVar7;
          lVar14 = lVar14 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar14 != 0);
      }
      lVar13 = lVar13 + -1;
      param_1 = param_1 + in_stack_00000054;
    } while (lVar13 != 0);
  }
  if (param_6 != 0) {
    lVar13 = 0x20;
    iVar8 = (int)puVar12 - ((int)puVar12 - in_stack_00000054);
    do {
      lVar14 = (longlong)iVar2;
      puVar10 = (undefined8 *)((int)puVar12 - in_stack_00000054);
      if (0 < iVar2) {
        do {
          *(undefined8 *)(iVar8 + (int)puVar10) = *puVar10;
          lVar14 = lVar14 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar14 != 0);
      }
      lVar13 = lVar13 + -1;
      iVar8 = iVar8 + in_stack_00000054;
    } while (lVar13 != 0);
  }
  return;
}

