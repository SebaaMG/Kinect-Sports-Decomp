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
extern unsigned int lbl_82192680;
extern unsigned int lbl_8219567C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B478;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825612B8(ulonglong param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)param_1;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = lbl_8326B430;
  uVar3 = lbl_8326B434;
  uVar5 = lbl_821CA460;
  uVar2 = lbl_82192680;
  param_3[3] = lbl_8326B434;
  uVar1 = lbl_821CC160;
  *param_4 = uVar2;
  param_3[4] = uVar5;
  param_3[5] = uVar1;
  if (param_2 != 2) {
    if (param_2 < 3) {
      return;
    }
    uVar5 = param_3[2];
    uVar1 = param_3[3];
    param_3[2] = uVar5 >> 1;
    param_3[3] = uVar1 >> 1;
    if (param_1 !=
        ((longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_1 & 1) != 0) & 0x7fffffff) << 1) {
      *param_3 = uVar5 >> 1;
    }
    if (iVar4 < 2) {
      return;
    }
    param_3[1] = uVar1 >> 1;
    return;
  }
  if (lbl_8326B478 != 0) {
    uVar5 = uVar3 >> 1;
    uVar5 = (uVar5 - (uVar5 - 1 & 0x1f)) + 0x1f;
    if (iVar4 == 0) {
      param_3[3] = uVar5;
    }
    else {
      param_3[1] = uVar5;
      param_3[3] = uVar3 - uVar5;
    }
    *param_4 = lbl_8219567C;
    return;
  }
  uVar5 = param_3[2] >> 1;
  uVar5 = (uVar5 - (uVar5 - 1 & 0x1f)) + 0x1f;
  if (iVar4 != 0) {
    *param_3 = uVar5;
    param_3[2] = param_3[2] - uVar5;
    return;
  }
  param_3[2] = uVar5;
  return;
}

