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
#define NAN(x) ((x) != (x))
extern int fn_82521C00();
extern int fn_82522258();
extern int fn_82522D98();
extern int fn_828EB518();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832767C8;
extern unsigned int lbl_8327F894;
extern U64 storeWordConditionalIndexed();


void fn_825215A0(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar13 = (double)lbl_821CC160;
  piVar4 = (int *)param_1;
  uVar8 = 0;
  while( true ) {
    if ((uVar8 & 0xffffffff) == 0xff) {
      uVar7 = (ulonglong)lbl_83265988;
    }
    else {
      uVar7 = fn_828EB518(uVar8);
    }
    iVar3 = (int)uVar8;
    if ((uVar7 & 0xffffffff) == 0) {
      *(undefined1 *)((int)piVar4 + iVar3 + 0x7c) = 0;
      *(undefined1 *)((int)piVar4 + iVar3 + 0x74) = 0;
      *(undefined1 *)((int)piVar4 + iVar3 + 0x80) = 0;
      *(undefined1 *)((int)piVar4 + iVar3 + 0x78) = 0;
      *(undefined1 *)((int)piVar4 + iVar3 + 0x84) = 0;
    }
    if (*(char *)((int)piVar4 + iVar3 + 0x7c) != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0x14);
    }
    if (*(char *)((int)piVar4 + iVar3 + 0x74) != '\0') {
      fn_82522258(uVar7);
      *(undefined1 *)((int)piVar4 + iVar3 + 0x74) = 0;
    }
    if (*(char *)((int)piVar4 + iVar3 + 0x80) != '\0') {
      iVar5 = (**(code **)(*piVar4 + 8))(param_1,uVar7);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0x14);
      }
      fn_82522258(uVar7);
      *(undefined1 *)((int)piVar4 + iVar3 + 0x80) = 0;
    }
    if (*(char *)((int)piVar4 + iVar3 + 0x84) != '\0') break;
    if (*(char *)((int)piVar4 + iVar3 + 0x78) != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0x14);
    }
    iVar5 = (int)((uVar8 + 0x24 & 0x3fffffff) << 2);
    if (*(int *)(iVar5 + (int)piVar4) != 0) {
      dVar10 = (double)(*(float *)(iVar5 + (int)piVar4) - lbl_8327F894);
      dVar12 = -dVar10;
      dVar11 = dVar13;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2)
                    ) < 0.0) {
        dVar11 = dVar10;
      }
      *(float *)(iVar5 + (int)piVar4) = (float)dVar11;
      if (dVar11 == dVar13) {
        *(undefined1 *)((int)piVar4 + iVar3 + 0x8c) = 1;
      }
    }
    if ((*(char *)((int)piVar4 + iVar3 + 0x8c) == '\x01') &&
       (bVar1 = *(char *)((int)piVar4 + iVar3 + 0x88) == '\0', bVar9 = bVar1 << 1, bVar1)) {
      iVar5 = (int)((uVar8 + 0x29 & 0x3fffffff) << 2);
      if (*(int *)(iVar5 + (int)piVar4) != 0) {
        fn_82521C00(param_1,*(undefined4 *)(iVar5 + lbl_832767C8));
        *(undefined4 *)(iVar5 + (int)piVar4) = 0;
      }
      do {
        puVar6 = (uint *)(param_1 + 0xa0);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,param_1 + 0xa0);
          *puVar6 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      *(undefined1 *)((int)piVar4 + iVar3 + 0x8c) = 0;
    }
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x14);
}

