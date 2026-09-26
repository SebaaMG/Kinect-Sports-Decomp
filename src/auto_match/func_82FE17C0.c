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
extern unsigned int lbl_82002AE0;


void fn_82FE17C0(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  iVar4 = fn_82F6A538();
  uVar7 = *(uint *)((int)param_2 + 4);
  uVar13 = -(ulonglong)((ulonglong)*(byte *)(iVar4 + 0x171) != 0) &
           -(ulonglong)((uVar7 & 0x30) != 0) & 2;
  uVar3 = (**(code **)(**(int **)(iVar4 + 0x1a0) + 4))
                    (*(int **)(iVar4 + 0x1a0),(*(byte *)(iVar4 + 0xd0) + uVar13 + 6) * 0x400,
                     -(ulonglong)*(byte *)(iVar4 + 0x171));
  uVar2 = lbl_82002AE0;
  if ((uVar3 & 0xffffffff) == 0) {
    fn_82F6A584(0x34);
  }
  else {
    lVar10 = uVar3 + 0x400;
    lVar12 = 0;
    lVar11 = 0;
    lVar9 = 0;
    lVar8 = 0;
    if (*(char *)(iVar4 + 0xd0) != '\0') {
      lVar12 = uVar3 + 0x1800;
      lVar11 = uVar3 + 0x1c00;
      if (uVar13 == 2) {
        lVar9 = uVar3 + 0x2000;
        lVar8 = uVar3 + 0x2400;
      }
    }
    if ((uVar7 & 0x30) == 0) {
      *(undefined4 *)(iVar4 + 0x118) = lbl_82002AE0;
      *(undefined4 *)(iVar4 + 0x11c) = uVar2;
    }
    uVar1 = *(ushort *)((int)param_2 + 0xe);
    uVar6 = (ulonglong)uVar1;
    if (uVar6 != 0) {
      if (0xff < uVar1) {
        uVar6 = 0x100;
      }
      fn_82FE09B8(iVar4,param_2,uVar3,uVar6,0);
      if (*(int *)(iVar4 + 0x98) == 0) {
        fn_82A1DDC0(lVar10,uVar3,uVar6 << 2);
      }
      else {
        fn_82FE4340((int *)(iVar4 + 0x98),uVar3,lVar10,uVar6);
      }
      if (*(int *)(iVar4 + 0x8c) != 0) {
        fn_82FE4280(iVar4 + 0x8c,uVar3,uVar6);
      }
      if (*(char *)(iVar4 + 0xd0) != '\0') {
        fn_82FE4728(*(undefined4 *)(iVar4 + 0xdc),uVar3,lVar12,lVar11,uVar6);
        if ((*(char *)(iVar4 + 0x170) != '\0') && (uVar7 = 0, *(char *)(iVar4 + 0xcc) != '\0')) {
          do {
            iVar5 = *(int *)(iVar4 + 0xd8) + uVar7 * 0x28;
            if (*(int *)(iVar5 + 0x24) == 1) {
              fn_82FE3FB8(iVar5,lVar12,uVar6);
              fn_82FE3FB8(*(int *)(iVar4 + 0xd8) + uVar7 * 0x28 + 0x28,lVar11,uVar6);
              uVar7 = uVar7 + 1 & 0xff;
            }
            uVar7 = uVar7 + 1 & 0xff;
          } while (uVar7 < *(byte *)(iVar4 + 0xcc));
        }
        if ((uVar13 == 2) && (*(int *)(iVar4 + 0xa4) != 0)) {
          fn_82FE4340(iVar4 + 0xa4,lVar12,lVar9,uVar6);
          fn_82FE4340(iVar4 + 0xb0,lVar11,lVar8,uVar6);
        }
      }
      iVar5 = iVar4 + 4;
      lVar8 = 4;
      do {
        fn_82FE5618(iVar5,lVar10,uVar6);
        lVar8 = lVar8 + -1;
        iVar5 = iVar5 + 0x10;
      } while (lVar8 != 0);
      fn_82FE0A58(iVar4,lVar10,uVar6);
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(uVar3 + 0x800,0,0x1000);
    }
    (**(code **)(**(int **)(iVar4 + 0x1a0) + 8))(*(int **)(iVar4 + 0x1a0),uVar3);
    fn_82F6A584(1);
  }
  return;
}

