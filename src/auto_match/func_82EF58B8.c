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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;


int fn_82EF58B8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  int *in_stack_000000a4;
  int *in_stack_000000ac;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  
  uVar5 = (ulonglong)in_stack_0000005c;
  uStack0000001c = (undefined4)param_2;
  iStack_c0 = 0;
  iStack_b8 = 0;
  iStack_bc = 0;
  iStack_b4 = 0;
  iVar14 = *(int *)(param_1 + 0x6dd0);
  uStack00000024 = (undefined4)param_3;
  uStack0000002c = (undefined4)param_4;
  uStack00000034 = (undefined4)param_5;
  uStack0000003c = (undefined4)param_6;
  iStack_a0 = iVar14;
  (**(code **)(param_1 + 0x6f38))(param_2,param_5,param_7,uVar5,&iStack_ac,&iStack_b0);
  uVar7 = (ulonglong)in_stack_00000064;
  if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
    (**(code **)(param_1 + 0x6f38))(param_3,param_6,param_8,uVar7,&iStack_c0,&iStack_b8);
  }
  if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
    (**(code **)(param_1 + 0x6f38))
              (param_4,param_6,(ulonglong)in_stack_00000054,uVar7,&iStack_bc,&iStack_b4);
  }
  iStack_ac = (iStack_bc + iStack_c0 >> 2) + iStack_ac;
  iStack_b0 = (iStack_b4 + iStack_b8 >> 2) + iStack_b0;
  *in_stack_000000a4 = iStack_ac;
  *in_stack_000000ac = iStack_b0;
  in_stack_000000ac[0x40] = 0;
  in_stack_000000ac[0x20] = 0;
  in_stack_000000a4[0x40] = 0;
  in_stack_000000a4[0x20] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
  }
  uVar9 = 1;
  uVar10 = 1;
  in_stack_000000ac[1] = 0xfffffff;
  in_stack_000000a4[1] = 0xfffffff;
  if ((*(int *)(param_1 + 0x6dd8) < iStack_ac) || (*(int *)(param_1 + 0x6dd8) < iStack_b0)) {
    param_7 = (longlong)(int)in_stack_0000005c * (longlong)in_stack_00000094 + param_7;
    lVar11 = (longlong)(int)in_stack_00000064 * (longlong)in_stack_00000094 + param_8;
    if (in_stack_00000094 <= in_stack_0000009c) {
      lVar6 = (lVar11 - param_8) + (ulonglong)in_stack_00000054;
      do {
        uVar13 = (ulonglong)in_stack_00000084;
        if ((int)in_stack_00000084 <= in_stack_0000008c) {
          lVar8 = (uVar10 & 0x3fffffff) * 4 + ZEXT48(in_stack_000000ac);
          lVar12 = (uVar9 & 0x3fffffff) * 4 + ZEXT48(in_stack_000000a4);
          do {
            iVar14 = (int)uVar13;
            if ((in_stack_00000094 != 0) || (iVar14 != 0)) {
              lVar15 = uVar13 + lVar11;
              (**(code **)(param_1 + 0x6f38))
                        (uStack0000001c,uStack00000034,lVar15 + (param_7 - lVar11),uVar5,&iStack_a8,
                         &iStack_a4);
              if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
                (**(code **)(param_1 + 0x6f38))
                          (uStack00000024,uStack0000003c,lVar15,uVar7,&iStack_c0,&iStack_b8);
              }
              if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
                (**(code **)(param_1 + 0x6f38))
                          (uStack0000002c,uStack0000003c,lVar15 + (lVar6 - lVar11),uVar7,&iStack_bc,
                           &iStack_b4);
              }
              iStack_a8 = (iStack_bc + iStack_c0 >> 2) + iStack_a8;
              iStack_a4 = (iStack_b4 + iStack_b8 >> 2) + iStack_a4;
              if (iStack_a8 < *(int *)lVar12) {
                uVar4 = 0;
                iVar2 = *in_stack_000000a4;
                uVar1 = ZEXT48(in_stack_000000a4);
                while (iVar2 < iStack_a8) {
                  uVar1 = uVar1 + 4;
                  uVar4 = uVar4 + 1;
                  iVar2 = *(int *)uVar1;
                }
                if ((int)uVar4 < (int)uVar9) {
                  lVar3 = uVar9 - uVar4;
                  lVar15 = lVar12 + 0x104;
                  do {
                    iVar2 = (int)lVar15;
                    *(undefined4 *)(iVar2 + -0x104) = *(undefined4 *)(iVar2 + -0x108);
                    *(undefined4 *)(iVar2 + -0x84) = *(undefined4 *)(iVar2 + -0x88);
                    lVar15 = lVar15 + -4;
                    *(undefined4 *)lVar15 = *(undefined4 *)(iVar2 + -8);
                    lVar3 = lVar3 + -1;
                  } while (lVar3 != 0);
                }
                *(int *)((int)((uVar4 & 0xffffffff) << 2) + (int)in_stack_000000a4) = iStack_a8;
                *(int *)((int)((uVar4 + 0x20 & 0xffffffff) << 2) + (int)in_stack_000000a4) = iVar14;
                *(int *)((int)((uVar4 + 0x40 & 0xffffffff) << 2) + (int)in_stack_000000a4) =
                     in_stack_00000094;
                if ((int)uVar9 < *(int *)(param_1 + 0x6dd0) + -1) {
                  uVar9 = uVar9 + 1;
                  lVar12 = lVar12 + 4;
                }
              }
              if (iStack_a4 < *(int *)lVar8) {
                uVar4 = 0;
                iVar2 = *in_stack_000000ac;
                uVar1 = ZEXT48(in_stack_000000ac);
                while (iVar2 < iStack_a4) {
                  uVar1 = uVar1 + 4;
                  uVar4 = uVar4 + 1;
                  iVar2 = *(int *)uVar1;
                }
                if ((int)uVar4 < (int)uVar10) {
                  lVar3 = uVar10 - uVar4;
                  lVar15 = lVar8 + 0x104;
                  do {
                    iVar2 = (int)lVar15;
                    *(undefined4 *)(iVar2 + -0x104) = *(undefined4 *)(iVar2 + -0x108);
                    *(undefined4 *)(iVar2 + -0x84) = *(undefined4 *)(iVar2 + -0x88);
                    lVar15 = lVar15 + -4;
                    *(undefined4 *)lVar15 = *(undefined4 *)(iVar2 + -8);
                    lVar3 = lVar3 + -1;
                  } while (lVar3 != 0);
                }
                *(int *)((int)((uVar4 + 0x20 & 0xffffffff) << 2) + (int)in_stack_000000ac) = iVar14;
                *(int *)((int)((uVar4 & 0xffffffff) << 2) + (int)in_stack_000000ac) = iStack_a4;
                *(int *)((int)((uVar4 + 0x40 & 0xffffffff) << 2) + (int)in_stack_000000ac) =
                     in_stack_00000094;
                if ((int)uVar10 < *(int *)(param_1 + 0x6dd0) + -1) {
                  uVar10 = uVar10 + 1;
                  lVar8 = lVar8 + 4;
                }
              }
            }
            uVar13 = uVar13 + 1;
            iVar14 = iStack_a0;
          } while ((int)uVar13 <= in_stack_0000008c);
        }
        in_stack_00000094 = in_stack_00000094 + 1;
        param_7 = param_7 + uVar5;
        lVar11 = lVar11 + uVar7;
        lVar6 = lVar6 + uVar7;
      } while (in_stack_00000094 <= in_stack_0000009c);
    }
    if ((*(int *)(param_1 + 0x6da4) == 0) ||
       ((iVar2 = iVar14 + 1, iStack_ac <= in_stack_000000a4[iVar14 + -1] &&
        (iStack_b0 <= in_stack_000000ac[iVar14 + -1])))) {
      iVar2 = iVar14;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

