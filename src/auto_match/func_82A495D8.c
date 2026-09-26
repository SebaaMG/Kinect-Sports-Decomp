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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82A45120();
extern int fn_82A45138();
extern int fn_82A45E40();
extern int fn_82A48EE8();
extern int fn_82A494B8();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x82a49738) */

longlong fn_82A495D8(int param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
                      undefined4 *param_5)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar14 = ZEXT48(&stack0x00000000) - 0xb0;
  puVar2 = (undefined4 *)lVar14;
  *puVar2 = register0x0000000c;
  uVar1 = ((-(ulonglong)(1 < *(uint *)(param_1 + 0x40)) & 1) + 1) * 2;
  uVar12 = 0x100 / uVar1;
  trapWord(6,uVar1,0);
  trapWord(6,uVar1,0);
  trapWord(6,uVar12,0);
  uVar7 = 4;
  uVar9 = 0x200;
  lVar13 = (longlong)(int)(((*(uint *)(param_1 + 0x1e4) + uVar12) - 1 & 0xffffffff) / uVar12) *
           (longlong)(int)uVar12;
  do {
    iVar10 = (int)uVar9;
    uVar8 = (undefined1)uVar7;
    if ((uVar9 * 2 + lVar13 & 0xffffffff) <= 0x1f00 / uVar1) break;
    uVar7 = uVar7 >> 1;
    uVar8 = (undefined1)uVar7;
    uVar9 = uVar9 >> 1;
    iVar10 = (int)uVar9;
  } while (uVar7 != 0);
  uVar5 = *(uint *)(param_1 + 0x40) + 1 >> 1;
  uVar1 = (ulonglong)uVar5;
  iVar10 = iVar10 * 2 + (int)lVar13;
  uVar9 = uVar1 * -0xc & 0xfffffff0;
  fn_82F6E8D4();
  uVar7 = 0;
  lVar14 = lVar14 + uVar9;
  *(undefined4 *)lVar14 = *puVar2;
  if (uVar1 != 0) {
    lVar13 = lVar14 + 0x4d;
    uVar9 = uVar1;
    do {
      if (((uVar7 & 0xffffffff) != (uVar1 - 1 & 0xffffffff)) ||
         (bVar4 = true, (*(uint *)(param_1 + 0x40) & 1) == 0)) {
        bVar4 = false;
      }
      iVar3 = (int)lVar13;
      *(undefined4 *)(iVar3 + 3) = param_2;
      *(int *)(iVar3 + 7) = iVar10;
      uVar7 = uVar7 + 1;
      *(char *)(iVar3 + 0xb) = !bVar4 + '\x01';
      lVar13 = lVar13 + 0xc;
      *(undefined1 *)lVar13 = uVar8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  fn_82A45120();
  uVar6 = fn_82A45138(uVar1,lVar14 + 0x50);
  uVar9 = fn_82A494B8((ulonglong)*(uint *)(param_1 + 0x34) + 0x3ea8,uVar6);
  if (uVar9 == 0) {
    lVar14 = -0x7ff8fff2;
  }
  else {
    lVar14 = fn_82A45E40(uVar1,lVar14 + 0x50,6,ZEXT48(&stack0x00000000) - 0x60,uVar9,uVar6);
    if (-1 < lVar14) {
      *param_5 = 0;
      *param_4 = (int)uVar9;
      *param_3 = uVar5;
      return lVar14;
    }
  }
  if ((uVar9 & 0xffffffff) != 0) {
    piVar11 = *(int **)(*(int *)(param_1 + 0x34) + 0x3f74);
    do {
      if (piVar11 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar11;
        piVar11 = (int *)piVar11[1];
      }
    } while (((uVar9 & 0xffffffff) < (ulonglong)*(uint *)(iVar10 + 0xfc)) ||
            (((ulonglong)*(uint *)(iVar10 + 0x100) + (ulonglong)*(uint *)(iVar10 + 0xfc) &
             0xffffffff) <= (uVar9 & 0xffffffff)));
    fn_82A48EE8(iVar10,uVar9);
  }
  return lVar14;
}

