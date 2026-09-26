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
extern int fn_82AB71F0();
extern int fn_82AB7550();
extern unsigned int lbl_8316E564;


undefined8
fn_82B9C418(ulonglong param_1,undefined8 param_2,ulonglong param_3,code *param_4,ulonglong param_5
             )

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0x90c);
  }
  iVar3 = fn_82AB71F0(param_1,0x25,param_2);
  bVar1 = (param_3 & 0xffffffff) != 0;
  if (iVar3 == 0) {
    if (bVar1) {
      fn_82AB7550(param_3,0x22,0,1);
    }
    if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
      (*param_4)(param_5,0xffffffff820ddb70,lbl_8316E564,0x39,param_2,1)
      ;
    }
    uVar2 = 1;
  }
  else {
    if (bVar1) {
      fn_82AB7550(param_3,0x22,0,0);
    }
    if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
      (*param_4)(param_5,0xffffffff820ddb70,lbl_8316E564,0x39,param_2,0)
      ;
    }
    uVar2 = 0;
  }
  return uVar2;
}

