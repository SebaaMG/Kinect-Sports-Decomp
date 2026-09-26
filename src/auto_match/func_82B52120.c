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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE870();
extern int fn_82AD1978();
extern int fn_82AE60E8();
extern int fn_82B24700();
extern int fn_82B46CC0();
extern int fn_82B4B0E8();
extern int fn_82B4B1D8();
extern int fn_82B4BAA8();
extern int fn_82B4BC48();
extern int fn_82B4EA48();
extern int fn_82B50418();
extern unsigned int iStack_a0;
extern unsigned int uStack_9c;


void fn_82B52120(int param_1,undefined8 param_2,int param_3,ulonglong param_4,undefined8 param_5,
                  char param_6,undefined8 param_7)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  int iStack_a0;
  uint uStack_9c;
  
  iVar7 = *(int *)(param_3 + 0x1c);
  uVar11 = *(int *)(param_3 + 0x18) * *(int *)(param_3 + 0x14);
  if (iVar7 == 0x21) {
    if (4 < uVar11) {
      if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
        uVar4 = 0xffffffff82032780;
      }
      else {
        uVar4 = 0xffffffff82032788;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x11b4,uVar4);
    }
  }
  else if (uVar11 != 4) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  iVar9 = *(int *)(param_3 + 0x24);
  if (iVar7 == 0x21) {
    iVar9 = *(int *)(iVar9 + 0xc);
    if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  }
  else if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  iVar9 = *(int *)(iVar9 + 8);
  if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  iVar10 = (int)param_7;
  uVar14 = param_4;
  if (iVar7 == 0x21) {
    iVar7 = *(int *)(iVar9 + 0xc);
    if (*(int *)(iVar7 + 4) == 1) {
      iVar7 = *(int *)(iVar7 + 8);
    }
  }
  else {
    iVar7 = *(int *)(iVar9 + 0xc);
    if ((iVar7 == 0) || (*(int *)(iVar7 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    iVar7 = *(int *)(iVar7 + 8);
    if (1 < iVar10) {
      uVar14 = 4;
    }
  }
  uVar2 = fn_82B46CC0(param_1,iVar7);
  if ((uVar14 & 0xffffffff) != (uVar2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  uVar2 = uVar14 + 1;
  if (iVar10 == 1) {
    uVar2 = (uVar14 & 0x7fffffff) * 2 + uVar2;
  }
  else if ((*(int *)(param_3 + 0x1c) == 0x21) && (1 < iVar10)) {
    uVar2 = uVar14 + 2;
  }
  if (param_6 != '\0') {
    uVar2 = uVar2 + param_4;
  }
  uVar3 = fn_82B46CC0(param_1,iVar9);
  if ((uVar2 & 0xffffffff) != (uVar3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  fn_82B24700(&iStack_a0,param_2);
  fn_82B4B1D8(&iStack_a0,uVar2);
  uVar4 = fn_82ABE870(&iStack_a0);
  uVar5 = fn_82B4BC48(param_1,&iStack_a0,uVar14,0,1);
  uVar12 = 0;
  if (iVar10 == 1) {
    uVar12 = fn_82B4BC48(param_1,&iStack_a0,uVar14,0,1);
    fn_82B4BC48(param_1,&iStack_a0,uVar14,0,1);
  }
  else if ((*(int *)(param_3 + 0x1c) == 0x21) && (1 < iVar10)) {
    uVar6 = fn_82ABE870(&iStack_a0);
    fn_82B4BAA8(param_1,uVar6);
  }
  iVar7 = 0;
  if (param_6 != '\0') {
    iVar7 = fn_82AE60E8(param_1,(param_4 + 2 & 0x3fffffff) << 2,0);
    *(int *)(iVar7 + 4) = (int)param_4;
    if ((param_4 & 0xffffffff) != 0) {
      puVar13 = (undefined4 *)(iVar7 + 4);
      uVar14 = param_4;
      do {
        uVar6 = fn_82ABE870(&iStack_a0);
        uVar8 = fn_82B4BAA8(param_1,uVar6);
        uVar14 = uVar14 - 1;
        puVar13 = puVar13 + 1;
        *puVar13 = uVar8;
      } while (uVar14 != 0);
    }
  }
  iVar9 = fn_82B4EA48(param_1,uVar4,uVar5,param_4,param_5,param_7,0,uVar12);
  if (param_6 != '\0') {
    if ((param_4 & 0xffffffff) != 0) {
      puVar13 = (undefined4 *)(iVar7 + 4);
      do {
        uVar8 = fn_82AD1978(iVar9,puVar13[1]);
        param_4 = param_4 - 1;
        puVar13 = puVar13 + 1;
        *puVar13 = uVar8;
      } while (param_4 != 0);
    }
    uVar15 = *(uint *)(iVar9 + 8);
    iVar10 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
    *(int *)(iVar10 + iVar9 + -4) = iVar7;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100000;
  }
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82B4B0E8(&iStack_a0,param_2,uVar2);
  }
  uVar15 = 0;
  if (uVar11 != 0) {
    do {
      uVar1 = (uVar15 & 0x3fff) << 2 | uStack_9c & 0x10000;
      uStack_9c = uVar1 | 1;
      iStack_a0 = iVar9;
      fn_82B50418(param_2,CONCAT44(iVar9,uVar1) | 1);
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar11);
  }
  return;
}

