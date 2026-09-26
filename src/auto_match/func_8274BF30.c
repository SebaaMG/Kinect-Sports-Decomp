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
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8271F558();
extern unsigned int lbl_8200F0B0;
extern unsigned int lbl_82010284;
extern unsigned int lbl_82013318;


undefined4 * fn_8274BF30(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  
  fn_8271F558();
  *param_1 = &lbl_82010284;
  param_1[4] = &lbl_82013318;
  param_1[0xc] = &lbl_8200F0B0;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,0xffffffff820131b0,auStack_20);
  return param_1;
}

