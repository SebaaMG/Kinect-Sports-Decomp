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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern int fn_8265CA20();
extern int fn_8288B2D8();
extern int fn_8288BB90();
extern int fn_8288CD40();
extern int fn_828956D8();
extern int fn_82897B18();
extern int fn_82897BA8();
extern int fn_82897BD0();
extern int fn_82897F68();
extern int fn_828A12E8();
extern int fn_828B2E68();
extern int fn_828B5560();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5700();
extern int fn_828B57B0();
extern int fn_828E9D40();
extern int fn_828E9D78();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int iStack_ac;
extern unsigned int lbl_82197140;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_a4;
extern unsigned int uStack_c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_828958A0(int param_1,undefined8 param_2)

{
  int iVar3;
  int iVar4;
  undefined8 uVar1;
  longlong lVar2;
  int *piVar5;
  char cVar8;
  int iVar6;
  undefined4 uVar7;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uStack_c0;
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [8];
  undefined **ppuStack_b0;
  int iStack_ac;
  undefined1 auStack_a8 [4];
  uint uStack_a4;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined **ppuStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  int iStack_84;
  
  iVar13 = param_1 + 0x494;
  iVar9 = 0;
  fn_828E9D40(iVar13);
  uVar11 = (ulonglong)uStack_c0;
  uVar10 = (ulonglong)uStack_c0;
  do {
    if (iVar9 == 0) {
LAB_82895918:
      uVar11 = fn_828B5700(*(undefined4 *)(param_1 + 0x6c),iVar13);
    }
    else {
      iVar3 = fn_828E9DA8(iVar13);
      iVar4 = fn_828E9D90(iVar13);
      if ((0 < iVar3 - iVar4) && (iVar3 = fn_828E9FF8(iVar13,1), iVar3 != 0)) goto LAB_82895918;
    }
    if (iVar9 == 0) {
      iVar3 = fn_828E9DA8(iVar13);
      iVar4 = fn_828E9D90(iVar13);
      if (iVar3 - iVar4 < 2) {
LAB_828959c8:
        uVar10 = 0;
      }
      else {
        uVar10 = fn_828E9FF8(iVar13,2);
      }
    }
    else {
      iVar3 = fn_828E9DA8(iVar13);
      iVar4 = fn_828E9D90(iVar13);
      if ((0 < iVar3 - iVar4) && (iVar3 = fn_828E9FF8(iVar13,1), iVar3 != 0)) {
        iVar3 = fn_828E9DA8(iVar13);
        iVar4 = fn_828E9D90(iVar13);
        if (iVar3 - iVar4 < 2) goto LAB_828959c8;
        uVar10 = fn_828E9FF8(iVar13,2);
      }
    }
    uVar1 = fn_828B57B0(*(undefined4 *)(param_1 + 0x6c),uVar11);
    iVar3 = fn_828E9DA8(iVar13);
    iVar4 = fn_828E9D90(iVar13);
    if (iVar3 - iVar4 < (int)uVar1) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_828E9FF8(iVar13,uVar1);
    }
    fn_828B5560(auStack_b8,uVar10,uVar11,uVar1);
    lVar2 = fn_828A12E8(*(undefined4 *)(param_1 + 0x6c));
    uStack_c0 = (uint)uVar11;
    piVar5 = (int *)fn_8288CD40(auStack_bc,lVar2 + 0x94,&uStack_c0);
    uVar12 = 0;
    iVar3 = *(int *)(*piVar5 + 0x40);
    if (*(int *)(iVar3 + 8) != 0) {
      do {
        piVar5 = (int *)fn_8288B2D8(iVar3,uVar12);
        cVar8 = fn_82897BA8();
        if ((cVar8 != '\0') && (cVar8 = fn_828B2E68(piVar5), cVar8 != '\0')) {
          iVar4 = fn_828E9DA8(iVar13);
          iVar6 = fn_828E9D90(iVar13);
          if ((0 < iVar4 - iVar6) && (iVar4 = fn_828E9FF8(iVar13,1), iVar4 != 0)) {
            while (piVar5 != (int *)0x0) {
              ppuStack_b0 = &lbl_82197140;
              iStack_ac = 9;
              uStack_a4 = 0;
              iVar4 = fn_828E9D90(iVar13);
              (**(code **)(*piVar5 + 8))(piVar5,*(undefined4 *)(param_1 + 0x6c),iVar13,&ppuStack_b0)
              ;
              iVar6 = fn_828E9D90(iVar13);
              uVar7 = fn_82897B18(piVar5);
              fn_828B5580(auStack_a0,auStack_b8);
              uStack_98 = uVar7;
              fn_8288BB90(&ppuStack_94,&ppuStack_b0);
              iStack_84 = iVar6 - iVar4;
              fn_828956D8(param_2,auStack_a0);
              piVar5 = (int *)fn_82897BD0(piVar5);
              ppuStack_94 = &lbl_82197140;
              if (iStack_90 == 7) {
                if (uStack_88 < 5) {
                  uStack_8c = 0;
                }
                else {
                  fn_8265CA20(uStack_8c);
                  uStack_8c = 0;
                }
              }
              else if (iStack_90 == 8) {
                fn_82897F68(&uStack_8c,0);
              }
              fn_828B55B0(auStack_a0);
              ppuStack_b0 = &lbl_82197140;
              if (iStack_ac == 7) {
                if (4 < uStack_a4) {
                  fn_8265CA20(0);
                }
              }
              else if (iStack_ac == 8) {
                fn_82897F68(auStack_a8,0);
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while ((uVar12 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 8));
    }
    iVar9 = iVar9 + 1;
    iVar3 = fn_828E9D78(iVar13);
    if (iVar3 == *(int *)(param_1 + 0x4bc)) {
      fn_828B55B0(auStack_b8);
      fn_828E9D40(iVar13);
      return;
    }
    fn_828B55B0(auStack_b8);
  } while( true );
}

