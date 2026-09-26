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
extern int fn_82DAD448();
extern int fn_82DAF190();
extern unsigned int iStack_40;
extern unsigned int iStack_44c;
extern unsigned int iStack_450;


void fn_82DAC0D0(int param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  uint **ppuVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_450;
  int iStack_44c;
  uint *apuStack_444 [257];
  int iStack_40;
  
  uVar12 = *(short *)(param_1 + 0x12) - 1;
  if (*(short *)(param_1 + 0x12) == 0) {
    iVar11 = *(char *)(param_2 + 0x10) + param_2;
    iVar10 = *(char *)(param_3 + 0x10) + param_3;
    uVar12 = *(ushort *)(iVar10 + 0xaa);
    if (*(ushort *)(iVar11 + 0xaa) < *(ushort *)(iVar10 + 0xaa)) {
      uVar12 = *(ushort *)(iVar11 + 0xaa);
    }
    puVar7 = param_5 + 4;
    if (puVar7 < (uint *)*param_5) {
      iVar2 = *(int *)(param_1 + 0x20);
      ppuVar6 = apuStack_444;
      lVar8 = (ulonglong)(uint)((int)*param_5 + (-1 - (int)puVar7)) / 0x30 + 1;
      do {
        bVar1 = *(byte *)(puVar7[8] + iVar2);
        if (bVar1 == 0xff) {
          puVar9 = (uint *)0x0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x3c);
          puVar9 = (uint *)((uint)*(byte *)(iVar3 + 10) * (int)(short)(ushort)bVar1 +
                            (uint)*(ushort *)(iVar3 + 6) * 0x20 + iVar3 + 0x30);
        }
        ppuVar6 = ppuVar6 + 1;
        *ppuVar6 = puVar9;
        puVar7 = puVar7 + 0xc;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iStack_450 = param_2;
    iStack_44c = param_3;
    apuStack_444[0] = param_5;
    iStack_40 = param_1;
    fn_82DAF190(*(undefined4 *)(param_1 + 0xc),&iStack_450);
    if (*(short *)(iVar11 + 0x204) != 0) {
      fn_82DAD448(iVar11,&iStack_450);
    }
    if (*(short *)(iVar10 + 0x204) != 0) {
      fn_82DAD448(iVar10,&iStack_450);
    }
    (**(code **)(*(int *)param_5[1] + 0x14))((int *)param_5[1],*(undefined4 *)(param_1 + 0x38),8);
  }
  puVar7 = param_5 + 4;
  *(ushort *)(param_1 + 0x12) = uVar12;
  if (puVar7 < (uint *)*param_5) {
    lVar8 = (ulonglong)(uint)((int)*param_5 + (-1 - (int)puVar7)) / 0x30 + 1;
    do {
      puVar4 = (undefined4 *)(in_r0 + (int)puVar7 & 0xfffffff0);
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      iVar10 = (uint)*(byte *)(puVar7[8] + *(int *)(param_1 + 0x20)) * 0x20 +
               *(int *)(param_1 + 0x3c);
      puVar5 = (undefined4 *)(in_r0 + iVar10 + 0x30 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar13;
      puVar5[2] = uVar14;
      puVar5[3] = uVar15;
      puVar4 = (undefined4 *)((uint)(puVar7 + 4) & 0xfffffff0);
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      puVar7 = puVar7 + 0xc;
      puVar5 = (undefined4 *)(iVar10 + 0x40U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar13;
      puVar5[2] = uVar14;
      puVar5[3] = uVar15;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

