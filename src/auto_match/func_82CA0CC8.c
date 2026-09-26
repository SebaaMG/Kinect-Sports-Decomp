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
extern int iRam8329f13c;


void fn_82CA0CC8(undefined8 param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  
  iVar5 = iRam8329f13c;
  param_5 = param_2 + param_5;
  puVar12 = (undefined1 *)(param_5 + param_8 + -1);
  puVar9 = (undefined8 *)(param_5 - iRam8329f13c);
  iVar6 = iRam8329f13c;
  puVar10 = puVar9;
  if ((int)param_3 < (int)param_4) {
    param_4 = param_4 - param_3;
    puVar11 = (undefined4 *)((int)puVar9 + in_stack_00000054);
    do {
      iVar4 = 0;
      uVar1 = *(undefined1 *)((param_5 - (int)puVar9) + (int)puVar10);
      uVar2 = CONCAT11(uVar1,uVar1);
      uVar3 = CONCAT11(*puVar12,*puVar12);
      if (0 < iVar6) {
        puVar7 = puVar11;
        do {
          *(uint *)(((int)puVar10 - (int)puVar11) + (int)puVar7) = CONCAT22(uVar2,uVar2);
          iVar4 = iVar4 + 4;
          *puVar7 = CONCAT22(uVar3,uVar3);
          puVar7 = puVar7 + 1;
          iVar6 = iRam8329f13c;
        } while (iVar4 < iRam8329f13c);
      }
      puVar10 = (undefined8 *)((int)puVar10 + in_stack_0000005c);
      puVar11 = (undefined4 *)((int)puVar11 + in_stack_0000005c);
      puVar12 = puVar12 + in_stack_0000005c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar4 = in_stack_0000005c;
  if ((in_stack_00000064 == 0) && (in_stack_0000005c - in_stack_00000054 != 0x20)) {
    iVar5 = (iVar6 >> 1) + 2;
    iVar4 = in_stack_0000005c >> 1;
    param_2 = param_2 + in_stack_0000005c * -2;
  }
  iVar4 = iVar4 >> 3;
  if ((param_6 != 0) && (0 < iVar5)) {
    param_2 = param_2 - (int)puVar9;
    iVar6 = iVar5;
    do {
      lVar13 = (longlong)iVar4;
      puVar8 = puVar9;
      if (0 < iVar4) {
        do {
          *(undefined8 *)(param_2 + (int)puVar8) = *puVar8;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar13 != 0);
      }
      iVar6 = iVar6 + -1;
      param_2 = param_2 + in_stack_0000005c;
    } while (iVar6 != 0);
  }
  if ((param_7 != 0) && (0 < iVar5)) {
    iVar6 = (int)puVar10 - ((int)puVar10 - in_stack_0000005c);
    do {
      lVar13 = (longlong)iVar4;
      puVar9 = (undefined8 *)((int)puVar10 - in_stack_0000005c);
      if (0 < iVar4) {
        do {
          *(undefined8 *)(iVar6 + (int)puVar9) = *puVar9;
          lVar13 = lVar13 + -1;
          puVar9 = puVar9 + 1;
        } while (lVar13 != 0);
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + in_stack_0000005c;
    } while (iVar5 != 0);
  }
  return;
}

