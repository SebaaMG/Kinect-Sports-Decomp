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
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_51e;
extern unsigned int *auStack_534;
extern int fn_82230300();
extern int fn_82230420();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_8225C590();
extern int fn_8225F160();
extern int fn_82273C88();
extern int fn_822843E0();
extern int fn_82486A20();
extern int fn_82528BF8();
extern int fn_82528EE0();
extern int fn_82672C20();
extern int fn_82E1DAA0();
extern int fn_82F64F28();
extern int fn_82F691F0();
extern unsigned int iStack_560;
extern unsigned int iStack_56c;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82197BA0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CEF4C;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_520;
extern unsigned int uStack_52c;
extern unsigned int uStack_530;
extern unsigned int uStack_53c;
extern unsigned int uStack_540;
extern unsigned int uStack_564;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8247FA00(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *****pppppuVar6;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  int iStack_56c;
  uint uStack_564;
  int iStack_560;
  undefined4 ****appppuStack_550 [4];
  uint uStack_540;
  uint uStack_53c;
  undefined1 auStack_534 [4];
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined2 uStack_520;
  undefined1 auStack_51e [126];
  undefined2 auStack_4a0 [256];
  undefined1 auStack_2a0 [672];
  
  fn_82672C20(**(undefined4 **)(param_1 + 200),0xffffffff821a8c10,0,0);
  iVar9 = *(int *)(param_1 + 0x48);
  uStack_564 = 0;
  uVar1 = *(uint *)(iVar9 + 0x18b8);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      if (uVar1 < 3) {
        iVar3 = 0;
        iVar7 = 0;
        lVar11 = 4;
        do {
          if (*(int *)(iVar7 + iVar9 + 0x838) != 4) {
            iVar3 = iVar3 + 1;
          }
          iVar7 = iVar7 + 0x420;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if (iVar3 == 1) {
          lVar11 = -0x7de6e680;
          goto LAB_8247fafc;
        }
        if (iVar3 == 2) {
          lVar11 = -0x7de6e668;
          goto LAB_8247fafc;
        }
        if (iVar3 == 3) {
          lVar11 = -0x7de6e638;
          goto LAB_8247fafc;
        }
        if (iVar3 == 4) {
          lVar11 = -0x7de6e5f0;
          goto LAB_8247fafc;
        }
      }
      lVar11 = 0;
      goto LAB_8247fafc;
    }
    if (*(int *)(iVar9 + 0xc58) != 4) {
      lVar11 = -0x7de6e6e0;
      goto LAB_8247fafc;
    }
  }
  lVar11 = -0x7de6e710;
LAB_8247fafc:
  iStack_56c = 0;
  ppuVar8 = &lbl_831CEF4C;
  iStack_560 = 0;
  dVar12 = (double)lbl_821CA460;
  iVar9 = 0;
  lVar10 = 1;
  do {
    iVar3 = iStack_560 + *(int *)(param_1 + 0x48);
    uVar1 = *(uint *)(iVar3 + 0x838);
    if (uVar1 == 0) {
      iVar3 = fn_8225C590();
      if (uStack_564 < (uint)(*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) >> 2)) {
        iVar3 = *(int *)(iVar9 + *(int *)(iVar3 + 0x10));
      }
      else {
        iVar3 = 0;
      }
      uStack_530 = 0;
      uStack_52c = 0;
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)fn_82E1DAA0();
        if (0xf < (uint)puVar4[5]) {
          puVar4 = (undefined4 *)*puVar4;
        }
        fn_82528EE0(&uStack_520,0x20,0xffffffff821bd7b0,puVar4);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fn_822843E0((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                         dVar12),*(undefined4 *)(param_1 + 200),lVar11,&uStack_520);
      }
      uStack_564 = uStack_564 + 1;
      iVar9 = iVar9 + 4;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x18;
      fn_82273C88(&uStack_530);
    }
    else {
      if (uVar1 == 1) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + *(int *)(param_1 + 0x48) + 0x838) == 3) {
            uVar2 = fn_82E1DAA0(lbl_83265988);
            fn_8223B688(appppuStack_550,uVar2);
            if (0xc < uStack_540) {
              fn_82230420(appppuStack_550,0xc,0xffffffffffffffff);
            }
            fn_8223DFF0(appppuStack_550,&lbl_82197BA0,3);
            pppppuVar6 = (undefined4 *****)appppuStack_550[0];
            if (uStack_53c < 0x10) {
              pppppuVar6 = appppuStack_550;
            }
            fn_82F64F28(auStack_534,auStack_4a0,0x100,pppppuVar6,0xffffffffffffffff);
            fn_82230300(appppuStack_550,1,0);
            goto LAB_8247fdb0;
          }
          iVar3 = iVar3 + 0x420;
        } while (iVar3 < 0x1080);
        uVar2 = fn_82486A20();
        fn_82528BF8(*(undefined4 *)(param_1 + 0xa0),uVar2,auStack_2a0,0x100,0,1);
        fn_82528EE0(auStack_4a0,0x100,auStack_2a0,lVar10);
LAB_8247fdb0:
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fn_822843E0((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                         dVar12),*(undefined4 *)(param_1 + 200),lVar11,auStack_4a0);
        uStack_564 = uStack_564 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        if (uVar1 < 3) {
          fn_8225F160();
          uStack_520 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_51e,0,0x3e);
        }
        if (uVar1 != 3) {
          puVar4 = *(undefined4 **)(param_1 + 200);
          fn_82672C20(*puVar4,*ppuVar8,0,0);
          *(undefined4 *)((int)puVar4 + iStack_56c + 0x28) = 0;
          *(undefined4 *)((int)puVar4 + iStack_56c + 0x2c) = 0;
          goto LAB_8247ff38;
        }
        if (*(char *)(iVar3 + 0xc54) == '\0') {
          puVar4 = (undefined4 *)(iVar3 + 0xc38);
          if (0xf < *(uint *)(iVar3 + 0xc4c)) {
            puVar4 = (undefined4 *)*puVar4;
          }
          fn_82528EE0(&uStack_520,0x20,0xffffffff821bd7b0,puVar4);
          puVar5 = &uStack_520;
        }
        else {
          fn_82528BF8(*(undefined4 *)(param_1 + 0xa0),0xffffffff821a7d28,auStack_4a0,0x100,0,1
                           );
          puVar5 = auStack_4a0;
        }
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fn_822843E0((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                         dVar12),*(undefined4 *)(param_1 + 200),lVar11,puVar5);
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x18;
    }
LAB_8247ff38:
    ppuVar8 = ppuVar8 + 1;
    iStack_560 = iStack_560 + 0x420;
    iStack_56c = iStack_56c + 0x234;
    if (-0x7ce310a5 < (int)ppuVar8) {
      *(undefined4 *)(param_1 + 0xf0) = 1;
      return;
    }
  } while( true );
}

