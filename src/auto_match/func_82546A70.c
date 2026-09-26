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
extern int fn_82560690();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195694;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B478;


undefined8
fn_82546A70(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = fn_82560690(0);
  uVar2 = lbl_821CC160;
  uVar5 = lbl_821CA460;
  uVar3 = lbl_82192734;
  if (iVar6 < 2) {
LAB_82546ca4:
    uVar2 = uVar5;
    *param_2 = uVar3;
    *param_3 = uVar2;
LAB_82546cac:
    *param_4 = uVar2;
    *param_5 = uVar3;
    return 1;
  }
  if (param_1 == 0) {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *param_3 = lbl_821CA460;
LAB_82546bb8:
        *param_4 = uVar5;
        *param_2 = uVar3;
        *param_5 = uVar2;
        return 1;
      }
      if (iVar6 != 4) {
        return 0;
      }
      *param_3 = lbl_821CC160;
      *param_2 = uVar3;
      goto LAB_82546b98;
    }
    if (lbl_8326B478 != 0) {
      *param_3 = lbl_821CA460;
      uVar2 = lbl_82195694;
      goto LAB_82546bb8;
    }
    *param_3 = lbl_821CC160;
    uVar4 = uVar5;
  }
  else {
    if (param_1 != 1) {
      if (param_1 < 3) {
        if (iVar6 == 2) {
          return 0;
        }
        uVar4 = lbl_82192734;
        if (iVar6 != 3) {
joined_r0x82546b48:
          uVar5 = uVar2;
          uVar3 = uVar4;
          if (iVar6 != 4) {
            return 0;
          }
          goto LAB_82546ca4;
        }
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        if (iVar6 < 2) {
          return 0;
        }
        if (iVar6 < 4) {
          return 0;
        }
        if (iVar6 != 4) {
          return 0;
        }
      }
      *param_3 = lbl_821CA460;
      uVar3 = lbl_82192734;
      *param_2 = uVar2;
      goto LAB_82546cac;
    }
    if (iVar6 != 2) {
      uVar5 = lbl_821CC160;
      uVar2 = lbl_821CA460;
      uVar4 = lbl_821CC160;
      if (iVar6 != 3) goto joined_r0x82546b48;
      goto LAB_82546ca4;
    }
    bVar1 = lbl_8326B478 == 0;
    *param_3 = lbl_821CA460;
    uVar4 = lbl_82195694;
    uVar3 = lbl_821CC160;
    uVar2 = lbl_82192734;
    if (bVar1) goto LAB_82546bb8;
  }
  uVar2 = lbl_82192734;
  *param_2 = lbl_82192734;
  uVar5 = uVar4;
LAB_82546b98:
  *param_4 = uVar5;
  *param_5 = uVar2;
  return 1;
}

