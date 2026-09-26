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
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFC050();


void fn_82DA6530(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  fn_82CE3F80();
  iVar4 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_1,0x14);
  }
  puVar6 = (undefined1 *)(param_1[1] * 0x14 + *param_1);
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
  }
  iVar4 = param_1[1];
  param_1[1] = iVar4 + 1;
  pbVar9 = (byte *)(iVar4 * 0x14 + *param_1);
  *(int *)(param_1[3] + 0x8c) = *(int *)(param_1[3] + 0x8c) + 1;
  *(undefined4 *)pbVar9 = *param_2;
  *(undefined4 *)(pbVar9 + 4) = param_2[1];
  *(undefined4 *)(pbVar9 + 8) = param_2[2];
  *(undefined4 *)(pbVar9 + 0xc) = param_2[3];
  *(undefined4 *)(pbVar9 + 0x10) = param_2[4];
  uVar7 = *pbVar9 - 1;
  if (uVar7 < 0x24) {
    iVar4 = *(int *)(uVar7 * 4 + -0x7d2599ec);
    switch(*pbVar9) {
    default:
      fn_82CE4040(*(undefined4 *)(pbVar9 + 4));
      break;
    case 5:
    case 0x13:
    case 0x23:
      fn_82CE4040(*(undefined4 *)(pbVar9 + 4));
      fn_82CE4040(*(undefined4 *)(pbVar9 + 8));
      fn_82CE3FE8();
      return;
    case 6:
      uVar1 = *(ushort *)(pbVar9 + 8);
      iVar4 = fn_82CE5410();
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                        (*(int **)(iVar4 + 0x10),(ulonglong)uVar1 << 2);
      *(int *)(pbVar9 + 4) = (int)uVar3;
      fn_82CFC050(uVar3,param_2[1],(ulonglong)*(ushort *)(param_2 + 2) << 2);
      puVar10 = *(undefined4 **)(pbVar9 + 4);
      puVar8 = puVar10 + *(ushort *)(pbVar9 + 8);
      if (puVar10 < puVar8) {
        do {
          fn_82CE4040(*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar8);
        fn_82CE3FE8();
        return;
      }
      break;
    case 7:
      uVar1 = *(ushort *)(pbVar9 + 8);
      iVar4 = fn_82CE5410();
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                        (*(int **)(iVar4 + 0x10),(ulonglong)uVar1 << 2);
      *(int *)(pbVar9 + 4) = (int)uVar3;
      fn_82CFC050(uVar3,param_2[1],(ulonglong)*(ushort *)(param_2 + 2) << 2);
      puVar10 = *(undefined4 **)(pbVar9 + 4);
      puVar8 = puVar10 + *(ushort *)(pbVar9 + 8);
      if (puVar10 < puVar8) {
        do {
          fn_82CE4040(*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar8);
        fn_82CE3FE8();
        return;
      }
      break;
    case 0xc:
      fn_82CE4040(*(undefined4 *)(pbVar9 + 4));
      fn_82CE4040(*(undefined4 *)(pbVar9 + 8));
      iVar4 = fn_82CE5410();
      if (param_1[5] == (param_1[6] & 0x3fffffffU)) {
        fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_1 + 4,0x14);
      }
      iVar4 = param_1[5] * 0x14 + param_1[4];
      if (iVar4 != 0) {
        pbVar9 = pbVar9 + -4;
        puVar10 = (undefined4 *)(iVar4 + -4);
        lVar11 = 5;
        do {
          pbVar9 = pbVar9 + 4;
          puVar10 = puVar10 + 1;
          *puVar10 = *(undefined4 *)pbVar9;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      param_1[5] = param_1[5] + 1;
      param_1[1] = param_1[1] + -1;
      fn_82CE3FE8();
      return;
    case 0xf:
      uVar1 = *(ushort *)(pbVar9 + 8);
      iVar4 = fn_82CE5410();
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                        (*(int **)(iVar4 + 0x10),(ulonglong)uVar1 << 2);
      *(int *)(pbVar9 + 4) = (int)uVar3;
      fn_82CFC050(uVar3,param_2[1],(ulonglong)*(ushort *)(param_2 + 2) << 2);
      puVar10 = *(undefined4 **)(pbVar9 + 4);
      puVar8 = puVar10 + *(ushort *)(pbVar9 + 8);
      if (puVar10 < puVar8) {
        do {
          fn_82CE4040(*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar8);
        fn_82CE3FE8();
        return;
      }
      break;
    case 0x10:
      uVar1 = *(ushort *)(pbVar9 + 8);
      iVar4 = fn_82CE5410();
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                        (*(int **)(iVar4 + 0x10),(ulonglong)uVar1 << 2);
      *(int *)(pbVar9 + 4) = (int)uVar3;
      fn_82CFC050(uVar3,param_2[1],(ulonglong)*(ushort *)(param_2 + 2) << 2);
      puVar10 = *(undefined4 **)(pbVar9 + 4);
      puVar8 = puVar10 + *(ushort *)(pbVar9 + 8);
      if (puVar10 < puVar8) {
        do {
          fn_82CE4040(*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar8);
        fn_82CE3FE8();
        return;
      }
      break;
    case 0x11:
      fn_82CE4040(*(undefined4 *)(pbVar9 + 4));
      iVar5 = fn_82CE5410();
      iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x20);
      if (iVar5 != 0) {
        iVar2 = param_2[2];
        puVar10 = (undefined4 *)(iVar4 + iVar2 & 0xfffffff0);
        uVar12 = puVar10[1];
        uVar13 = puVar10[2];
        uVar14 = puVar10[3];
        puVar8 = (undefined4 *)(iVar4 + iVar5 & 0xfffffff0);
        *puVar8 = *puVar10;
        puVar8[1] = uVar12;
        puVar8[2] = uVar13;
        puVar8[3] = uVar14;
        puVar10 = (undefined4 *)(iVar4 + iVar2 + 0x10 & 0xfffffff0);
        uVar12 = puVar10[1];
        uVar13 = puVar10[2];
        uVar14 = puVar10[3];
        puVar8 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
        *puVar8 = *puVar10;
        puVar8[1] = uVar12;
        puVar8[2] = uVar13;
        puVar8[3] = uVar14;
        *(int *)(pbVar9 + 8) = iVar5;
        fn_82CE3FE8();
        return;
      }
      pbVar9[8] = 0;
      pbVar9[9] = 0;
      pbVar9[10] = 0;
      pbVar9[0xb] = 0;
      fn_82CE3FE8();
      return;
    case 0x15:
    case 0x20:
      break;
    case 0x17:
      uVar1 = *(ushort *)(pbVar9 + 8);
      iVar4 = fn_82CE5410();
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                        (*(int **)(iVar4 + 0x10),(ulonglong)uVar1 << 2);
      *(int *)(pbVar9 + 4) = (int)uVar3;
      fn_82CFC050(uVar3,param_2[1],(ulonglong)*(ushort *)(param_2 + 2) << 2);
      puVar10 = *(undefined4 **)(pbVar9 + 4);
      puVar8 = puVar10 + *(ushort *)(pbVar9 + 8);
      if (puVar10 < puVar8) {
        do {
          fn_82CE4040(*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar8);
        fn_82CE3FE8();
        return;
      }
      break;
    case 0x1e:
      fn_82CE4040(*(undefined4 *)(pbVar9 + 4));
      param_1[1] = param_1[1] + -1;
      *(int *)(param_1[3] + 0x8c) = *(int *)(param_1[3] + 0x8c) + -1;
      fn_82CE3FE8();
      return;
    case 0x1f:
      fn_82CE4118(*(undefined4 *)(pbVar9 + 4));
      param_1[1] = param_1[1] + -1;
      *(int *)(param_1[3] + 0x8c) = *(int *)(param_1[3] + 0x8c) + -1;
      fn_82CE3FE8();
      return;
    }
  }
  fn_82CE3FE8();
  return;
}

