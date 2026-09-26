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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_80;
extern int fn_82DD38B0();
extern int fn_8307F910();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82139D30;
extern V16 vectorSubtractFloatingPoint();


void fn_82DD4B00(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  double dVar12;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 uVar16;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  float fStack_80;
  
  if ((param_1[1] == 3) && (iVar9 = 0, 0 < *param_1)) {
    piVar7 = param_1 + 8;
    do {
      iVar4 = fn_82DD38B0(param_1,piVar7);
      if (iVar4 == 0xe) {
        puVar2 = (undefined4 *)((uint)(param_1 + (iVar9 + 2) * 4) & 0xfffffff0);
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        puVar3 = (undefined4 *)((int)in_r0 + (int)(param_1 + 8) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        *param_1 = 1;
        return;
      }
      iVar9 = iVar9 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar9 < *param_1);
  }
  if (*param_1 == 3) {
    iVar9 = 0;
    if (0 < param_1[1]) {
      piVar7 = param_1 + 0x28;
      do {
        iVar4 = fn_82DD38B0(param_1,piVar7);
        if (iVar4 == 0xe) {
          puVar2 = (undefined4 *)((uint)(param_1 + (iVar9 + 0xe) * 4) & 0xfffffff0);
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          puVar3 = (undefined4 *)((uint)(param_1 + 0x38) & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar13;
          puVar3[2] = uVar14;
          puVar3[3] = uVar15;
          puVar2 = (undefined4 *)((uint)(param_1 + (iVar9 + 10) * 4) & 0xfffffff0);
          uVar13 = *puVar2;
          uVar14 = puVar2[1];
          uVar15 = puVar2[2];
          uVar16 = puVar2[3];
          param_1[1] = 1;
          puVar2 = (undefined4 *)((int)in_r0 + (int)(param_1 + 0x28) & 0xfffffff0);
          *puVar2 = uVar13;
          puVar2[1] = uVar14;
          puVar2[2] = uVar15;
          puVar2[3] = uVar16;
          return;
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar9 < param_1[1]);
    }
    iVar9 = 3;
    if (*param_1 == 3) goto LAB_82dd4bd0;
  }
  iVar9 = 1;
LAB_82dd4bd0:
  iVar4 = 3;
  if (param_1[1] != 3) {
    iVar4 = 1;
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar8 = 0;
  dVar12 = (double)lbl_82134508;
  if (iVar9 != 0) {
    piVar7 = param_1 + 8;
    do {
      iVar10 = 0;
      if (iVar4 != 0) {
        piVar11 = param_1 + 0x28;
        do {
          vectorSubtractFloatingPoint(in_vs44,in_vs32);
          vectorSubtractFloatingPoint(in_vs42,in_vs45);
          puVar2 = (undefined4 *)((uint)(auStack_b0 + (int)in_r0) & 0xfffffff0);
          *puVar2 = in_register_000100b0;
          puVar2[1] = in_register_000100b4;
          puVar2[2] = in_register_000100b8;
          puVar2[3] = in_vr11;
          puVar2 = (undefined4 *)((uint)(auStack_c0 + (int)in_r0) & 0xfffffff0);
          *puVar2 = in_register_00010090;
          puVar2[1] = in_register_00010094;
          puVar2[2] = in_register_00010098;
          puVar2[3] = in_vr9;
          fn_8307F910(piVar7,auStack_b0,piVar11,auStack_c0,auStack_a0);
          if ((double)fStack_80 < dVar12) {
            dVar12 = (double)fStack_80;
            iVar6 = iVar8;
            iVar5 = iVar10;
          }
          iVar10 = iVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (iVar10 < iVar4);
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar8 < iVar9);
  }
  if (iVar9 == 3) {
    iVar9 = *param_1;
    *param_1 = iVar9 + -1;
    puVar2 = (undefined4 *)((uint)(param_1 + (iVar9 + 1) * 4) & 0xfffffff0);
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(param_1 + ((char)(&lbl_82139D30)[iVar6] + 2) * 4) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
  }
  if (iVar4 == 3) {
    iVar9 = param_1[1];
    param_1[1] = iVar9 + -1;
    puVar2 = (undefined4 *)((uint)(param_1 + (iVar9 + 0xd) * 4) & 0xfffffff0);
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    cVar1 = (&lbl_82139D30)[iVar5];
    puVar3 = (undefined4 *)((uint)(param_1 + (cVar1 + 0xe) * 4) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
    puVar2 = (undefined4 *)((uint)(param_1 + (param_1[1] + 10) * 4) & 0xfffffff0);
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(param_1 + (cVar1 + 10) * 4) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
  }
  return;
}

