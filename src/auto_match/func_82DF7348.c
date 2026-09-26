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
extern unsigned int *auStack_b0;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82DB9F80();
extern int fn_82DF3CE0();
extern int fn_82DF6F28();
extern unsigned int iStack_a8;
extern unsigned int lbl_82144818;
extern unsigned int uStack00000024;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;


void fn_82DF7348(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uStack00000024;
  uint auStack_b0 [2];
  int iStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  
  iStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0x80000000;
  uStack00000024 = param_3;
  iVar4 = fn_82CE5410();
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)(uStack_a0 & 0x3fffffff) < *(int *)(param_2 + 0x2c)) {
    if ((uStack_a0 & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,iStack_a8,uStack_a0 & 0x3fffffff,4);
    }
    auStack_b0[0] = *(uint *)(param_2 + 0x2c);
    iStack_a8 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_b0,4);
    uStack_a0 = auStack_b0[0];
  }
  uVar13 = *(uint *)(param_2 + 0x2c);
  uVar7 = (ulonglong)uVar13;
  if (0 < (int)uVar13) {
    puVar8 = (undefined4 *)(*(int *)(param_2 + 0x28) + -4);
    puVar6 = (undefined4 *)(iStack_a8 + -4);
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uStack_a4 = uVar13;
  iVar4 = fn_82CE5410();
  fn_82DB9F80(&iStack_a8,*(undefined4 *)(iVar4 + 0x10),uVar13,0,uVar3,uVar2);
  iVar4 = 0;
  if (0 < (int)uStack_a4) {
    iVar10 = 0;
    iVar5 = iStack_a8;
    do {
      iVar11 = 0;
      if (0 < *(int *)(*(int *)(iVar10 + iVar5) + 0x60)) {
        iVar9 = 0;
        do {
          iVar11 = iVar11 + 1;
          uVar13 = *(uint *)(*(int *)(*(int *)(iVar10 + iVar5) + 0x5c) + iVar9);
          iVar9 = iVar9 + 4;
          if (iVar11 == *(int *)(*(int *)(iVar10 + iVar5) + 0x60)) {
            uVar12 = *(int *)(*(int *)(iVar10 + iVar5) + 0x58) + uVar13;
          }
          else {
            uVar12 = uVar13 + 0x200;
          }
          for (; uVar13 < uVar12; uVar13 = *(byte *)(uVar13 + 3) + uVar13) {
            iVar5 = fn_82CE5410();
            puVar6 = (undefined4 *)
                     (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x120);
            *(undefined2 *)(puVar6 + 1) = 0x120;
            *(undefined2 *)((int)puVar6 + 6) = 1;
            *puVar6 = &lbl_82144818;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0xffffffff;
            puVar6[5] = 0xffffffff;
            lVar14 = 7;
            *(undefined1 *)(puVar6 + 6) = 0;
            puVar8 = puVar6 + 0xc;
            *(undefined2 *)(puVar6 + 8) = 0x16;
            *(undefined2 *)(puVar6 + 0xc) = 0;
            *(undefined2 *)((int)puVar6 + 0x32) = 3;
            do {
              puVar8 = puVar8 + 1;
              *puVar8 = 0;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            puVar6[0x14] = 0;
            puVar6[0x15] = 0;
            puVar6[0x16] = 0x80000000;
            puVar6[0x17] = 0;
            puVar6[0x18] = 0;
            puVar6[0x19] = 0x80000000;
            puVar6[0x1a] = 0;
            puVar6[0x1b] = 0;
            puVar6[0x1c] = 0x80000000;
            puVar6[0x3d] = 0;
            puVar6[0x3e] = 0;
            puVar6[0x3f] = 0x80000000;
            puVar6[0x40] = 0;
            puVar6[0x41] = 0;
            puVar6[0x42] = 0x80000000;
            puVar6[0x43] = 0x103;
            puVar6[0x44] = 1;
            iVar5 = fn_82DF6F28(param_1,uVar13,*(undefined4 *)(param_2 + 0x78),puVar6);
            if (iVar5 == 0) {
              fn_82DF3CE0(uStack00000024,puVar6);
            }
            fn_82CE4118(puVar6);
            iVar5 = iStack_a8;
          }
        } while (iVar11 < *(int *)(*(int *)(iVar10 + iVar5) + 0x60));
      }
      iVar4 = iVar4 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar4 < (int)uStack_a4);
  }
  iVar4 = fn_82CE5410();
  uStack_a4 = 0;
  if ((uStack_a0 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_a8,uStack_a0 & 0x3fffffff,4);
  }
  return;
}

