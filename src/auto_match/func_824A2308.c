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
extern int fn_82F4FEB8();
extern int fn_82F51A50();
extern int fn_82F520B0();
extern unsigned int lbl_821955D8;
extern unsigned int lbl_821BF554;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 * fn_824A2308(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  fn_82F51A50();
  param_1[2] = param_2;
  uVar3 = lbl_821CC160;
  uVar1 = lbl_821955D8;
  param_1[6] = 0;
  uVar2 = lbl_821CA460;
  *param_1 = &lbl_821BF554;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar4 = fn_82F4FEB8();
  fn_82F520B0(param_1,uVar4,0);
  return param_1;
}

