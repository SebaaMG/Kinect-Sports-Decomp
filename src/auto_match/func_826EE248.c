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
extern int fn_8277B988();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8CC;


undefined4 *
fn_826EE248(double param_1,double param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  
  *param_3 = &lbl_8200D8CC;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  fn_8277B988(param_3 + 0xd,0,0,0);
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  uVar1 = lbl_82002AE0;
  param_3[1] = (float)param_1;
  *(undefined1 *)(param_3 + 5) = param_6;
  param_3[2] = (float)param_2;
  *(undefined1 *)((int)param_3 + 0x15) = 0;
  param_3[3] = uVar1;
  *(undefined1 *)((int)param_3 + 0x16) = 0;
  param_3[4] = uVar1;
  *(undefined1 *)((int)param_3 + 0x17) = 0;
  *(undefined1 *)(param_3 + 6) = param_7;
  *(undefined1 *)((int)param_3 + 0x19) = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  return param_3;
}

