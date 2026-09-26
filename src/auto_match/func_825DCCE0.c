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
extern int fn_8261E878();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CC160;


void fn_825DCCE0(double param_1,double param_2,double param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_4 + 0x1f8);
  iVar2 = *(int *)(param_5 + 0xf98);
  *(float *)(param_5 + 0xfac) = (float)((double)*(float *)(param_5 + 0xfac) + param_3);
  uVar3 = *(uint *)(param_5 + 0xfa8) & uVar1;
  *(uint *)(param_5 + 0xfa8) = uVar3;
  if (*(int *)(param_5 + 0xf94) == 0) {
    if (uVar1 == 0) {
      *(undefined4 *)(param_5 + 0xf98) = 0;
    }
    else {
      if ((*(char *)(param_5 + 0x262) != '\0') && (iVar2 == 0)) {
        if (((double)lbl_821917C0 < ABS(param_1)) || ((double)lbl_821917C0 < ABS(param_2))) {
          *(undefined4 *)(param_5 + 0xf94) = 1;
          iVar4 = param_4 + 0x640;
          goto LAB_825dcd48;
        }
      }
      if ((*(char *)(param_5 + 0x261) != '\0') && (uVar3 == 0)) {
        *(undefined4 *)(param_5 + 0xf98) = 1;
      }
    }
  }
  else if ((uVar1 != 0) && (*(int *)(param_5 + 0xf9c) == 0)) {
    *(undefined4 *)(param_5 + 0xf94) = 0;
    iVar4 = param_4 + 0x644;
LAB_825dcd48:
    *(undefined4 *)(param_5 + 0xfa8) = 1;
    *(undefined4 *)(param_5 + 0xfac) = lbl_821CC160;
    fn_8261E878(param_4,iVar4);
  }
  if (*(char *)(param_5 + 0x262) == '\0') {
    *(undefined4 *)(param_5 + 0xf94) = 0;
  }
  iVar4 = *(int *)(param_5 + 0xf98);
  *(uint *)(param_5 + 0xf9c) = uVar1;
  if ((iVar4 != 0) || (uVar5 = 1, iVar2 == 0)) {
    uVar5 = 0;
  }
  *(undefined4 *)(param_5 + 0xf24) = uVar5;
  if (iVar4 != iVar2) {
    if (((*(uint *)(param_4 + 0x310) & 0x100) == 0) && (uVar5 = 1, *(int *)(param_4 + 0x220) != 2))
    goto LAB_825dce34;
  }
  uVar5 = 0;
LAB_825dce34:
  *(undefined4 *)(param_5 + 0xf20) = uVar5;
  if ((iVar4 == 0) || (uVar5 = 1, *(char *)(param_5 + 0x385) == '\0')) {
    uVar5 = 0;
  }
  *(undefined4 *)(param_5 + 0xf98) = uVar5;
  return;
}

