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
extern float fRam831cd458;
extern float fRam831cd45c;
extern int fn_822AA770();
extern int fn_822AA7E0();
extern int fn_822CF300();
extern int fn_822CFA38();
extern int fn_822D14B8();
extern int fn_822E2D18();
extern int fn_822E2E30();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DCD58;
extern unsigned int lbl_83265A28;


void fn_822E1A58(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar9;
  
  fVar5 = fRam831cd458;
  fVar4 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar8 = lbl_83265A28 & 0x7fffff;
  fVar3 = fRam831cd45c - fRam831cd458;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(float *)(param_1 + 0x2c) = fVar3 * ((float)(uVar8 | 0x3f800000) - fVar4) + fVar5;
  fn_822E2D18(param_1,1);
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x118);
  *(undefined1 *)(iVar6 + 0x1d4) = 0;
  *(undefined1 *)(iVar6 + 0x254) = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x2e0);
  if ((0x17 < iVar6) || (*(int *)(&lbl_831DCD58 + iVar6 * 4) != 0)) {
    iVar6 = fn_822CFA38(*(int *)(param_1 + 0x14),6);
    if (iVar6 == 0) {
      uVar7 = fn_822CFA38(*(undefined4 *)(param_1 + 0x14),5);
      iVar6 = ((uint)LZCOUNT(uVar7) >> 5) + 1;
    }
    else {
      iVar6 = 0;
    }
  }
  *(int *)(param_1 + 0x30) = iVar6;
  if (iVar6 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x1c);
    puVar2 = (undefined4 *)**(int **)(*(int *)(param_1 + 0x10) + 8);
    if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10) == 0) {
      uVar7 = puVar2[1];
    }
    else {
      uVar7 = *puVar2;
    }
    iVar6 = fn_822AA7E0(uVar7);
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uVar8 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
        goto LAB_822e1bbc;
      }
      goto LAB_822e1bb0;
    }
    iVar6 = fn_822AA770(uVar7);
    if (iVar6 == 0) goto LAB_822e1bb0;
  }
  else {
LAB_822e1bb0:
    iVar6 = fn_822D14B8(param_1);
  }
  uVar8 = *(uint *)(iVar6 + 0x28);
LAB_822e1bbc:
  *(uint *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = 1;
  dVar9 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x54) = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x270) = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x24) == 0) {
    fn_822CF300(*(int *)(param_1 + 0x14),5);
  }
  fn_822E2E30(param_1 + 0x58);
  *(float *)(param_1 + 0x40) = (float)dVar9;
  return;
}

