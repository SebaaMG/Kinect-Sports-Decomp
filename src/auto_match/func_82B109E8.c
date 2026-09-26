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
extern int fn_82AA66A8();
extern int fn_82AC9F80();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82B841E8();


uint fn_82B109E8(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar12 = param_2;
  puVar10 = (uint *)(param_2 + 0x30);
  while ((uVar1 >> 0x1e & 1) == 0) {
    uVar12 = *(uint *)(uVar12 + 0x34);
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    puVar10 = (uint *)(uVar12 + 0x30);
    uVar1 = *(uint *)(uVar12 + 0x30);
  }
  piVar11 = *(int **)(uVar12 + 0x24);
  piVar6 = (int *)0x0;
  if ((((uint)piVar11 & 1) == 0) && (piVar7 = piVar6, piVar11 != (int *)0x0)) {
    do {
      piVar6 = piVar7;
      if ((piVar11[2] & 0x3f80U) == 0x3a80) {
        for (iVar2 = *piVar11; piVar6 = piVar7, iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          piVar6 = *(int **)(iVar2 + 0xc);
          uVar1 = (uint)piVar6[2] >> 7 & 0x7f;
          if ((uVar1 < 0x5b) || (bVar5 = true, 0x5e < uVar1)) {
            bVar5 = false;
          }
          if ((bVar5) && (uVar1 != 0x5e)) break;
        }
        if (piVar6 != (int *)0x0) break;
      }
      piVar11 = *(int **)(((uint)piVar11 & 0xfffffffe) + 0x28);
      if ((((uint)piVar11 & 1) != 0) || (piVar7 = piVar6, piVar11 == (int *)0x0)) break;
    } while( true );
  }
  piVar11 = (int *)0x0;
  uVar1 = *(uint *)(param_1 + 0x30) & 0xffff0000;
  if (piVar6 == (int *)0x0) {
    uVar9 = 0x5d;
    if (uVar1 != 0xffff0000) {
      uVar9 = 0x5b;
    }
    piVar6 = (int *)fn_82B841E8(param_1,uVar12,0,uVar9,0,0);
    uVar1 = (uint)piVar6 & 0xfffffffe;
    *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(uVar12 + 0x1c);
    *(uint *)((*(uint *)(uVar12 + 0x1c) & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(uint *)(uVar1 + 0x24) = uVar12 + 0x1c | 1;
    *(uint *)(uVar12 + 0x1c) = uVar1;
    piVar7 = piVar6;
    piVar11 = (int *)0x0;
    if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
      piVar7 = (int *)fn_82B841E8(param_1,uVar12,0,0x5c,0,0);
      uVar8 = (uint)piVar7 & 0xfffffffe;
      *(undefined4 *)(uVar8 + 0x28) = *(undefined4 *)(uVar1 + 0x28);
      *(uint *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = uVar8 + 0x28;
      *(uint *)(uVar8 + 0x24) = uVar1 + 0x28;
      *(uint *)(uVar1 + 0x28) = uVar8;
      fn_82AD1A40(piVar7,piVar6,param_1);
      piVar11 = piVar7;
    }
    uVar8 = fn_82B841E8(param_1,uVar12,0,0x75,0,0);
    uVar1 = uVar8 & 0xfffffffe;
    *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(uVar12 + 0x24);
    *(uint *)((*(uint *)(uVar12 + 0x24) & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(uint *)(uVar1 + 0x24) = uVar12 + 0x24 | 1;
    *(uint *)(uVar12 + 0x24) = uVar1;
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) | 0x2000000;
    if (uVar12 == param_2) {
      fn_82AD1A40(uVar8,piVar7,param_1);
    }
    else {
      uVar9 = fn_82AC9F80(param_1,piVar7,8);
      fn_82AD1978(uVar8,uVar9);
      if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
        uVar9 = fn_82AC9F80(param_1,piVar7,5);
        fn_82AD1978(uVar8,uVar9);
      }
    }
  }
  else if (uVar1 != 0xffff0000) {
    puVar3 = (uint *)*piVar6;
    do {
      if (puVar3 == (uint *)0x0) {
LAB_82b10dec:
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if (((*puVar3 & 0x40000000) != 0) || (bVar5 = true, (*puVar3 & 0xe000000) != 0)) {
        bVar5 = false;
      }
      if (bVar5) {
        piVar7 = (int *)puVar3[3];
        uVar1 = (uint)piVar7[2] >> 7 & 0x7f;
        piVar11 = piVar6;
        if ((uVar1 == 0x5b) || (piVar11 = piVar7, piVar7 = piVar6, uVar1 == 0x5c)) {
          piVar6 = piVar7;
          if (piVar6 != (int *)0x0) break;
          goto LAB_82b10dec;
        }
      }
      puVar3 = (uint *)puVar3[1];
    } while( true );
  }
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
    for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      if ((uVar12 == uVar1) ||
         (bVar5 = true,
         (*(uint *)(((int)(((ulonglong)*puVar10 & 0x7ffff) >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28))
         & 1 << ((uint)((ulonglong)*puVar10 & 0x7ffff) & 0x1f)) == 0)) {
        bVar5 = false;
      }
      if (bVar5) {
        if ((param_2 == uVar1) ||
           (uVar4 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar5 = true,
           (*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
           1 << ((uint)uVar4 & 0x1f)) == 0)) {
          bVar5 = false;
        }
        if (!bVar5) {
          *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) | 0x2000000;
        }
      }
    }
  }
  *param_3 = piVar6;
  *param_4 = piVar11;
  return uVar12;
}

