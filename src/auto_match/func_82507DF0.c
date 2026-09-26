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
extern int fn_8251F720();
extern unsigned int lbl_821CC160;


undefined4 * fn_82507DF0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[5] = param_3;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = param_4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = *param_2;
  param_1[0x13] = iVar1;
  if (iVar1 != 0) {
    uVar2 = fn_8251F720(param_1 + 0x13,0);
    *param_1 = uVar2;
  }
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  param_1[2] = 0;
  uVar2 = lbl_821CC160;
  param_1[4] = lbl_821CC160;
  param_1[6] = 0;
  param_1[8] = uVar2;
  param_1[7] = 0;
  return param_1;
}

