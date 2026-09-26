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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280FC78(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_2 = *param_1;
  param_2[4] = param_1[1];
  param_2[8] = param_1[2];
  uVar2 = lbl_821AAD20;
  param_2[0xc] = lbl_821AAD20;
  param_2[1] = param_1[3];
  param_2[5] = param_1[4];
  param_2[9] = param_1[5];
  param_2[0xd] = uVar2;
  param_2[2] = param_1[6];
  param_2[6] = param_1[7];
  uVar1 = lbl_82002AE0;
  param_2[10] = param_1[8];
  param_2[0xe] = uVar2;
  param_2[3] = uVar2;
  param_2[7] = uVar2;
  param_2[0xb] = uVar2;
  param_2[0xf] = uVar1;
  return;
}

