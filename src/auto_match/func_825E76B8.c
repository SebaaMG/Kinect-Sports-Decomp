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
extern unsigned int *auStack_84;
extern unsigned int fStack_90;
extern int fn_82522D98();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uRamfffffffc;


undefined8 fn_825E76B8(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int aiStack_c8 [14];
  float fStack_90;
  undefined4 auStack_84 [33];
  
  uVar6 = (ulonglong)*param_1;
  puVar4 = param_1 + 2;
  puVar5 = puVar4;
  if (-1 < (int)*param_1) {
    lVar7 = (uVar6 + 0x12 & 0x3fffffff) << 2;
    do {
      iVar10 = (int)lVar7;
      if (*(uint **)(iVar10 + (int)puVar5) != puVar4) {
        puVar2 = *(uint **)(iVar10 + (int)puVar5);
        do {
          if ((int)*param_2 <= (int)*puVar2) break;
          puVar8 = (undefined4 *)(iVar10 + (int)puVar2);
          puVar5 = puVar2;
          puVar2 = (uint *)*puVar8;
        } while ((uint *)*puVar8 != puVar4);
      }
      *(uint **)((int)aiStack_c8 + iVar10) = puVar5;
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + -4;
    } while (-1 < (longlong)uVar6);
  }
  puVar5 = (uint *)puVar5[0x12];
  if ((puVar5 == puVar4) || (*puVar5 != *param_2)) {
    uVar11 = 0;
    while( true ) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_90 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      if ((lbl_8218E8E8 <= fStack_90 - lbl_821CA460) || (0xf < (int)uVar11)) break;
      uVar11 = uVar11 + 1;
    }
    if ((int)*param_1 < (int)uVar11) {
      iVar10 = *param_1 + 1;
      if (iVar10 <= (int)uVar11) {
        iVar9 = (uVar11 - iVar10) + 1;
        puVar8 = auStack_84 + iVar10;
        do {
          puVar8 = puVar8 + 1;
          *puVar8 = puVar4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *param_1 = uVar11;
    }
    uVar1 = param_1[0x25];
    if (*(int *)(uVar1 + 0xc) < 1) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(uVar1 + 0xc) + -1;
      *(int *)(uVar1 + 0xc) = iVar10;
      iVar10 = *(int *)(iVar10 * 4 + *(int *)(uVar1 + 0x10));
    }
    if (iVar10 != -4) {
      *(undefined4 *)(iVar10 + 0x40) = 4;
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0x10);
    }
    uRamfffffffc = *param_2;
    if (-1 < (int)uVar11) {
      iVar10 = uVar11 + 1;
      iVar9 = 0x48;
      do {
        puVar8 = (undefined4 *)(*(int *)((int)aiStack_c8 + iVar9) + iVar9);
        *(undefined4 *)(iVar9 + -4) = *puVar8;
        iVar9 = iVar9 + 4;
        *puVar8 = 0xfffffffc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    uVar3 = 1;
    param_1[1] = param_1[1] + 1;
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = puVar5 + 1;
    uVar3 = 0;
  }
  *param_3 = puVar5;
  return uVar3;
}

