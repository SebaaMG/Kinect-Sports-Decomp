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
extern unsigned int fStack_38;
extern int fn_83029A58();
extern int fn_83029E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_40;


undefined8 fn_83029EE0(int param_1,uint param_2)

{
  float fVar1;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  float *pfVar10;
  undefined8 uStack_40;
  float fStack_38;
  float fVar2;
  float fVar3;
  
  piVar4 = *(int **)(param_1 + 0x10);
  uVar8 = 2;
  if (piVar4 != (int *)0x0) {
    uVar8 = 0x25;
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (0 < piVar4[1]) {
      *(undefined2 *)(param_1 + 0x18) = 0;
      pfVar10 = (float *)(param_1 + 0x4c);
      puVar5 = (undefined4 *)*piVar4;
      *(undefined2 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_1 + 0x4c) = *puVar5;
      *(undefined4 *)(param_1 + 0x50) = puVar5[1];
      *(undefined4 *)(param_1 + 0x54) = puVar5[2];
      uVar9 = (puVar5[3] + 0x14) / 0x15;
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      *(uint *)(param_1 + 0x3c) = uVar9;
      uVar7 = lbl_821AAD20;
      if (piVar4[1] < 2) {
        *(undefined4 *)(param_1 + 0x58) = lbl_821AAD20;
        *(undefined4 *)(param_1 + 0x5c) = uVar7;
        *(undefined4 *)(param_1 + 0x60) = uVar7;
      }
      else {
        iVar6 = *piVar4;
        uStack_40 = *(undefined8 *)(iVar6 + 0x10);
        fStack_38 = *(float *)(iVar6 + 0x18);
        if ((((*pfVar10 == *(float *)(iVar6 + 0x10)) &&
             (*(float *)(param_1 + 0x50) == *(float *)(iVar6 + 0x14))) &&
            (*(float *)(param_1 + 0x54) == fStack_38)) && (piVar4[1] < 3)) {
          fn_83029A58(param_1,pfVar10);
          fVar1 = *(float *)(param_1 + 0x54);
          fVar2 = *pfVar10;
          fVar3 = *(float *)(param_1 + 0x50);
        }
        else {
          fn_83029A58(param_1,pfVar10);
          fn_83029A58(param_1,&uStack_40);
          fVar1 = fStack_38;
          fVar2 = (((U64)(uStack_40) >> 0) & 0xFFFFFFFF);
          fVar3 = (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
        }
        *(float *)(param_1 + 0x58) = fVar2 - *pfVar10;
        *(float *)(param_1 + 0x5c) = fVar3 - *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x60) = fVar1 - *(float *)(param_1 + 0x54);
      }
      fn_83029E20(param_1);
      uVar8 = 1;
      *(uint *)(param_1 + 0x34) = param_2;
      *(undefined4 *)(param_1 + 4) = 1;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x3c) + param_2;
      fVar1 = lbl_82002AE0 / (float)*(uint *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x40) = fVar1;
      *(float *)(param_1 + 0x44) = -((float)param_2 * fVar1);
    }
  }
  return uVar8;
}

