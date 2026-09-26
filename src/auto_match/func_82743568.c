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
extern int fn_82743460();
extern unsigned int lbl_820125C0;
extern unsigned int lbl_820126EC;
extern unsigned int lbl_820126F0;


undefined4 * fn_82743568(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  
  fn_82743460();
  *param_1 = &lbl_820126F0;
  param_1[4] = &lbl_820125C0;
  param_1[0xc] = &lbl_820126EC;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,0xffffffff82012550,auStack_20);
  return param_1;
}

