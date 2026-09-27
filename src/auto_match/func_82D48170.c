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
extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern float lbl_8200DD28;
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821354F4;
extern unsigned int uStack_58;


undefined4 * fn_82D48170(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar7;
  longlong lVar6;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_821354F4;
  param_1[3] = 0xd;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  (**(code **)(*param_2 + 0x38))(auStack_60);
  iVar8 = param_1[5];
  iVar4 = param_1[4];
  *(undefined1 *)(param_1 + 0x1b) = auStack_60[0];
  param_1[6] = param_2[6];
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  puVar1 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  puVar1 = (undefined4 *)((uint)(param_2 + 0x10) & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  puVar1 = (undefined4 *)((uint)(param_2 + 0x14) & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  iVar3 = fn_82CE5410();
  iVar7 = (int)((longlong)iVar8 * (longlong)iVar4);
  if ((int)(param_1[0x1a] & 0x3fffffff) < iVar7) {
    lVar5 = ((ulonglong)(uint)param_1[0x1a] & 0x3fffffff) << 1;
    if ((int)lVar5 <= iVar7) {
      lVar5 = (longlong)iVar8 * (longlong)iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0x18,lVar5,2);
  }
  param_1[0x19] = iVar7;
  lVar5 = 0;
  dVar11 = (double)lbl_82134508;
  dVar9 = (double)lbl_82134504;
  if (0 < (int)param_1[5]) {
    do {
      lVar6 = 0;
      dVar10 = dVar9;
      if (0 < (int)param_1[4]) {
        do {
          dVar9 = (double)(**(code **)(*param_2 + 0x34))(param_2,lVar6,lVar5);
          lVar6 = lVar6 + 1;
          if ((float)(dVar9 - dVar11) < 0.0) {
            dVar11 = dVar9;
          }
          if ((float)(dVar9 - dVar10) < 0.0) {
            dVar9 = dVar10;
          }
          dVar10 = dVar9;
        } while ((int)lVar6 < (int)param_1[4]);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)param_1[5]);
  }
  param_1[0x1c] = (float)dVar11;
  lVar5 = 0;
  param_1[0x1d] = (float)(dVar9 - dVar11) * lbl_8200DD28;
  if (0 < (int)param_1[5]) {
    do {
      iVar8 = 0;
      if (0 < (int)param_1[4]) {
        do {
          dVar9 = (double)(**(code **)(*param_2 + 0x34))(param_2,iVar8,lVar5);
          iVar4 = (int)lVar5 * param_1[4] + iVar8;
          iVar8 = iVar8 + 1;
          uStack_58 = (longlong)
                      ((float)(dVar9 - (double)(float)param_1[0x1c]) / (float)param_1[0x1d]);
          *(undefined2 *)(iVar4 * 2 + param_1[0x18]) = (((U64)(uStack_58) >> 48) & 0xFFFF);
        } while (iVar8 < (int)param_1[4]);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)param_1[5]);
  }
  return param_1;
}

