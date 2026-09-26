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
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_820885A0;
extern unsigned int lbl_8208DD8C;
extern unsigned int lbl_8208DD90;
extern unsigned int lbl_82186E6C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82E34AF8(ulonglong param_1,ulonglong param_2,ushort param_3,float *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if ((((param_3 < 0x167) && (0x160 < param_3)) && (param_3 != 0x163)) &&
     (((param_3 != 0x164 && (param_3 != 0x167)) &&
      (((int)param_2 != 0 && (param_4 != (float *)0x0)))))) {
    uVar2 = ((param_1 & 0x7fffffff) << 1) / (param_2 & 0xffffffff);
    trapWord(6,param_2,0);
    if (0x2edff < uVar2) {
      *param_4 = lbl_8208DD90 / (float)uVar2;
      return uVar1;
    }
    if (0x1f3ff < uVar2) {
      *param_4 = lbl_8208DD90 / (float)uVar2;
      return uVar1;
    }
    if (95999 < uVar2) {
      *param_4 = lbl_820885A0 / (float)uVar2;
      return uVar1;
    }
    if (79999 < uVar2) {
      *param_4 = lbl_82005718;
      return uVar1;
    }
    if (63999 < uVar2) {
      *param_4 = lbl_8208DD8C;
      return uVar1;
    }
    if (47999 < uVar2) {
      *param_4 = lbl_82186E6C;
      return uVar1;
    }
    if (39999 < uVar2) {
      *param_4 = lbl_82002C2C;
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

