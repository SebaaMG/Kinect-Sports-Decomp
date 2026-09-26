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
extern int fn_82645110();


void fn_82637550(int param_1,uint param_2,ulonglong param_3,uint param_4,ulonglong param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar4) {
    uVar4 = fn_82645110(param_1);
  }
  if ((*(byte *)(param_1 + 0x2abc) & 0x10) == 0) {
    if (((((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) ||
         ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
          (*(int *)(param_1 + 0x3148) != 0)))) ||
        ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
         (*(int *)(param_1 + 0x314c) != 0)))) ||
       ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
          (*(int *)(param_1 + 0x3150) != 0)) ||
         ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
          (*(int *)(param_1 + 0x3154) != 0)))) ||
        ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
         (*(int *)(param_1 + 0x3158) != 0)))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar10 = 0;
    *(undefined4 *)(uVar4 + 4) = 0xc0006100;
    puVar5 = (uint *)(uVar4 + 8);
    *puVar5 = 0;
    if (*(int *)(param_1 + 0x327c) != 0) {
      uVar4 = 0;
      puVar12 = (uint *)(param_1 + 0x3284);
      piVar11 = (int *)(param_1 + 0x3374);
      do {
        iVar1 = piVar11[-1];
        iVar2 = *piVar11;
        uVar6 = param_2;
        if ((int)param_2 <= (int)puVar12[-1]) {
          uVar6 = puVar12[-1];
        }
        uVar7 = param_3;
        if ((int)param_3 <= (int)*puVar12) {
          uVar7 = (ulonglong)*puVar12;
        }
        uVar8 = puVar12[1];
        if ((int)param_4 < (int)puVar12[1]) {
          uVar8 = param_4;
        }
        uVar9 = (ulonglong)puVar12[2];
        if ((int)param_5 < (int)puVar12[2]) {
          uVar9 = param_5;
        }
        if (((int)uVar8 <= (int)uVar6) || ((int)uVar9 <= (int)uVar7)) {
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
        }
        puVar5[1] = 0xc0006000;
        puVar5[2] = 3 << (uVar4 & 0x3f);
        puVar5[3] = 0xc0032d01;
        puVar5[4] = 0x40080;
        puVar5[5] = iVar2 * -0x10000 & 0x7fff0000U | -iVar1 & 0x7fffU;
        puVar5[6] = (uint)((uVar7 & 0xffffffff) << 0x10) & 0x3fff0000 | uVar6 & 0x3fff;
        puVar5 = puVar5 + 7;
        *puVar5 = (uint)((uVar9 & 0xffffffff) << 0x10) & 0x3fff0000 | uVar8 & 0x3fff;
        *(uint **)(param_1 + 0x30) = puVar5;
        if (*(uint **)(param_1 + 0x38) < puVar5) {
          puVar5 = (uint *)fn_82645110(param_1);
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 2;
        puVar12 = puVar12 + 4;
        uVar4 = uVar4 + 2;
      } while (uVar10 < *(uint *)(param_1 + 0x327c));
    }
    if (((*(byte *)(param_1 + 0x2abf) & 0x20) != 0) && ((*(byte *)(param_1 + 0x2abc) & 0x40) != 0))
    {
      puVar5[1] = 0xc0006000;
      puVar5[2] = 1;
      puVar5[3] = 0xc0022d01;
      puVar5[4] = 0x40081;
      puVar5[5] = (uint)((param_3 & 0xffffffff) << 0x10) & 0x3fff0000 | param_2 & 0x3fff;
      puVar5 = puVar5 + 6;
      *puVar5 = (uint)((param_5 & 0xffffffff) << 0x10) & 0x3fff0000 | param_4 & 0x3fff;
    }
    puVar5[1] = 0xc0006000;
    puVar5[2] = *(uint *)(param_1 + 0x3254);
    puVar5[3] = 0xc0006100;
    puVar5 = puVar5 + 4;
    *puVar5 = *(uint *)(param_1 + 0x3258);
  }
  else {
    *(undefined4 *)(uVar4 + 4) = 0x22080;
    *(undefined4 *)(uVar4 + 8) = 0;
    *(uint *)(uVar4 + 0xc) = (uint)((param_3 & 0xffffffff) << 0x10) & 0x3fff0000 | param_2 & 0x3fff;
    puVar5 = (uint *)(uVar4 + 0x10);
    *puVar5 = (uint)((param_5 & 0xffffffff) << 0x10) & 0x3fff0000 | param_4 & 0x3fff;
  }
  *(uint **)(param_1 + 0x30) = puVar5;
  return;
}

