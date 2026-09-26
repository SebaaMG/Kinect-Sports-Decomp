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
extern unsigned int *auStack_80;
extern int fn_82A29AC0();
extern int fn_82A2A108();
extern int fn_82F68CC0();


undefined8 fn_82C05CF8(int *param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar6;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  uint auStack_80 [32];
  
  param_1[0xc] = 0;
  *param_4 = 0;
  uVar8 = *(ulonglong *)(param_1 + 0x16);
  uVar10 = *(ulonglong *)(param_1 + 0x10);
  uVar9 = *(ulonglong *)(param_1 + 0xe);
  uVar11 = 0;
  if (uVar8 < uVar9 + uVar10) {
    uVar12 = param_3;
    if ((uVar9 - uVar8) + uVar10 < (param_3 & 0xffffffff)) {
      uVar12 = ((uVar9 & 0xffffffff) - (uVar8 & 0xffffffff)) + (uVar10 & 0xffffffff);
    }
    if ((uVar12 & 0xffffffff) != 0) {
LAB_82c05d88:
      if (*(ulonglong *)(param_1 + 0x16) <
          (ulonglong)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0xe))) {
        param_1[0x1c] = 0;
        param_1[0x20] = param_1[0x21];
        if (param_1[0x1b] != 0) {
          do {
            uVar9 = *(ulonglong *)(param_1 + 0x16);
            uVar8 = (**(code **)(*(int *)param_1[0x20] + 0x40))();
            if (uVar8 <= uVar9) {
              uVar9 = *(ulonglong *)(param_1 + 0x16);
              lVar2 = (**(code **)(*(int *)param_1[0x20] + 0x40))();
              if (uVar9 < lVar2 + (ulonglong)(uint)param_1[0x1a]) break;
            }
            if (uVar9 < *(ulonglong *)(param_1 + 0x12)) {
              iVar6 = *(int *)(param_1[0x20] + 4);
            }
            else {
              iVar6 = *(int *)(param_1[0x20] + 8);
            }
            iVar7 = param_1[0x1c];
            param_1[0x20] = iVar6;
            param_1[0x1c] = iVar7 + 1U;
          } while (iVar7 + 1U < (uint)param_1[0x1b]);
        }
        if ((uint)param_1[0x1b] <= (uint)param_1[0x1c]) {
          uVar11 = (**(code **)(*param_1 + 0x7c))(param_1);
          if ((((int)uVar11 < 0) ||
              (uVar11 = (**(code **)(*param_1 + 0x78))(param_1), (int)uVar11 < 0)) ||
             (param_1[0xc] != 0)) goto LAB_82c0621c;
LAB_82c0620c:
          if ((uVar12 & 0xffffffff) == 0) goto LAB_82c0621c;
          goto LAB_82c05d88;
        }
        iVar6 = (**(code **)(*(int *)param_1[0x20] + 0x38))();
        if (iVar6 != 0) goto LAB_82c06218;
        param_1[0x21] = param_1[0x20];
        uVar3 = (**(code **)(*(int *)param_1[0x20] + 0x40))();
        piVar14 = (int *)param_1[0x20];
        uVar13 = 0;
        *(undefined8 *)(param_1 + 0x12) = uVar3;
        if (param_1[0x1b] != 1) {
          do {
            lVar2 = (**(code **)(*piVar14 + 0x40))(piVar14);
            piVar14 = (int *)piVar14[2];
            piVar1 = (int *)param_1[0x20];
            uVar8 = (**(code **)(*piVar14 + 0x48))(piVar14);
            uVar9 = (**(code **)(*piVar1 + 0x48))(piVar1);
            if (uVar8 <= uVar9) {
              piVar1 = (int *)param_1[0x20];
              lVar4 = (**(code **)(*piVar14 + 0x48))(piVar14);
              lVar5 = (**(code **)(*piVar1 + 0x48))(piVar1);
              if ((ulonglong)(lVar5 - lVar4) < (ulonglong)(uint)param_1[0x1d]) break;
              iVar6 = (**(code **)(*piVar14 + 0x30))(piVar14);
              iVar7 = fn_82A29AC0(param_1[0xb],iVar6,auStack_80,1);
              if (iVar7 == 0) {
                thunk_FUN_82a2b798();
                uVar11 = (**(code **)(*param_1 + 0x20))(param_1);
                break;
              }
              uVar8 = (ulonglong)(uint)param_1[0x1a] + lVar2;
              if (*(longlong *)(param_1 + 0x10) + *(ulonglong *)(param_1 + 0xe) <= uVar8) {
                if ((param_1[0x1e] & 8U) == 0) break;
                uVar8 = *(ulonglong *)(param_1 + 0xe) & 0xfffffffffffff800;
              }
              (**(code **)(*piVar14 + 0x34))(piVar14,0);
              (**(code **)(*piVar14 + 0x3c))(piVar14,uVar8);
              *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
              (**(code **)(*piVar14 + 0x44))(piVar14);
              *(int *)(iVar6 + 8) = (int)uVar8;
              *(int *)(iVar6 + 0xc) = (int)(uVar8 >> 0x20);
              uVar3 = (**(code **)(*piVar14 + 0x28))(piVar14);
              iVar6 = fn_82A2A108(param_1[0xb],uVar3,param_1[0x1a],0,iVar6);
              if (iVar6 == 0) {
                iVar6 = thunk_FUN_82a2b798();
                if (iVar6 == 0x26) {
                  (**(code **)(*piVar14 + 0x34))(piVar14,1);
                }
                else if (iVar6 != 0x3e5) {
                  uVar11 = (**(code **)(*param_1 + 0x20))(param_1);
                  (**(code **)(*piVar14 + 0x34))(piVar14,1);
                  break;
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < param_1[0x1b] - 1U);
        }
        if ((int)uVar11 < 0) goto LAB_82c0621c;
        uVar3 = (**(code **)(*(int *)param_1[0x20] + 0x30))();
        lVar2 = (**(code **)(*(int *)param_1[0x20] + 0x28))((int *)param_1[0x20]);
        auStack_80[0] = 0;
        iVar6 = fn_82A29AC0(param_1[0xb],uVar3,auStack_80,1);
        if ((iVar6 == 0) && (iVar6 = thunk_FUN_82a2b798(), iVar6 != 0x26)) {
          uVar11 = (**(code **)(*param_1 + 0x20))(param_1);
        }
        uVar9 = (*(ulonglong *)(param_1 + 0x16) & 0xffffffff) -
                (*(ulonglong *)(param_1 + 0x12) & 0xffffffff);
        uVar8 = (uint)param_1[0x1a] - uVar9;
        if ((uVar12 & 0xffffffff) < ((uint)param_1[0x1a] - uVar9 & 0xffffffff)) {
          uVar8 = uVar12;
        }
        if (((uVar9 & 0xffffffff) <= (ulonglong)auStack_80[0]) &&
           (uVar10 = auStack_80[0] - uVar9, uVar10 != 0)) {
          if ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            uVar8 = uVar10;
          }
          fn_82F68CC0((ulonglong)*param_4 + param_2,uVar9 + lVar2,uVar8);
          uVar12 = uVar12 - uVar8;
          *(ulonglong *)(param_1 + 0x16) = (uVar8 & 0xffffffff) + *(longlong *)(param_1 + 0x16);
          *param_4 = *param_4 + (int)uVar8;
          if (-1 < (int)uVar11) goto LAB_82c0620c;
          goto LAB_82c0621c;
        }
      }
LAB_82c06218:
      param_1[0xc] = 1;
    }
LAB_82c0621c:
    if (((ulonglong)*param_4 < (param_3 & 0xffffffff)) || ((int)uVar11 < 0)) {
      param_1[0xc] = 1;
    }
  }
  else {
    uVar11 = 0;
    param_1[0xc] = 1;
  }
  return uVar11;
}

