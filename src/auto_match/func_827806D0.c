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
extern int fn_8277BCA0();
extern int fn_8277CB68();
extern int fn_8277D350();
extern int fn_8277ECE0();
extern unsigned int lbl_82015510;
extern unsigned int lbl_82015514;
extern unsigned int lbl_821AAD20;


void fn_827806D0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar15;
  ulonglong uVar14;
  int *piVar16;
  bool bVar17;
  
  puVar15 = (uint *)(param_1 + 0x7c);
  fn_8277D350(puVar15,0,*(undefined4 *)(param_1 + 0x7c),param_1 + 0x30);
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_82015510;
  fVar1 = *(float *)(param_1 + 0xe0);
  if (fVar1 < lbl_821AAD20) {
    fVar1 = -fVar1;
  }
  fVar2 = *(float *)(param_1 + 0xe8);
  if (fVar2 < lbl_821AAD20) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0xe4);
  bVar17 = fVar2 < lbl_821AAD20;
  *(float *)(param_1 + 0xf0) = fVar1 * lbl_82015510;
  fVar1 = lbl_82015514;
  if (bVar17) {
    fVar2 = -fVar2;
  }
  fVar3 = *(float *)(param_1 + 0xec);
  if (fVar3 < fVar9) {
    fVar3 = -fVar3;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  uVar10 = 0;
  *(float *)(param_1 + 0xf4) = fVar3 * fVar8;
  uVar12 = 0;
  if (*puVar15 != 0) {
    do {
      uVar5 = *(uint *)(*(int *)((uVar12 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x88)) +
                       (uVar12 & 0x3ff) * 4);
      iVar11 = *(int *)((uVar5 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) + (uVar5 & 0x3ff) * 8;
      if (*(float *)(iVar11 + 4) - fVar1 <= *(float *)(param_1 + 0xf4)) {
        *(float *)(iVar11 + 4) = fVar1;
      }
      else {
        uVar6 = uVar10 >> 8;
        uVar7 = uVar10 & 0x3ff;
        uVar10 = uVar10 + 1;
        *(uint *)(*(int *)((uVar6 & 0xfffffc) + *(int *)(param_1 + 0x88)) + uVar7 * 4) = uVar5;
        fVar1 = *(float *)(iVar11 + 4);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *puVar15);
  }
  if (uVar10 < *puVar15) {
    *puVar15 = uVar10;
  }
  uVar14 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      fn_8277ECE0(param_1,(ulonglong)
                            *(uint *)(((uint)((uVar14 & 0xffffffff) >> 4) & 0xffffffc) +
                                     *(int *)(param_1 + 0x4c)) + (uVar14 & 0x3f) * 0x10);
      uVar14 = uVar14 + 1;
    } while ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x40));
  }
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  piVar16 = (int *)(param_1 + 0x70);
  fn_8277CB68(piVar16,uVar4,0x20);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar11 = 0;
    do {
      uVar12 = uVar10 >> 4;
      uVar5 = uVar10 & 0x3f;
      uVar10 = uVar10 + 1;
      puVar13 = (undefined4 *)
                (*(int *)((uVar12 & 0xffffffc) + *(int *)(param_1 + 0x6c)) + uVar5 * 0x38);
      puVar13[1] = *(undefined4 *)
                    (*(int *)((*(uint *)*puVar13 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                     (*(uint *)*puVar13 & 0x3ff) * 8 + 4);
      *(undefined4 **)(iVar11 + *piVar16) = puVar13;
      iVar11 = iVar11 + 4;
    } while (uVar10 < *(uint *)(param_1 + 0x60));
  }
  fn_8277BCA0(piVar16,0,*(undefined4 *)(param_1 + 0x74),0xffffffff8277ba98);
  return;
}

