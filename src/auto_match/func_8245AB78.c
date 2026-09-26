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
extern int fn_8245AAA8();
extern int fn_8245B458();
extern int fn_8245B630();
extern int fn_82A1DD38();


void fn_8245AB78(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ushort uVar5;
  ulonglong uVar4;
  
  iVar3 = (int)param_3;
  if (((iVar3 == 0xb) || (iVar3 == 5)) && (*(int *)(param_2 + 0x800bc) != 0)) {
    uVar2 = 0xc;
    goto LAB_8245ad5c;
  }
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(int *)(param_2 + 4) + 0x5c0);
  if (iVar3 == 0xb) {
    uVar5 = *(short *)(param_2 + 0x24) + 1;
    *(ushort *)(param_2 + 0x24) = uVar5;
    uVar1 = *(uint *)(param_2 + 0x80074);
    *(undefined4 *)(param_2 + 0x80088) = 0;
    if ((uint)*(ushort *)(param_2 + 0x26) <= (uint)uVar5) {
      uVar2 = 0xb;
      goto LAB_8245ad5c;
    }
    if ((uint)uVar5 == *(ushort *)(param_2 + 0x26) - 1) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x8006c) -
              (longlong)(int)(*(uint *)(param_2 + 0x8006c) / uVar1) * (longlong)(int)uVar1;
      if (uVar4 == 0) {
        uVar4 = (ulonglong)uVar1;
      }
      *(int *)(param_2 + 0x20) = (int)uVar4;
    }
    else {
      *(uint *)(param_2 + 0x20) = uVar1;
    }
    fn_82A1DD38(param_2 + 0x66,
                      (longlong)(int)(uint)*(ushort *)(param_2 + 0x24) * (longlong)(int)uVar1 +
                      (ulonglong)*(uint *)(param_2 + 0x80070),*(undefined4 *)(param_2 + 0x20));
    uVar4 = ((ulonglong)*(uint *)(param_2 + 0x80074) - (ulonglong)uVar1) +
            (ulonglong)*(uint *)(param_2 + 0x20);
LAB_8245acd0:
    uVar2 = fn_8245B458();
    iVar3 = fn_8245B630(uVar2,param_2 + 0xc,uVar4 + 0x5a,param_2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x588) == 0) {
LAB_8245ac74:
      uVar2 = 1;
      goto LAB_8245ad5c;
    }
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x6a4) == 3) {
      uVar2 = 10;
      goto LAB_8245ad5c;
    }
  }
  else {
    if (iVar3 != 5) {
      iVar3 = fn_8245B458();
      if (*(int *)(iVar3 + 0x588) != 0) {
        iVar3 = fn_8245B458();
        uVar2 = 2;
        if (*(int *)(iVar3 + 0x6a4) == 3) {
          uVar2 = param_3;
        }
        goto LAB_8245ad5c;
      }
      goto LAB_8245ac74;
    }
    iVar3 = *(int *)(param_2 + 0x80088) + 1;
    *(int *)(param_2 + 0x80088) = iVar3;
    if (iVar3 < 3) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x20);
      goto LAB_8245acd0;
    }
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x588) == 0) goto LAB_8245ac74;
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x6a4) == 3) {
      uVar2 = 5;
      goto LAB_8245ad5c;
    }
  }
  uVar2 = 2;
LAB_8245ad5c:
  fn_8245AAA8(param_2,uVar2);
  return;
}

