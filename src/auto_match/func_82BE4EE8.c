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
extern int fn_82BE1A10();
extern int fn_82BE1FF0();
extern int fn_82BEA398();
extern int fn_82BEF890();
extern unsigned int lbl_820E9238;
extern unsigned int lbl_831751CC;


void fn_82BE4EE8(undefined4 *param_1)

{
  int iVar2;
  undefined8 uVar1;
  
  *param_1 = &lbl_820E9238;
  if (param_1[2] == 0) {
    iVar2 = fn_82BE1A10();
    if (iVar2 != 0) {
      fn_82BE1A10();
      iVar2 = fn_82BE1FF0();
      if (iVar2 != 0) {
        fn_82BE1A10();
        uVar1 = fn_82BE1FF0();
        fn_82BEA398(uVar1,param_1);
      }
    }
  }
  else {
    fn_82BEF890(param_1[2],param_1);
  }
  if (param_1[1] != 0) {
    (*(code *)lbl_831751CC)();
    param_1[1] = 0;
  }
  return;
}

