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
extern int fn_82CE8A48();
extern int fn_82DAA750();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


undefined8
fn_82DAA858(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar9 = 1;
  puVar2 = *(uint **)(param_3 + 0x18);
  switch(*param_3) {
  case 1:
  case 2:
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      if ((int)puVar2[0x1d] < 1) {
        fn_82DAA750(param_3,puVar2);
        return 0;
      }
      if (param_4 + 4 != (undefined4 *)0x0) {
        *(undefined1 *)(param_4 + 4) = 3;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 2;
        *(undefined2 *)(param_4 + 5) = 0x20;
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
      }
      *param_4 = 0;
      return 0;
    }
    break;
  case 3:
    fn_82DAA750(param_3,puVar2);
    return 0;
  case 4:
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      puVar11 = param_4 + 4;
      if (*(char *)(puVar2 + 0x16) == '\0') {
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *(undefined1 *)puVar11 = 7;
          *(undefined1 *)((int)param_4 + 0x11) = 0;
          *(undefined1 *)((int)param_4 + 0x12) = 1;
          *(undefined2 *)(param_4 + 5) = 0x30;
          *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
          *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
          param_4[9] = *(undefined4 *)(param_3 + 0x14);
          param_4[10] = *(undefined4 *)(param_3 + 0x18);
          param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
          param_4[0xc] = puVar2[0xc];
          param_4[0xd] = puVar2[0xd];
        }
        *param_4 = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        *puVar2 = (uint)*(ushort *)(puVar2 + 0xe);
      }
      else {
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *(undefined1 *)puVar11 = 6;
          *(undefined1 *)((int)param_4 + 0x11) = 0;
          *(undefined1 *)((int)param_4 + 0x12) = 1;
          *(undefined2 *)(param_4 + 5) = 0x40;
          *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
          *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
          param_4[9] = *(undefined4 *)(param_3 + 0x14);
          param_4[10] = *(undefined4 *)(param_3 + 0x18);
          param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
          uVar3 = puVar2[5];
          param_4[0xc] = uVar3;
          param_4[0xe] = puVar2[0xc] - uVar3;
          param_4[0xf] = puVar2[0xf] - uVar3;
          param_4[0x10] = puVar2[0x10] - uVar3;
          param_4[0xd] = puVar2[6];
          param_4[0x11] = puVar2[0x11];
          param_4[0x12] = puVar2[0x12];
        }
        *param_4 = 0;
        *(char *)((int)param_4 + 0x12) = (*(char *)((int)puVar2 + 0x59) != '\0') + '\x01';
      }
      if (*(char *)((int)puVar2 + 0x21) == '\0') {
        return 0;
      }
      uStack_40 = *(undefined2 *)(puVar11 + 4);
      uStack_3c = puVar11[5];
      uStack_38 = puVar11[6];
      uStack_34 = puVar11[7];
      uStack_50 = 5;
      uStack_4f = 0;
      uStack_4e = 2;
      uStack_4c = 0x20;
      uStack_4a = 0xffff;
      fn_82CE8A48(param_1,param_2,&uStack_50,0);
      return 0;
    }
    break;
  case 7:
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      if (param_4 + 4 != (undefined4 *)0x0) {
        *(undefined1 *)(param_4 + 4) = 8;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        *(undefined2 *)(param_4 + 5) = 0x30;
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
        uVar3 = puVar2[0x1e];
        param_4[0xc] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = uVar3;
      }
      *param_4 = 0;
      *(undefined1 *)((int)param_4 + 0x12) = 1;
      *puVar2 = (uint)*(ushort *)(puVar2 + 0x1f);
      return 0;
    }
    break;
  case 8:
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 != 0) {
      return 1;
    }
    uVar1 = *(ushort *)(*(int *)(param_3 + 0x2c) + 0x1e);
    if (uVar1 != 0) {
      if (param_4 + 4 != (undefined4 *)0x0) {
        *(undefined1 *)(param_4 + 4) = 8;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        puVar10 = (undefined8 *)(param_3 + -8);
        *(undefined2 *)(param_4 + 5) = 0x30;
        puVar8 = (undefined8 *)(param_4 + 2);
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        lVar9 = 6;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
        do {
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        param_4[0xf] = *(undefined4 *)(*(int *)(param_3 + 0x2c) + 0x20);
      }
      *param_4 = 0;
      *(undefined1 *)((int)param_4 + 0x12) = 1;
      *puVar2 = (uint)uVar1;
      return 0;
    }
    puVar11 = param_4 + 4;
    if (*(int *)(param_3 + 0x28) + 1U < *(uint *)(param_3 + 0x24)) {
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)puVar11 = 8;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        puVar10 = (undefined8 *)(param_3 + -8);
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        puVar8 = (undefined8 *)(param_4 + 2);
        *(undefined2 *)(param_4 + 5) = 0x30;
        lVar9 = 6;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
        do {
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        param_4[0xf] = *(undefined4 *)(*(int *)(param_3 + 0x2c) + 0x20);
      }
      puVar11[10] = puVar11[10] + 1;
      puVar11[0xb] = puVar2[0x1e];
      uVar1 = *(ushort *)(puVar2 + 0x1f);
      *param_4 = 0;
      *(undefined1 *)((int)param_4 + 0x12) = 1;
      *puVar2 = (uint)uVar1;
      return 0;
    }
    if (puVar11 != (undefined4 *)0x0) {
      *(undefined1 *)puVar11 = 9;
      *(undefined1 *)((int)param_4 + 0x11) = 0;
      *(undefined1 *)((int)param_4 + 0x12) = 1;
      *(undefined2 *)(param_4 + 5) = 0x30;
      *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
      *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
      param_4[9] = *(undefined4 *)(param_3 + 0x14);
      param_4[10] = *(undefined4 *)(param_3 + 0x18);
      param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
      param_4[0xc] = puVar2[0xc];
      param_4[0xd] = puVar2[0xd];
      param_4[0xe] = *(undefined4 *)(param_3 + 0x20);
      *(undefined1 *)(param_4 + 0xf) = 0;
    }
    uVar1 = *(ushort *)((int)puVar2 + 0x3a);
    *param_4 = 0;
    *(undefined1 *)((int)param_4 + 0x12) = 1;
    *puVar2 = (uint)uVar1;
    return 0;
  case 9:
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      puVar11 = param_4 + 4;
      if (param_3[0x2c] != '\0') {
        if (puVar11 != (undefined4 *)0x0) {
          *(undefined1 *)puVar11 = 0xb;
          *(undefined1 *)((int)param_4 + 0x11) = 0;
          *(undefined1 *)((int)param_4 + 0x12) = 2;
          *(undefined2 *)(param_4 + 5) = 0x40;
          *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
          *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
          param_4[9] = *(undefined4 *)(param_3 + 0x14);
          param_4[10] = *(undefined4 *)(param_3 + 0x18);
          param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
          uVar3 = puVar2[0x1e];
          *(undefined2 *)((int)param_4 + 0x46) = 0;
          param_4[0xc] = uVar3;
          *(undefined2 *)(param_4 + 0x11) = *(undefined2 *)(puVar2 + 0x15);
          param_4[0x10] = puVar2[5];
        }
        uVar3 = puVar2[0x1b];
        *param_4 = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        *puVar2 = uVar3;
        return 0;
      }
      if (puVar11 != (undefined4 *)0x0) {
        *(undefined1 *)puVar11 = 8;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        *(undefined2 *)(param_4 + 5) = 0x30;
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
        param_4[0xf] = puVar2[0x1e];
        iVar7 = *(int *)(param_3 + 0x28);
        param_4[0xe] = 0;
        param_4[0xc] = iVar7 + 1;
      }
      uVar1 = *(ushort *)(puVar2 + 0x1f);
      *param_4 = 0;
      *(undefined1 *)((int)param_4 + 0x12) = 1;
      *puVar2 = (uint)uVar1;
      return 0;
    }
    break;
  case 10:
    *puVar2 = *puVar2 - 1;
    piVar4 = *(int **)(*(int *)(param_3 + 0x20) + 0xc);
    if (*piVar4 != 0) {
      piVar4[1] = puVar2[9];
      puVar2[9] = (uint)piVar4;
    }
    if (*puVar2 != 0) {
      return 1;
    }
  case 6:
    *(undefined1 *)(puVar2 + 8) = 1;
    break;
  case 0xb:
    if (*(int *)(param_3 + 0x38) < 6) {
      puVar2[2] = 0;
    }
    lVar9 = (((ulonglong)*(ushort *)(param_3 + 0x34) - 1 & 0xffffffff) >> 7) + 1;
  case 5:
    lVar9 = (ulonglong)*(uint *)(*(int *)(param_3 + 0x18) + 4) - lVar9;
    *(int *)(*(int *)(param_3 + 0x18) + 4) = (int)lVar9;
    if (lVar9 == 0) {
      if (param_4 + 4 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)(param_3 + 0x18);
        *(undefined1 *)(param_4 + 4) = 0xc;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 2;
        *(undefined2 *)(param_4 + 5) = 0x30;
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        uVar6 = *(undefined4 *)(param_3 + 0x1c);
        param_4[10] = uVar5;
        *(undefined2 *)(param_4 + 0xc) = 1;
        param_4[0xb] = uVar6;
      }
      *param_4 = 0;
      return 0;
    }
    break;
  case 0xd:
    iVar7 = *(int *)(param_3 + 0x20);
    if ((iVar7 != 0) &&
       (lVar9 = (ulonglong)*(uint *)(iVar7 + 4) - 1, *(int *)(iVar7 + 4) = (int)lVar9, lVar9 == 0))
    {
      if (param_4 + 4 != (undefined4 *)0x0) {
        *(undefined1 *)(param_4 + 4) = 0xe;
        *(undefined1 *)((int)param_4 + 0x11) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 2;
        *(undefined2 *)(param_4 + 5) = 0x30;
        *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[10] = *(undefined4 *)(param_3 + 0x18);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
        *(undefined2 *)(param_4 + 8) = *(undefined2 *)(param_3 + 0x10);
        param_4[0xc] = *(undefined4 *)(param_3 + 0x20);
      }
      *param_4 = 0;
      return 0;
    }
  }
  return 1;
}

