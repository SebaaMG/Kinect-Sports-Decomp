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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_8267BF50();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278D3F0();
extern int fn_82797348();
extern int fn_82797D20();
extern int fn_82799DA8();
extern int fn_827A7E68();


void fn_82726E60(int param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0xd0);
  if ((piVar1 == (int *)0x0) || (bVar2 = true, *piVar1 == 0)) {
    bVar2 = false;
  }
  if (!bVar2) {
    return;
  }
  uVar9 = 0;
  if (param_2 == 0) {
    iVar8 = (param_3 + 2) * 8;
    if (piVar1[(param_3 + 2) * 2] == 0) {
      uVar5 = 0;
      if (piVar1[2] == 0) {
        return;
      }
      iVar6 = 0;
      while( true ) {
        iVar7 = *(int *)(iVar6 + piVar1[1]);
        if ((*param_4 + param_4[1] + -1 < iVar7) ||
           (bVar2 = true, *(int *)(iVar6 + piVar1[1] + 4) + iVar7 + -1 < *param_4)) {
          bVar2 = false;
        }
        if (bVar2) break;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x14;
        if ((uint)piVar1[2] <= uVar5) {
          return;
        }
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
      *(uint *)(iVar8 + *(int *)(param_1 + 0xd0)) = uVar5 + 1;
      puVar11 = (uint *)(iVar6 + uVar5 * 0x14);
      *(undefined1 *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x15) = 1;
    }
    else {
      if (*(char *)((int)piVar1 + param_3 * 8 + 0x15) != '\0') {
        return;
      }
      *(undefined1 *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x15) = 1;
      iVar8 = *(int *)(iVar8 + *(int *)(param_1 + 0xd0)) * 0x14 +
              *(int *)(*(int *)(param_1 + 0xd0) + 4);
      puVar11 = (uint *)(iVar8 + -0x14);
      if (*(int *)(iVar8 + -8) != 0) {
        *(int *)(iVar8 + -8) = *(int *)(iVar8 + -8) + 1;
        return;
      }
    }
    if (puVar11 == (uint *)0x0) {
      return;
    }
    uVar5 = puVar11[3];
    puVar11[3] = uVar5 + 1;
    if (uVar5 != 0) {
      return;
    }
LAB_82727240:
    uVar9 = 0xffffffff820110d4;
  }
  else {
    if (param_2 == 1) {
      iVar8 = (param_3 + 2) * 8;
      if (piVar1[(param_3 + 2) * 2] == 0) {
        return;
      }
      param_3 = param_3 * 8;
      if (*(char *)((int)piVar1 + param_3 + 0x15) == '\0') {
        return;
      }
      *(undefined1 *)(param_3 + *(int *)(param_1 + 0xd0) + 0x15) = 0;
      iVar6 = *(int *)(iVar8 + *(int *)(param_1 + 0xd0));
      if (*(char *)(param_3 + *(int *)(param_1 + 0xd0) + 0x14) == '\0') {
        *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xd0)) = 0;
      }
      puVar11 = (uint *)((iVar6 + -1) * 0x14 + *(int *)(*(int *)(param_1 + 0xd0) + 4));
      uVar5 = puVar11[3];
      if (uVar5 == 0) goto LAB_82727248;
      puVar11[3] = uVar5 - 1;
      if (uVar5 != 1) {
        return;
      }
      if (puVar11[4] == 0) goto LAB_82727248;
    }
    else {
      if (2 < param_2) {
        if (param_2 != 3) {
          return;
        }
        iVar8 = (param_3 + 2) * 8;
        if (piVar1[(param_3 + 2) * 2] == 0) {
          return;
        }
        if (*(char *)(piVar1 + param_3 * 2 + 5) == '\0') {
          return;
        }
        *(undefined1 *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x14) = 0;
        iVar6 = *(int *)(param_1 + 0xd0);
        iVar7 = *(int *)(iVar6 + iVar8) * 0x14 + *(int *)(iVar6 + 4);
        puVar11 = (uint *)(iVar7 + -0x14);
        if (*(char *)(iVar6 + param_3 * 8 + 0x15) == '\0') {
          *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xd0)) = 0;
        }
        iVar8 = *(int *)(iVar7 + -4);
        if (iVar8 == 0) goto LAB_82727248;
        *(int *)(iVar7 + -4) = iVar8 + -1;
        if (iVar8 != 1) {
          return;
        }
        if (*(int *)(iVar7 + -8) == 0) goto LAB_82727248;
        goto LAB_82727240;
      }
      iVar8 = (param_3 + 2) * 8;
      if (piVar1[(param_3 + 2) * 2] == 0) {
        uVar5 = 0;
        if (piVar1[2] == 0) {
          return;
        }
        iVar6 = 0;
        while( true ) {
          iVar7 = *(int *)(iVar6 + piVar1[1]);
          if ((*param_4 + param_4[1] + -1 < iVar7) ||
             (bVar2 = true, *(int *)(iVar6 + piVar1[1] + 4) + iVar7 + -1 < *param_4)) {
            bVar2 = false;
          }
          if (bVar2) break;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x14;
          if ((uint)piVar1[2] <= uVar5) {
            return;
          }
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
        *(uint *)(iVar8 + *(int *)(param_1 + 0xd0)) = uVar5 + 1;
        puVar11 = (uint *)(iVar6 + uVar5 * 0x14);
        *(undefined1 *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x14) = 1;
      }
      else {
        if (*(char *)(piVar1 + param_3 * 2 + 5) != '\0') {
          return;
        }
        *(undefined1 *)(param_3 * 8 + *(int *)(param_1 + 0xd0) + 0x14) = 1;
        iVar8 = *(int *)(*(int *)(param_1 + 0xd0) + iVar8) * 0x14 +
                *(int *)(*(int *)(param_1 + 0xd0) + 4);
        puVar11 = (uint *)(iVar8 + -0x14);
        if (*(int *)(iVar8 + -4) != 0) {
          *(int *)(iVar8 + -4) = *(int *)(iVar8 + -4) + 1;
          return;
        }
      }
      if (puVar11 == (uint *)0x0) {
        return;
      }
      if (puVar11[3] != 0) {
        return;
      }
      uVar5 = puVar11[4];
      puVar11[4] = uVar5 + 1;
      if (uVar5 != 0) {
        return;
      }
    }
    uVar9 = 0xffffffff820110e0;
  }
LAB_82727248:
  if (puVar11[2] != 0) {
    uVar10 = (ulonglong)*puVar11;
    fn_82797D20(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),uVar10,
                      -(ulonglong)(uVar10 <= puVar11[1] + uVar10) & (puVar11[1] + uVar10) - uVar10);
    fn_82797348(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),puVar11[2],uVar10,
                      0xffffffffffffffff);
  }
  if (((uVar9 & 0xffffffff) != 0) &&
     (lVar3 = fn_827A7E68((ulonglong)**(uint **)(param_1 + 0xd0) + 0x30,0,uVar9,
                                0xffffffffffffffff), lVar3 != 0)) {
    uVar9 = fn_827A7E68((ulonglong)**(uint **)(param_1 + 0xd0) + 0x30,0,0xffffffff8200befc,
                              0xffffffffffffffff);
    uVar10 = fn_827A7E68((ulonglong)**(uint **)(param_1 + 0xd0) + 0x30,0,0xffffffff820110cc,
                               0xffffffffffffffff);
    uVar4 = fn_8267BF50(param_1);
    fn_826FDED0(auStack_a0,uVar4);
    if ((uVar9 & 0xffffffff) != 0) {
      uVar4 = fn_8278D3F0(auStack_70,auStack_a0,uVar9);
      fn_82726AB8(auStack_a0,uVar4);
      fn_826FDF58(auStack_70);
    }
    if ((uVar10 & 0xffffffff) != 0) {
      uVar4 = fn_8278D3F0(auStack_70,auStack_a0,uVar10);
      fn_82726AB8(auStack_a0,uVar4);
      fn_826FDF58(auStack_70);
    }
    uVar4 = fn_8278D3F0(auStack_70,auStack_a0,lVar3);
    fn_82726AB8(auStack_a0,uVar4);
    fn_826FDF58(auStack_70);
    fn_82799DA8(*(undefined4 *)(param_1 + 0xa0),auStack_a0,(ulonglong)*puVar11,
                      (ulonglong)puVar11[1] + (ulonglong)*puVar11);
    fn_826FDF58(auStack_a0);
  }
  return;
}

