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
extern int fn_82F68B6C();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82195994;
extern unsigned int lbl_821CC160;


void fn_8245FAD0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  fVar6 = lbl_821CC160;
  iVar8 = *(int *)(param_1 + 0x28);
  if (iVar8 == 0) goto code_r0x8245fc04;
  fVar1 = *(float *)(iVar8 + 0x3c);
  piVar10 = (int *)(param_1 + 0x3c);
  fVar2 = *(float *)(iVar8 + 0x40);
  fVar3 = *(float *)(iVar8 + 0x44);
  uVar7 = 0;
  if ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x11c != 0) {
    iVar8 = 0;
    do {
      uVar7 = uVar7 + 1;
      *(float *)(iVar8 + *piVar10 + 0x110) = fVar6;
      *(float *)(iVar8 + *piVar10 + 0x118) = fVar6;
      iVar8 = iVar8 + 0x11c;
    } while (uVar7 < (uint)((*(int *)(param_1 + 0x40) - *piVar10) / 0x11c));
  }
  iVar8 = *piVar10;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
  fVar4 = *(float *)(iVar8 + 0x114);
  if (iVar9 == 0) {
    if ((fVar4 < fVar6) && (*(float *)(iVar8 + 0x230) < fVar6)) goto code_r0x8245fc28;
  }
  else if ((lbl_82195994 <= fVar4) &&
          (((fVar4 <= lbl_82193AF0 && (lbl_82195994 <= *(float *)(iVar8 + 0x230))) &&
           (*(float *)(iVar8 + 0x230) <= lbl_82193AF0)))) {
code_r0x8245fc28:
    *(float *)(iVar8 + 0x110) = fVar6;
    *(float *)(*piVar10 + 0x22c) = fVar6;
    goto code_r0x8245fc04;
  }
  fVar5 = *(float *)(iVar8 + 0x230);
  if ((fVar5 - lbl_82193AF0 <= fVar4) && (fVar4 <= fVar5 + lbl_82193AF0)) {
    *(float *)(iVar8 + 0x110) = fVar3;
    *(float *)(iVar8 + 4) = *(float *)(iVar8 + 4) + fVar3;
    iVar8 = *piVar10;
    *(float *)(iVar8 + 0x22c) = fVar3;
    *(float *)(iVar8 + 0x120) = *(float *)(iVar8 + 0x120) + fVar3;
    goto code_r0x8245fc04;
  }
  if (iVar9 == 0) {
    if ((fVar6 <= fVar4) && ((fVar5 < fVar6 || (fVar4 <= fVar5)))) goto code_r0x8245fc50;
code_r0x8245fbcc:
    iVar9 = 1;
  }
  else {
    if (fVar4 <= fVar5) goto code_r0x8245fbcc;
code_r0x8245fc50:
    iVar9 = 0;
  }
  iVar8 = iVar9 * 0x11c + iVar8;
  *(float *)(iVar8 + 4) = *(float *)(iVar8 + 4) + fVar1;
  *(float *)(iVar8 + 0x110) = fVar1;
  iVar8 = *piVar10 + iVar9 * -0x11c;
  *(float *)(iVar8 + 0x120) = fVar2 + *(float *)(iVar8 + 0x120);
  *(float *)(iVar8 + 0x22c) = fVar2;
code_r0x8245fc04:
  *(undefined4 *)(param_1 + 0x60) = 1;
  fn_82F68B6C(param_1,6);
  return;
}

