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
extern int fn_82ABDD90();
extern int fn_82ABE2E0();
extern int fn_82AC68F0();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B42280();
extern int fn_82B44B88();
extern int fn_82B4B9A8();
extern int fn_82B841E8();
extern int fn_82B8AB60();
extern int fn_82B8AC10();
extern int fn_82B8F328();
extern unsigned int uStack_5c;


void fn_82B426A8(int param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar5;
  uint uVar6;
  char cVar8;
  int iVar7;
  undefined8 uVar4;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined1 auStack_60 [4];
  uint uStack_5c;
  
  iVar5 = fn_82ABDD90(param_1,0x70,0,1);
  puVar12 = (uint *)((int)param_2 + iVar5 + -8);
  uVar3 = *puVar12 & 0x7fff;
  puVar11 = (uint *)(*(int *)(param_1 + 0xc) + uVar3 * 0x28);
  if (((puVar11[1] & 2) == 0) &&
     (((uVar6 = *puVar11 & 7, uVar6 == 3 && ((*(uint *)(param_2[7] + 0x4c) & 0x7ffff) == 0)) ||
      (uVar6 == 1)))) {
    *(uint *)(param_1 + 0x234) = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)
    ;
    fn_82B8AB60(auStack_60,param_1,uVar3,*puVar12 >> 0xf & 0x3fff);
    puVar11 = (uint *)(param_2 + 1);
    while (puVar1 = (uint *)*puVar11, puVar1 != (uint *)0x0) {
      if ((puVar1[4] != 0) && ((*(uint *)(puVar1[4] + 8) & 0x3f80) != 0x3800)) {
        uVar6 = fn_82B4B9A8(param_1,auStack_60);
        puVar9 = (uint *)(puVar1[3] + 4);
        for (puVar2 = (uint *)*puVar9; puVar2 != puVar1; puVar2 = (uint *)puVar2[2]) {
          puVar9 = puVar2 + 2;
        }
        *puVar9 = puVar1[2];
        puVar1[2] = *(uint *)(uVar6 + 4);
        *(uint **)(uVar6 + 4) = puVar1;
        puVar1[3] = uVar6;
        uVar6 = *puVar1;
        uVar10 = uStack_5c >> 2 & 0x3f1b | 0xe4;
        *puVar1 = ((((uVar10 >> (uVar6 >> 10 & 6) & 3) << 2 | uVar10 >> (uVar6 >> 8 & 6) & 3) << 2 |
                   uVar10 >> (uVar6 >> 6 & 6) & 3) << 2 | uVar10 >> (uVar6 >> 4 & 6) & 3) << 5 |
                  uVar6 & 0xffffe01f;
      }
      if ((uint *)*puVar11 == puVar1) {
        puVar11 = puVar1 + 2;
      }
    }
    cVar8 = fn_82ABE2E0(param_2);
    if ((cVar8 != '\0') && (param_2[1] == 0)) {
      fn_82B8AC10(param_1,param_2,0,1);
      return;
    }
  }
  uVar6 = param_2[7];
  iVar5 = *(int *)(uVar6 + 8);
  if ((*(uint *)(uVar6 + 0x30) >> 0x15 & 1) == 0) {
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
      fn_82B42280(param_1,param_2,*(undefined4 *)(iVar5 + 4),0,0);
    }
  }
  else {
    iVar7 = 0;
    iVar14 = 0;
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
      iVar13 = *(int *)(iVar5 + 4);
      for (piVar16 = *(int **)(iVar13 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[2]) {
        iVar15 = *piVar16;
        if ((*(uint *)(iVar15 + 0x30) >> 0x13 & 1) != 0) goto LAB_82b428f4;
      }
      fn_82B42280(param_1,param_2,iVar13,0,0);
      iVar13 = iVar7;
      iVar15 = iVar14;
LAB_82b428f4:
      iVar7 = iVar13;
      iVar14 = iVar15;
    }
    piVar16 = (int *)(*(int *)(iVar14 + 0x74) + 0x10);
    if (*(int *)(*(int *)(iVar14 + 0x74) + 0x10) != 0) {
      for (; piVar16 != (int *)0x0; piVar16 = (int *)piVar16[1]) {
        iVar5 = *piVar16;
        if (((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) == 0) &&
           ((*(uint *)(iVar5 + 0x30) >> 0x14 & 1) != 0)) {
          iVar13 = iVar7;
          iVar15 = iVar14;
          if (((*(uint *)(*(int *)(param_1 + 0xc) + uVar3 * 0x28 + 4) & 0x8000000) != 0) &&
             (iVar13 = 0, uVar3 != *(uint *)(*(int *)(*(int *)(iVar14 + 0x74) + 4) + 0x10))) {
            iVar5 = iVar7;
            iVar15 = 0;
          }
          fn_82B42280(param_1,param_2,iVar5,iVar15,iVar13);
        }
      }
    }
    if (*param_2 == 0) {
      for (iVar5 = *(int *)(uVar6 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
        uVar10 = *(uint *)(iVar5 + 4);
        if ((*(uint *)(*(int *)(uVar10 + 0x28) + 4) & 1) != 0) goto LAB_82b42a00;
      }
      uVar10 = fn_82AC68F0(param_1);
      puVar11 = (uint *)(uVar6 & 0xfffffffe);
      puVar1 = (uint *)(uVar10 & 0xfffffffe);
      *puVar1 = *puVar11;
      *(uint **)(*puVar11 & 0xfffffffe) = puVar1;
      puVar1[1] = (uint)puVar11;
      *puVar11 = (uint)(puVar1 + 1);
      fn_82B8F328(uVar10,uVar6,param_1);
      fn_82B44B88(param_1);
LAB_82b42a00:
      iVar5 = fn_82B841E8(param_1,uVar10,uVar10 + 0x10,0x74,0,1);
      iVar7 = fn_82ABDD90(param_1,0x74,0,1);
      puVar11 = (uint *)(iVar7 + iVar5 + -4);
      uVar6 = *puVar11;
      *puVar11 = uVar3 | uVar6 & 0xffff8000;
      *puVar11 = uVar3 | uVar6 & 0xe0000000 | *puVar12 & 0x1fff8000;
      uVar4 = fn_82AD17B0(param_1,iVar5);
      fn_82AD1978(param_2,uVar4);
    }
  }
  return;
}

