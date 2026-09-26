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
extern int fn_8306D020();
extern int fn_8306D1B8();


void fn_8306D398(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  fn_8306D1B8(param_2,param_2 + 0xb330,1);
  fn_8306D1B8(param_2,param_2 + 0xc0e0,0);
  fn_8306D020(param_1,param_2,param_2 + 0xb330);
  fn_8306D020(param_1,param_2,param_2 + 0xc0e0);
  piVar3 = (int *)0x831bca68;
  param_2 = param_2 + 0xce90;
  lVar2 = 0x48;
  do {
    if ((*piVar3 == 0) || (lVar1 = param_2 + -0xdb0, *piVar3 != 1)) {
      lVar1 = param_2 + -0x1b60;
    }
    fn_82F68CC0(param_2,lVar1,0x30);
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 0x30;
  } while (lVar2 != 0);
  return;
}

