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
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern unsigned int lbl_8316E574;


undefined8 fn_82B9CD20(undefined8 param_1,undefined4 *param_2,code *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_82AB6EC0(param_1,0x237);
  iVar2 = fn_82AB6EC0(param_1,0x3ce);
  if (iVar1 == 2) {
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else if (iVar2 == 1) {
      uVar3 = 5;
    }
    else if (iVar2 == 3) {
      uVar3 = 8;
    }
    else {
      if (iVar2 != 2) goto LAB_82b9cda0;
      uVar3 = 0xb;
    }
    *param_2 = uVar3;
  }
  else {
LAB_82b9cda0:
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820ddb08,0xb00);
  }
  if ((param_3 != (code *)0x0) && ((param_4 & 0xffffffff) != 0)) {
    (*param_3)(param_4,0xffffffff820ddaf8,lbl_8316E574,0x3d,*param_2);
  }
  return 1;
}

