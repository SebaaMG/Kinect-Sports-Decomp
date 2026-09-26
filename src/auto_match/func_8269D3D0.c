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
extern int fn_8268CC00();
extern int fn_8268D758();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82006850;
extern unsigned int lbl_820069EC;
extern unsigned int lbl_821AAD20;


undefined4 * fn_8269D3D0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  param_1[1] = 1;
  param_1[3] = &lbl_82005700;
  *param_1 = &lbl_82006850;
  param_1[3] = &lbl_820069EC;
  uVar1 = lbl_821AAD20;
  param_1[4] = *param_3;
  param_1[7] = uVar1;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[8] = param_2;
  fn_8268D758(param_1 + 9);
  fn_8268CC00(param_1 + 0x11);
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  return param_1;
}

