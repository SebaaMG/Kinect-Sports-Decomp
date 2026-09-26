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
extern int fn_82E9AB00();
extern int fn_82E9E258();
extern unsigned int lbl_831898B8;
extern unsigned int stack0x0000004c;
extern unsigned int stack0x00000054;
extern unsigned int uStack00000024;
extern unsigned int uStack0000004c;
extern unsigned int uStack_b0;


void fn_82E9E5A8(int param_1,undefined8 param_2,uint param_3,undefined8 param_4,int *param_5,
                  int param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uStack00000024;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  uint *in_stack_00000074;
  undefined4 *in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 *in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  undefined1 *in_stack_000000a4;
  int *in_stack_000000ac;
  int *in_stack_000000b4;
  undefined4 *in_stack_000000bc;
  undefined4 *in_stack_000000c4;
  undefined4 *in_stack_000000cc;
  undefined4 in_stack_000000d4;
  uint uStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  uint *puStack_9c;
  
  iVar5 = in_stack_0000009c;
  iVar4 = in_stack_00000094;
  uVar3 = in_stack_00000084;
  uVar15 = (ulonglong)in_stack_0000005c;
  iVar14 = 0;
  iVar12 = 0;
  lVar10 = 4;
  uStack00000024 = param_3;
  uStack0000004c = param_8;
  piVar16 = param_5;
  do {
    uVar18 = *piVar16 + param_6;
    uVar17 = piVar16[1] + param_7;
    if (((int)uVar18 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar18)) {
      if (((int)uVar17 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar17))
      {
        if (iVar4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)((int)uVar17 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
                     (longlong)((int)uVar18 >> 2) + (ulonglong)uStack00000024,
                     *(int *)(param_1 + 0x564),uVar3,0x10,uVar18 & 3,uVar17 & 3,iVar4,
                     *(undefined4 *)(param_1 + 0x618));
        }
        puStack_ac = &stack0x00000054;
        puStack_a8 = (undefined1 *)&stack0x0000004c;
        puStack_a4 = in_stack_0000008c;
        puStack_a0 = in_stack_0000007c;
        puStack_9c = in_stack_00000074;
        fn_82E9E258(param_1,param_2,param_4,uVar3,param_5,uStack0000004c,in_stack_00000054,uVar15)
        ;
        lVar6 = fn_82E9AB00(param_1,uVar18 - in_stack_00000064,uVar17 - in_stack_0000006c,iVar5);
        uVar7 = (ulonglong)uStack_b0;
        uStack_b0 = (uint)(lVar6 + uVar7);
        if ((int)uStack_b0 < (int)uVar15) {
          iVar14 = *piVar16;
          iVar12 = piVar16[1];
          uVar15 = lVar6 + uVar7;
        }
      }
    }
    lVar10 = lVar10 + -1;
    piVar16 = piVar16 + 2;
  } while (lVar10 != 0);
  iVar11 = 0;
  iVar13 = 0;
  piVar16 = param_5 + 8;
  lVar10 = 4;
  do {
    uVar18 = *piVar16 + iVar14 + param_6;
    uVar17 = piVar16[1] + iVar12 + param_7;
    if (((int)uVar18 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar18)) {
      if (((int)uVar17 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar17))
      {
        if (iVar4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)((int)uVar17 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
                     (longlong)((int)uVar18 >> 2) + (ulonglong)uStack00000024,
                     *(int *)(param_1 + 0x564),uVar3,0x10,uVar18 & 3,uVar17 & 3,iVar4,
                     *(undefined4 *)(param_1 + 0x618));
        }
        puStack_9c = &uStack_b0;
        puStack_a0 = &stack0x00000054;
        puStack_a4 = &stack0x0000004c;
        puStack_a8 = in_stack_000000a4;
        puStack_ac = in_stack_0000008c;
        fn_82E9E258(param_1,param_2,param_4,uVar3,param_5,uStack0000004c,in_stack_00000054,uVar15)
        ;
        uVar1 = (int)(uVar18 - in_stack_00000064) >> 0x1f;
        uVar2 = (int)(uVar17 - in_stack_0000006c) >> 0x1f;
        iVar9 = (uVar18 - in_stack_00000064 ^ uVar1) - uVar1;
        iVar8 = (uVar17 - in_stack_0000006c ^ uVar2) - uVar2;
        if ((iVar9 < 0x9f) && (iVar8 < 0x9f)) {
          lVar6 = (ulonglong)*(uint *)(*(int *)(&lbl_831898B8 + iVar8 * 4) * 4 + iVar5) +
                  (ulonglong)*(uint *)(*(int *)(&lbl_831898B8 + iVar9 * 4) * 4 + iVar5);
        }
        else {
          lVar6 = ((ulonglong)*(uint *)(iVar5 + 0x14) & 0x7fffffff) << 1;
        }
        uVar7 = (ulonglong)uStack_b0;
        uStack_b0 = (uint)(lVar6 + uVar7);
        if ((int)uStack_b0 < (int)uVar15) {
          iVar13 = *piVar16;
          iVar11 = piVar16[1];
          uVar15 = lVar6 + uVar7;
        }
      }
    }
    lVar10 = lVar10 + -1;
    piVar16 = piVar16 + 2;
  } while (lVar10 != 0);
  *in_stack_000000ac = iVar13 + iVar14 + param_6;
  *in_stack_000000b4 = iVar11 + iVar12 + param_7;
  *in_stack_000000bc = uStack0000004c;
  *in_stack_000000c4 = in_stack_00000054;
  *in_stack_000000cc = (int)uVar15;
  return;
}

