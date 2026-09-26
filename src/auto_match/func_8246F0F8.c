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
extern int fn_8228DD18();
extern int fn_8245FE80();
extern int fn_82460540();
extern int fn_82460610();
extern int fn_82460C90();
extern int fn_824651F0();
extern int fn_82465548();
extern int fn_82469038();
extern int fn_8246F9F0();
extern int fn_8246FD00();
extern int fn_82470E58();
extern int fn_82534820();
extern int fn_82536590();
extern int fn_82672C20();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6B88;
extern unsigned int lbl_831C6B8C;
extern unsigned int lbl_831C6B98;
extern unsigned int lbl_831C6C64;
extern unsigned int lbl_831C6CA8;


void fn_8246F0F8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar5;
  int iVar4;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = *(int *)(param_1 + 0x450);
  if ((((iVar4 == 0) && (*(int *)(param_1 + 0x45c) == 0)) && (*(int *)(param_1 + 0x460) == 0)) &&
     ((*(int *)(param_1 + 0x430) == 0 && (*(int *)(param_1 + 0x434) == 0)))) {
    return;
  }
  if (*(float *)(param_1 + 0x448) < lbl_82195634) {
    return;
  }
  if (lbl_82193CC0 < *(float *)(param_1 + 0x448)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x454) != 4) || (iVar4 == 0)) {
      if (*(int *)(param_1 + 0x460) == 0) goto LAB_8246f538;
      fn_82465548(*(undefined4 *)(param_1 + 0x440));
      cVar5 = fn_82534820(*(undefined4 *)(param_1 + 300));
      if (cVar5 != '\0') {
        fn_82536590(param_1 + 300,0);
      }
LAB_8246f530:
      fn_8245FE80(*(undefined4 *)(param_1 + 8));
      goto LAB_8246f538;
    }
    uVar6 = 1;
LAB_8246f4f0:
    iVar4 = *(int *)(param_1 + 8);
LAB_8246f4f4:
    fn_82460610(iVar4,uVar6);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 7) {
        if (*(int *)(param_1 + 0x430) == 0) {
          if (*(int *)(param_1 + 0x434) == 0) goto LAB_8246f538;
LAB_8246f21c:
          if (*(int *)(param_1 + 0x428) != 0) {
            fn_8228DD18();
          }
          goto LAB_8246f530;
        }
        if (*(float *)(param_1 + 0x18) != lbl_821CC160) goto LAB_8246f538;
        fn_824651F0(*(undefined4 *)(param_1 + 0x440),param_1 + 0x124);
        uVar3 = lbl_831C6C64;
      }
      else {
        if (iVar1 != 0xb) goto LAB_8246f538;
        if (*(int *)(param_1 + 0x430) == 0) {
          if (*(int *)(param_1 + 0x434) == 0) goto LAB_8246f538;
          fn_82465548(*(undefined4 *)(param_1 + 0x440));
          cVar5 = fn_82534820(*(undefined4 *)(param_1 + 300));
          if (cVar5 != '\0') {
            fn_82536590(param_1 + 300,0);
          }
          goto LAB_8246f21c;
        }
        if (*(float *)(param_1 + 0x18) != lbl_821CC160) goto LAB_8246f538;
        fn_824651F0(*(undefined4 *)(param_1 + 0x440),param_1 + 0x128);
        uVar3 = lbl_831C6CA8;
      }
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      if (*(int *)(param_1 + 0x428) != 0) {
        fn_8228DD18();
      }
      goto LAB_8246f538;
    }
    if (*(int *)(param_1 + 0x45c) != 0) {
      if (*(int *)(param_1 + 0x14) == 4) {
        if (lbl_821CC160 < *(float *)(param_1 + 0x7c)) goto LAB_8246f538;
        iVar4 = *(int *)(param_1 + 0x8c);
        if (*(int *)(iVar4 + 4) == 2) {
          uVar7 = *(int *)(iVar4 + 0x30) + 1;
          uVar8 = (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c)) / 0x28 - 1;
          *(uint *)(iVar4 + 0x30) = uVar7 - (uVar7 / uVar8) * uVar8;
          *(undefined4 *)(iVar4 + 0xc) = lbl_831C6B98;
        }
        fn_824651F0(*(undefined4 *)(iVar4 + 8),
                          (ulonglong)*(uint *)(iVar4 + 0x30) * 0x28 +
                          (ulonglong)*(uint *)(iVar4 + 0x1c) + 0x20);
        *(undefined4 *)(param_1 + 0x7c) = lbl_831C6B8C;
        fn_8246F9F0(param_1,param_1 + 0xa4);
        piVar2 = *(int **)(param_1 + 0x444);
        if (*piVar2 != 4) {
          *piVar2 = 4;
          fn_82672C20(piVar2[1],0xffffffff821bc3ac,0,0);
        }
        uVar6 = 2;
      }
      else {
        if ((*(int *)(param_1 + 0x45c) == 0) || (*(int *)(param_1 + 0x14) != 3)) goto LAB_8246f430;
        if (lbl_821CC160 < *(float *)(param_1 + 0x7c)) goto LAB_8246f538;
        iVar4 = *(int *)(param_1 + 0x8c);
        if (*(int *)(iVar4 + 4) == 2) {
          uVar7 = *(int *)(iVar4 + 0x2c) + 1;
          uVar8 = (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c)) / 0x28 - 1;
          *(uint *)(iVar4 + 0x2c) = uVar7 - (uVar7 / uVar8) * uVar8;
          *(undefined4 *)(iVar4 + 0xc) = lbl_831C6B98;
        }
        fn_824651F0(*(undefined4 *)(iVar4 + 8),
                          (ulonglong)*(uint *)(iVar4 + 0x2c) * 0x28 +
                          (ulonglong)*(uint *)(iVar4 + 0x1c) + 0x20);
        *(undefined4 *)(param_1 + 0x7c) = lbl_831C6B8C;
        fn_8246F9F0(param_1,param_1 + 0xa4);
        piVar2 = *(int **)(param_1 + 0x444);
        if (*piVar2 != 3) {
          *piVar2 = 3;
          fn_82672C20(piVar2[1],0xffffffff821bc39c,0,0);
        }
        uVar6 = 1;
      }
      fn_82469038(*(undefined4 *)(param_1 + 0x418),uVar6);
      goto LAB_8246f538;
    }
LAB_8246f430:
    if (*(int *)(param_1 + 0x460) == 0) {
LAB_8246f474:
      if ((*(int *)(param_1 + 0x454) != 4) || (iVar4 == 0)) goto LAB_8246f538;
      iVar4 = *(int *)(param_1 + 0x14);
      if ((iVar4 == 2) || (iVar4 == 4)) {
        fn_8246FD00(param_1);
        iVar4 = *(int *)(param_1 + 8);
        fn_82460540(iVar4);
        fn_82460C90(iVar4,*(undefined4 *)(iVar4 + 0x28));
        uVar6 = 4;
        goto LAB_8246f4f4;
      }
      if (iVar4 != 3) goto LAB_8246f538;
      fn_8246FD00(param_1);
      uVar6 = 4;
    }
    else {
      if (*(int *)(param_1 + 0x14) != 4) {
        if ((*(int *)(param_1 + 0x460) != 0) && (*(int *)(param_1 + 0x14) == 3)) {
          uVar6 = 3;
          goto LAB_8246f4f0;
        }
        goto LAB_8246f474;
      }
      uVar6 = 3;
    }
    fn_82470E58(param_1,uVar6);
  }
LAB_8246f538:
  *(undefined4 *)(param_1 + 0x448) = lbl_831C6B88;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  return;
}

