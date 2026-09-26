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
extern int fn_82246A40();
extern int fn_82247000();
extern int fn_82247068();
extern int fn_822471C8();
extern int fn_822473D0();
extern int fn_828AAF70();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828B0360();
extern int fn_828B0378();
extern unsigned int lbl_8329615C;


void fn_822467D8(int param_1)

{
  bool bVar1;
  char cVar6;
  int iVar3;
  longlong lVar2;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar7;
  int *piVar8;
  
  cVar6 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if (cVar6 == '\0') {
LAB_82246814:
    bVar1 = false;
  }
  else {
    cVar6 = fn_828AD740(*(undefined4 *)(param_1 + 8));
    bVar1 = true;
    if (cVar6 == '\0') goto LAB_82246814;
  }
  if (bVar1) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    cVar6 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x3c))();
    if (cVar6 != '\0') {
      cVar6 = fn_82247068(*(undefined4 *)(param_1 + 0x38),1);
      if (cVar6 == '\0') {
        lVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
        fn_828AAF70(lVar2 + 0x144,0);
      }
    }
  }
  uVar4 = fn_82247000(*(undefined4 *)(param_1 + 0x38));
  if (uVar4 == 0) {
    if (bVar1) goto LAB_82246948;
    iVar3 = 0;
    piVar8 = &lbl_8329615C;
    lVar2 = 4;
    do {
      if (*piVar8 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar8 = piVar8 + -0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (iVar3 != 1) goto LAB_82246948;
    cVar6 = fn_82246A40(param_1);
LAB_82246934:
    if (cVar6 == '\0') goto LAB_82246948;
LAB_8224693c:
    uVar5 = *(undefined4 *)(param_1 + 0x38);
LAB_82246940:
    uVar7 = 1;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 < 3) {
        if (bVar1) {
          cVar6 = fn_828B0360(*(undefined4 *)(param_1 + 8));
          if (cVar6 != '\0') {
            cVar6 = fn_828B0378(*(undefined4 *)(param_1 + 8));
            goto LAB_82246934;
          }
        }
        goto LAB_8224693c;
      }
      if (uVar4 != 3) goto LAB_82246948;
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      if (bVar1) {
        cVar6 = fn_822473D0(uVar5);
        goto LAB_82246934;
      }
      goto LAB_82246940;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar7 = 0;
  }
  fn_822471C8(uVar5,uVar7);
LAB_82246948:
  iVar3 = *(int *)(param_1 + 0x38);
  uVar5 = fn_82247000(iVar3);
  *(undefined4 *)(iVar3 + 0x84) = uVar5;
  return;
}

