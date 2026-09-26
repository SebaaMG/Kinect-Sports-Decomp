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
extern int fn_82292780();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_82022AF0;
extern unsigned int lbl_821AAD20;


undefined4 * fn_8287A458(double param_1,double param_2,double param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_4[1] = (float)param_1;
  param_4[2] = (float)param_2;
  param_4[4] = (float)param_3;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82005C88;
  *(undefined1 *)(param_4 + 7) = 0;
  param_4[3] = uVar2;
  *param_4 = &lbl_82022AF0;
  param_4[5] = uVar2;
  *(undefined1 *)(param_4 + 10) = 0;
  param_4[6] = uVar2;
  param_4[8] = uVar2;
  param_4[9] = uVar2;
  param_4[0xb] = uVar2;
  param_4[0xc] = uVar1;
  fn_82292780(param_4 + 0xd);
  return param_4;
}

