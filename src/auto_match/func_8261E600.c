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
extern int fn_8261E8E8();
extern int fn_8261FF40();
extern int fn_826200B0();
extern unsigned int lbl_821CC160;


undefined8 fn_8261E600(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x21c);
  if (iVar4 == 2) {
    if ((*(int *)(param_1 + 0x330) == 0) || ((*(uint *)(param_1 + 0x310) & 0x40) != 0))
    goto LAB_8261e634;
LAB_8261e66c:
    if (*(int *)(param_1 + 0x218) == 2) goto LAB_8261e634;
  }
  else {
    if ((iVar4 != 1) && (iVar4 != 0)) goto LAB_8261e66c;
LAB_8261e634:
    iVar4 = *(int *)(param_1 + 0x218);
    if (iVar4 == 2) {
      if ((*(int *)(param_1 + 0x330) == 0) || ((*(uint *)(param_1 + 0x310) & 0x40) != 0)) {
LAB_8261e690:
        iVar4 = 0x10;
        if (*(char *)(param_1 + 0x200) != '\x03') {
          iVar4 = 0x20;
        }
      }
    }
    else if ((iVar4 == 1) || (iVar4 == 0)) goto LAB_8261e690;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  if (((param_2 == 0) || (param_3 == 0)) || (*(int *)(param_1 + 0x1fc) == 0)) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 == 0) {
      uVar3 = fn_8261FF40(param_1,param_2,param_3,*(undefined4 *)(param_2 + 8));
    }
    else {
      if (iVar2 == 1) {
        uVar5 = 0;
      }
      else {
        if (iVar2 != 3) {
          uVar3 = 0;
          goto LAB_8261e710;
        }
        uVar5 = 1;
      }
      uVar3 = fn_826200B0(param_1,param_2,param_3,*(undefined4 *)(param_2 + 8),uVar5);
    }
LAB_8261e710:
    *(undefined4 *)(param_1 + 0x1f8) = uVar3;
  }
  if (iVar4 == iVar1) {
    return 0;
  }
  if (iVar4 == 2) {
    iVar2 = *(int *)(param_1 + 0x330);
    if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x310) & 0x40) != 0)) {
      if ((param_2 != 0) && (param_3 != 0)) {
        iVar4 = fn_8261E8E8(param_1);
      }
      if (iVar4 == iVar1) {
        return 0;
      }
      if (iVar4 != 2) goto LAB_8261e79c;
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0x310) & 0x40) != 0) {
        return 0;
      }
    }
  }
  else {
LAB_8261e79c:
    if (iVar1 != 2) goto LAB_8261e7c0;
  }
  uVar3 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x450) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x44c) = uVar3;
  *(undefined4 *)(param_1 + 0x448) = uVar3;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
LAB_8261e7c0:
  if (*(int *)(param_1 + 0x22c) == 0) {
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x220);
  }
  *(int *)(param_1 + 0x220) = iVar4;
  *(undefined4 *)(param_1 + 0x228) = 1;
  *(uint *)(param_1 + 0x22c) = (uint)LZCOUNT(iVar4 - *(int *)(param_1 + 0x21c)) >> 5;
  return 1;
}

