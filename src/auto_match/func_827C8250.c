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
extern unsigned int *auStack_a80;
extern unsigned int uStack_a84;


void fn_827C8250(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  char acStack_a90 [12];
  undefined4 uStack_a84;
  uint auStack_a80 [672];
  
  if (param_1[0x2a] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x13;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)();
  }
  puVar8 = (uint *)param_1[0x2b];
  if ((puVar8[5] == 0) && (puVar8[6] == 0x3f)) {
    iVar9 = param_1[0xf];
    iVar10 = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
    if (0 < iVar9) {
      do {
        acStack_a90[iVar10] = '\0';
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
  }
  else {
    uVar2 = param_1[0xf];
    *(undefined1 *)(param_1 + 0x35) = 1;
    if (0 < (int)uVar2) {
      puVar7 = &uStack_a84;
      lVar13 = ((ulonglong)uVar2 & 0xffffff) << 6;
      if ((uVar2 & 0xffffff) != 0) {
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 0xffffffff;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  iVar9 = 1;
  if (0 < param_1[0x2a]) {
    do {
      uVar2 = *puVar8;
      uVar12 = (ulonglong)uVar2;
      if (((int)uVar2 < 1) || (4 < (int)uVar2)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x1a;
        *(uint *)(*param_1 + 0x18) = uVar2;
        *(undefined4 *)(*param_1 + 0x1c) = 4;
        (**(code **)*param_1)(param_1);
      }
      iVar10 = 0;
      puVar11 = puVar8;
      if (0 < (int)uVar2) {
        do {
          uVar3 = puVar11[1];
          if (((int)uVar3 < 0) || (param_1[0xf] <= (int)uVar3)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x13;
            *(int *)(*param_1 + 0x18) = iVar9;
            (**(code **)*param_1)(param_1);
          }
          if ((0 < iVar10) && ((int)uVar3 <= (int)*puVar11)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x13;
            *(int *)(*param_1 + 0x18) = iVar9;
            (**(code **)*param_1)(param_1);
          }
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar10 < (int)uVar2);
      }
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar5 = puVar8[7];
      uVar6 = puVar8[8];
      if (*(char *)(param_1 + 0x35) == '\0') {
        if ((((uVar3 != 0) || (uVar4 != 0x3f)) || (uVar5 != 0)) || (uVar6 != 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x11;
          *(int *)(*param_1 + 0x18) = iVar9;
          (**(code **)*param_1)(param_1);
        }
        puVar11 = puVar8;
        if (0 < (int)uVar2) {
          do {
            uVar2 = puVar11[1];
            if (acStack_a90[uVar2] != '\0') {
              *(undefined4 *)(*param_1 + 0x14) = 0x13;
              *(int *)(*param_1 + 0x18) = iVar9;
              (**(code **)*param_1)(param_1);
            }
            uVar12 = uVar12 - 1;
            acStack_a90[uVar2] = '\x01';
            puVar11 = puVar11 + 1;
          } while (uVar12 != 0);
        }
      }
      else {
        if ((((((int)uVar3 < 0) || (0x3f < (int)uVar3)) ||
             (((int)uVar4 < (int)uVar3 || ((0x3f < (int)uVar4 || ((int)uVar5 < 0)))))) ||
            (10 < (int)uVar5)) || (((int)uVar6 < 0 || (10 < (int)uVar6)))) {
          *(undefined4 *)(*param_1 + 0x14) = 0x11;
          *(int *)(*param_1 + 0x18) = iVar9;
          (**(code **)*param_1)(param_1);
        }
        if (uVar3 == 0) {
          bVar1 = uVar4 == 0;
        }
        else {
          bVar1 = uVar2 == 1;
        }
        if (!bVar1) {
          *(undefined4 *)(*param_1 + 0x14) = 0x11;
          *(int *)(*param_1 + 0x18) = iVar9;
          (**(code **)*param_1)(param_1);
        }
        puVar11 = puVar8;
        if (0 < (int)uVar2) {
          do {
            uVar2 = puVar11[1];
            if ((uVar3 != 0) && ((int)auStack_a80[uVar2 * 0x40] < 0)) {
              *(undefined4 *)(*param_1 + 0x14) = 0x11;
              *(int *)(*param_1 + 0x18) = iVar9;
              (**(code **)*param_1)(param_1);
            }
            if ((int)uVar3 <= (int)uVar4) {
              lVar13 = ((ulonglong)uVar4 - (ulonglong)uVar3) + 1;
              puVar14 = auStack_a80 + uVar2 * 0x40 + (uVar3 - 1);
              do {
                if ((int)puVar14[1] < 0) {
                  bVar1 = uVar5 == 0;
LAB_827c8558:
                  if (!bVar1) goto LAB_827c855c;
                }
                else {
                  if (uVar5 == puVar14[1]) {
                    bVar1 = uVar6 == uVar5 - 1;
                    goto LAB_827c8558;
                  }
LAB_827c855c:
                  *(undefined4 *)(*param_1 + 0x14) = 0x11;
                  *(int *)(*param_1 + 0x18) = iVar9;
                  (**(code **)*param_1)(param_1);
                }
                lVar13 = lVar13 + -1;
                puVar14 = puVar14 + 1;
                *puVar14 = uVar6;
              } while (lVar13 != 0);
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar12 != 0);
        }
      }
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 9;
    } while (iVar9 <= param_1[0x2a]);
  }
  iVar9 = 0;
  if (0 < param_1[0xf]) {
    if (*(char *)(param_1 + 0x35) == '\0') {
      do {
        if (acStack_a90[iVar9] == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2d;
          (**(code **)*param_1)(param_1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1[0xf]);
    }
    else {
      puVar8 = auStack_a80;
      do {
        if ((int)*puVar8 < 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2d;
          (**(code **)*param_1)(param_1);
        }
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 0x40;
      } while (iVar9 < param_1[0xf]);
    }
  }
  return;
}

