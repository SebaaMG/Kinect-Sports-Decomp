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
extern int fn_8251E4D0();
extern int fn_825A8140();
extern int fn_82A1DD38();
extern unsigned int lbl_821956C0;
extern unsigned int lbl_821CC160;


void fn_825A7290(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar7;
  uint uVar8;
  ulonglong uVar6;
  longlong lVar9;
  ushort *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  fn_825A8140(param_1 + 0x600);
  if (*(int *)(param_1 + 0x610) == 0) {
    return;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x610) + 0x1c);
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x48);
  }
  if (iVar7 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x640) = 0;
  *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_1 + 0x630);
  dVar12 = (double)lbl_821956C0;
  iVar7 = *(int *)(*(int *)(param_1 + 0x610) + 0x1c);
  if (iVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(iVar7 + 0xa0);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x610) + 0x1c);
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar7 + 0xa4);
  }
  if (((uVar5 != 0) && (uVar8 != 0)) && (uVar5 < uVar8)) {
    puVar10 = (ushort *)(uVar5 + 0x48);
    lVar9 = (ulonglong)((uVar8 - uVar5) - 1) / 0x560 + 1;
    dVar13 = dVar12;
    do {
      puVar4 = (ushort *)fn_8251E4D0(param_1 + 0x630);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = puVar10[-0x23];
        uVar1 = *puVar10;
        puVar4[1] = uVar1;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar10 + 0x10c);
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar10 + 0x118);
        dVar11 = (double)(*(float *)(puVar10 + 0x118) - *(float *)(puVar10 + 0x12e));
        *(float *)(puVar4 + 6) = *(float *)(puVar10 + 0x118) - *(float *)(puVar10 + 0x12e);
        puVar2 = (undefined4 *)((uint)(puVar10 + 300) & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (undefined4 *)((uint)(puVar4 + 8) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        if ((uVar1 & 1) != 0) {
          if ((float)(dVar13 - dVar11) < 0.0) {
            dVar11 = dVar13;
          }
          dVar13 = (double)(float)dVar11;
        }
      }
      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + 0x2b0;
    } while (lVar9 != 0);
    if (dVar13 != dVar12) goto LAB_825a73e8;
  }
  dVar13 = (double)lbl_821CC160;
LAB_825a73e8:
  *(float *)(param_1 + 0x62c) = (float)dVar13;
  uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x610) + 0x1c);
  lVar9 = uVar6 + 0x160;
  if (uVar6 == 0) {
    lVar9 = 0;
  }
  fn_82A1DD38(param_1 + 0x644,lVar9,0x100);
  return;
}

