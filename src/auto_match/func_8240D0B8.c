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
extern int fn_82F68CC0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B7E04;
extern unsigned int lbl_821CC160;


undefined4 * fn_8240D0B8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[2];
    uVar4 = param_2[1];
    param_1[4] = 5;
    param_1[6] = uVar1;
    param_1[5] = uVar2;
    param_1[8] = uVar3;
    param_1[7] = uVar4;
    param_1[3] = &lbl_821B7E04;
    param_1[9] = 0;
    fn_82F68CC0(param_1 + 10,param_2[6],0x2c);
    uVar2 = lbl_821CC160;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = param_2[7];
    param_1[0x18] = param_2[8];
    param_1[0x19] = param_2[4];
    param_1[0x1a] = param_2[5];
    param_1[0x1b] = param_2[9];
    uVar1 = param_2[10];
    param_1[0x1d] = uVar2;
    param_1[0x1c] = uVar1;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  return param_1;
}

