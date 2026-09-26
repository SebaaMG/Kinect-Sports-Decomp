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
extern int fn_829533F0();
extern int fn_82959138();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8200533C;


undefined8 fn_8295A108(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar6;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  int *piVar14;
  uint uVar15;
  
  puVar7 = *(uint **)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x160) = 0;
  uVar2 = *puVar7;
  if ((uVar2 & 0xfff00000) != 0x20400000) {
    return 1;
  }
  bVar13 = true;
  bVar5 = true;
  if ((uVar2 & 0xfffff) != 0) {
    iVar10 = 0;
    iVar12 = (uVar2 & 0xfffff) << 2;
    uVar15 = uVar2 & 0xfffff;
    do {
      piVar14 = (int *)(iVar10 + puVar7[2]);
      iVar10 = iVar10 + 4;
      piVar11 = (int *)(iVar12 + puVar7[2]);
      iVar12 = iVar12 + 4;
      bVar13 = (bool)(*piVar11 == *piVar14 & bVar13);
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    fVar1 = lbl_8200533C;
    bVar5 = bVar13;
    puVar8 = (uint *)0x0;
    if (!bVar13) goto LAB_8295a1c0;
  }
  bVar13 = bVar5;
  puVar7 = (uint *)fn_829533F0(param_1,uVar2 & 0xfffff | 0x20400000,puVar7,0,2,1);
  fVar1 = lbl_8200133C;
  puVar8 = puVar7;
  if (puVar7 == (uint *)0x0) {
    return 1;
  }
LAB_8295a1c0:
  uVar2 = *puVar7;
  piVar14 = (int *)puVar7[2];
  uVar15 = uVar2 & 0xfffff;
  iVar12 = *(int *)(param_1 + 0x14);
  uVar9 = uVar2 & 0xfffff;
  iVar10 = uVar9 * 4;
  piVar11 = piVar14 + uVar9;
  if (((*(uint *)(*(int *)(*(int *)(*(int *)(piVar14[uVar9] * 4 + iVar12) + 4) * 4 +
                          *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0) &&
     (iVar3 = *piVar14, piVar11 = piVar14, piVar14 = piVar14 + uVar9,
     (*(uint *)(*(int *)(*(int *)(*(int *)(iVar3 * 4 + iVar12) + 4) * 4 + *(int *)(param_1 + 0x10))
               + 4) & 0x100) == 0)) {
    return 1;
  }
  uVar9 = 0;
  if ((uVar2 & 0xfffff) != 0) {
    do {
      if (*(double *)(*(int *)(*piVar11 * 4 + iVar12) + 0x20) != (double)fVar1) {
        return 1;
      }
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar9 < uVar15);
  }
  if (bVar13) {
    piVar14 = *(int **)(*(int *)(param_1 + 0x104) + 8);
  }
  else {
    puVar8 = (uint *)fn_829533F0(param_1,**(uint **)(param_1 + 0x104) & 0xfffff | 0x20400000,
                                   *(uint **)(param_1 + 0x104),0,2,2);
    if (puVar8 == (uint *)0x0) {
      return 1;
    }
    bVar13 = true;
    if ((uVar2 & 0xfffff) != 0) {
      iVar12 = 0;
      do {
        piVar11 = (int *)(iVar12 + puVar8[2]);
        iVar12 = iVar12 + 4;
        piVar4 = (int *)(iVar10 + puVar8[2]);
        iVar10 = iVar10 + 4;
        bVar13 = (bool)(*piVar4 == *piVar11 & bVar13);
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      if (!bVar13) {
        return 1;
      }
    }
  }
  uVar6 = fn_82959138(param_1,0x60000,0,piVar14,0x60000,puVar8,0);
  if ((int)uVar6 == 0) {
    *puVar8 = 0;
    return uVar6;
  }
  return uVar6;
}

