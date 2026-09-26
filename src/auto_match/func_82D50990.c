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
extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_82137144;


undefined4 * fn_82D50990(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_40 [64];
  
  param_1[2] = 0;
  *param_1 = &lbl_82137144;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = 0xd;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  (**(code **)(*param_2 + 0x38))(auStack_40);
  iVar7 = param_1[5];
  iVar4 = param_1[4];
  *(undefined1 *)(param_1 + 0x1b) = auStack_40[0];
  param_1[6] = param_2[6];
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar1 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar1 = (undefined4 *)((uint)(param_2 + 0x10) & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar1 = (undefined4 *)((uint)(param_2 + 0x14) & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  iVar3 = fn_82CE5410();
  iVar6 = (int)((longlong)iVar7 * (longlong)iVar4);
  if ((int)(param_1[0x1a] & 0x3fffffff) < iVar6) {
    lVar5 = ((ulonglong)(uint)param_1[0x1a] & 0x3fffffff) << 1;
    if ((int)lVar5 <= iVar6) {
      lVar5 = (longlong)iVar7 * (longlong)iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0x18,lVar5,4);
  }
  param_1[0x19] = iVar6;
  lVar5 = 0;
  if (0 < (int)param_1[5]) {
    do {
      iVar7 = 0;
      if (0 < (int)param_1[4]) {
        do {
          dVar8 = (double)(**(code **)(*param_2 + 0x34))(param_2,iVar7,lVar5);
          iVar4 = (int)lVar5 * param_1[4] + iVar7;
          iVar7 = iVar7 + 1;
          *(float *)(iVar4 * 4 + param_1[0x18]) = (float)dVar8;
        } while (iVar7 < (int)param_1[4]);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)param_1[5]);
  }
  return param_1;
}

