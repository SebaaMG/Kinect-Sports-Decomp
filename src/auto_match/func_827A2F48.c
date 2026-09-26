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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015C00;
extern unsigned int lbl_821AAD20;


void fn_827A2F48(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  param_1[1] = 1;
  *param_1 = &lbl_82015C00;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = lbl_821AAD20;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[9] = uVar3;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  uVar2 = lbl_82005710;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  param_1[7] = 0xff000000;
  param_1[0x15] = 0;
  uVar1 = lbl_8200133C;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  param_1[0x12] = uVar1;
  param_1[9] = uVar3;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0x16] = 0xff000000;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xff808080;
  param_1[0x19] = 0xffffffff;
  return;
}

