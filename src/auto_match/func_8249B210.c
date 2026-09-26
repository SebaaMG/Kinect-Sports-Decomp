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
extern int fn_82264F18();
extern int fn_8249ABC0();
extern int fn_825129C8();
extern int fn_82512C30();
extern int fn_82A1C0C0();
extern int fn_82F4DA20();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832960A0;


int fn_8249B210(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = 0;
  if ((((*(int *)(param_1 + 0x88) != 0) && (*(int *)(param_1 + 0x98) == 0)) &&
      (*(int *)(param_1 + 8) != 3)) && ((lbl_832960A0 == 0 && (lbl_83265988 != 0)))) {
    iVar1 = fn_82512C30();
    for (iVar4 = *(int *)(iVar1 + 0x14); iVar4 != *(int *)(iVar1 + 0x18); iVar4 = iVar4 + 0xc) {
      if (*(int *)(iVar4 + 8) != 0) goto LAB_8249b2b0;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar2 = fn_825129C8(1);
      *(undefined4 *)(param_1 + 0x98) = uVar2;
    }
    iVar8 = 1;
  }
LAB_8249b2b0:
  iVar4 = 0;
  lVar9 = 0;
  iVar1 = -1;
  iVar3 = fn_82F4DA20(2);
  iVar6 = 0;
  piVar7 = (int *)(iVar3 + 0x34);
  lVar10 = 6;
  do {
    if ((piVar7[-1] == 2) && (lVar9 = lVar9 + 1, iVar1 == -1)) {
      iVar4 = *piVar7;
      iVar1 = iVar6;
    }
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 0x70;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (iVar8 == 0) {
    if ((iVar4 == -1) && (param_2 == 0)) {
      return 0;
    }
    fn_82A1C0C0(0);
  }
  if (param_2 == 0) {
    iVar4 = fn_8249ABC0();
    if ((*(int *)(iVar4 + 8) == 2) || (uVar5 = 0, *(int *)(iVar4 + 8) == 1)) {
      uVar5 = 1;
    }
    fn_82264F18(iVar8,uVar5,lVar9);
  }
  return iVar8;
}

