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
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA0FD8();
extern int fn_82BC0618();
extern int fn_82BC06D0();
extern int fn_82BC0A30();
extern int fn_82BC2958();
extern int fn_82BC3B60();
extern int fn_82BC5580();
extern int fn_82BC56D0();
extern int fn_82BC5AC0();


void fn_82BB3B08(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar9;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_b0 [16];
  int *piStack_a0;
  
  puVar4 = (uint *)fn_82BA0FD8(0x400,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac));
  puVar5 = (uint *)fn_82BA0FD8(0x400,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac));
  fn_82BC06D0(auStack_b0,*(undefined4 *)(*(int *)(param_1 + 0xac) + 4));
  piVar3 = piStack_a0;
  while (piVar3 != (int *)0x0) {
    piStack_a0 = piVar3;
    cVar9 = (**(code **)(*piVar3 + 0x10))();
    if ((cVar9 != '\0') &&
       ((*(uint *)((((uint)piVar3[0xc] >> 5) + 2) * 4 + *(int *)(param_1 + 0xb0)) >>
         (piVar3[0xc] & 0x1fU) & 1) != 0)) {
      uVar12 = 0;
      if (*puVar5 != 0) {
        puVar11 = puVar5 + 1;
        do {
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = 0;
        } while (uVar12 < *puVar5);
      }
      uVar12 = 0;
      if (*puVar4 != 0) {
        puVar11 = puVar4 + 1;
        do {
          puVar11 = puVar11 + 1;
          *puVar11 = 0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *puVar4);
      }
      iVar10 = 0;
      for (uVar12 = 1; uVar12 <= *(uint *)(piVar3[10] + 4); uVar12 = uVar12 + 1) {
        iVar13 = *(int *)(*(int *)(piVar3[10] + 8) + iVar10);
        if ((*(uint *)(iVar13 + 0xe4) & 1) != 0) {
          uVar15 = *(uint *)(*(int *)(iVar13 + 0x3b4) + 0x30);
          iVar13 = (uVar15 >> 5) + 2;
          puVar4[iVar13] = 1 << (uVar15 & 0x1f) | puVar4[iVar13];
        }
        iVar10 = iVar10 + 4;
      }
      iVar10 = 0;
      for (uVar12 = 1; uVar12 <= *(uint *)(piVar3[10] + 4); uVar12 = uVar12 + 1) {
        iVar13 = *(int *)(*(int *)(piVar3[10] + 8) + iVar10);
        if ((*(uint *)(iVar13 + 0xe4) & 1) != 0) {
          iVar13 = *(int *)(iVar13 + 0x3b4);
          iVar16 = 0;
          for (uVar15 = 1; iVar1 = *(int *)(iVar13 + 0x5c), uVar15 <= *(uint *)(iVar1 + 4);
              uVar15 = uVar15 + 1) {
            iVar1 = *(int *)(*(int *)(iVar1 + 8) + iVar16);
            uVar2 = *(uint *)(iVar1 + 0x30) & 0x1f;
            iVar14 = (*(uint *)(iVar1 + 0x30) >> 5) + 2;
            if ((puVar5[iVar14] >> uVar2 & 1) == 0) {
              uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
              puVar6 = (undefined4 *)fn_82B7BD28(uVar8,0x3c4);
              *puVar6 = uVar8;
              if (puVar6 + 1 == (undefined4 *)0x0) {
                iVar7 = 0;
              }
              else {
                iVar7 = fn_82BC3B60(puVar6 + 1,*(undefined4 *)(param_1 + 0xc));
              }
              uVar8 = fn_82BC5AC0(iVar1);
              *(undefined4 *)(iVar7 + 0x14) = uVar8;
              fn_82BC2958(iVar7,0,piVar3);
              if ((puVar4[iVar14] >> uVar2 & 1) == 0) {
                puVar4[iVar14] = 1 << uVar2 | puVar4[iVar14];
                fn_82BC0A30(piVar3,iVar7);
              }
              fn_82BC5580(iVar1,iVar7);
              cVar9 = fn_82BC56D0(iVar1);
              if (cVar9 == '\0') {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfee8,
                                  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\ssa.cpp"
                                  ,0x205);
              }
              puVar5[iVar14] = 1 << uVar2 | puVar5[iVar14];
            }
            iVar16 = iVar16 + 4;
          }
        }
        iVar10 = iVar10 + 4;
      }
    }
    fn_82BC0618(auStack_b0);
    piVar3 = piStack_a0;
  }
  if (puVar4 != (uint *)0x0) {
    fn_82B7BEB0(puVar4[-1],puVar4 + -1);
  }
  if (puVar5 != (uint *)0x0) {
    fn_82B7BEB0(puVar5[-1],puVar5 + -1);
  }
  return;
}

