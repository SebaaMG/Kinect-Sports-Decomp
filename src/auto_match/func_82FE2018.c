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
extern int fn_82A1DDC0();
extern int fn_82A1EFC0();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82FE09B8();
extern int fn_82FE0A58();
extern int fn_82FE3FB8();
extern int fn_82FE4280();
extern int fn_82FE4340();
extern int fn_82FE4728();
extern int fn_82FE5618();


void fn_82FE2018(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar3;
  ulonglong uVar2;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar3 = fn_82F6A538();
  uVar2 = (**(code **)(**(int **)(iVar3 + 0x1a0) + 4))
                    (*(int **)(iVar3 + 0x1a0),((ulonglong)*(byte *)(iVar3 + 0xd0) + 10) * 0x400);
  if ((uVar2 & 0xffffffff) == 0) {
    fn_82F6A584(0x34);
  }
  else {
    lVar9 = uVar2 + 0x400;
    lVar11 = 0;
    lVar10 = 0;
    lVar8 = 0;
    lVar7 = 0;
    if (*(char *)(iVar3 + 0xd0) != '\0') {
      lVar11 = uVar2 + 0x2000;
      lVar10 = uVar2 + 0x2400;
      lVar8 = uVar2 + 0x2800;
      lVar7 = uVar2 + 0x2c00;
    }
    uVar1 = *(ushort *)((int)param_2 + 0xe);
    uVar5 = (ulonglong)uVar1;
    if (uVar5 != 0) {
      if (0xff < uVar1) {
        uVar5 = 0x100;
      }
      fn_82FE09B8(iVar3,param_2,uVar2,uVar5,0);
      if (*(int *)(iVar3 + 0x98) == 0) {
        fn_82A1DDC0(lVar9,uVar2,uVar5 << 2);
      }
      else {
        fn_82FE4340(iVar3 + 0x98,uVar2,lVar9,uVar5);
      }
      if (*(int *)(iVar3 + 0x8c) != 0) {
        fn_82FE4280(iVar3 + 0x8c,uVar2,uVar5);
      }
      if (*(char *)(iVar3 + 0xd0) != '\0') {
        fn_82FE4728(*(undefined4 *)(iVar3 + 0xdc),uVar2,lVar11,lVar10,uVar5);
        if ((*(char *)(iVar3 + 0x170) != '\0') && (uVar6 = 0, *(char *)(iVar3 + 0xcc) != '\0')) {
          do {
            iVar4 = *(int *)(iVar3 + 0xd8) + uVar6 * 0x28;
            if (*(int *)(iVar4 + 0x24) == 1) {
              fn_82FE3FB8(iVar4,lVar11,uVar5);
              fn_82FE3FB8(*(int *)(iVar3 + 0xd8) + uVar6 * 0x28 + 0x28,lVar10,uVar5);
              uVar6 = uVar6 + 1 & 0xff;
            }
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < *(byte *)(iVar3 + 0xcc));
        }
        if (*(int *)(iVar3 + 0xa4) != 0) {
          fn_82FE4340(iVar3 + 0xa4,lVar11,lVar8,uVar5);
          fn_82FE4340(iVar3 + 0xb0,lVar10,lVar7,uVar5);
        }
      }
      iVar4 = iVar3 + 4;
      lVar7 = 4;
      do {
        fn_82FE5618(iVar4,lVar9,uVar5);
        lVar7 = lVar7 + -1;
        iVar4 = iVar4 + 0x10;
      } while (lVar7 != 0);
      fn_82FE0A58(iVar3,lVar9,uVar5);
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(uVar2 + 0x800,0,0x1800);
    }
    (**(code **)(**(int **)(iVar3 + 0x1a0) + 8))(*(int **)(iVar3 + 0x1a0),uVar2);
    fn_82F6A584(1);
  }
  return;
}

