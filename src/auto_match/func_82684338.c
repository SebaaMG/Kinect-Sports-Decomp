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
extern int fn_82680B50();
extern int fn_82681320();
extern int fn_82683FF8();


undefined8
fn_82684338(int *param_1,int param_2,longlong param_3,ulonglong param_4,int *param_5,int *param_6,
             undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 4))();
  if (param_2 == 10) {
    if (param_5 != (int *)0x0) {
      pcVar1 = *(code **)(*param_5 + 8);
LAB_8268443c:
      uVar2 = (*pcVar1)(param_5,param_1,param_7);
      return uVar2;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff82005954;
  }
  else if (param_2 == 0xb) {
    if (param_6 != (int *)0x0) {
      pcVar1 = *(code **)(*param_6 + 4);
      param_5 = param_6;
      goto LAB_8268443c;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff8200598c;
  }
  else {
    if (param_2 == 0xd) {
      uVar2 = fn_82680B50(param_1,-(param_3 == 3) & 9,param_7);
      return uVar2;
    }
    if (param_2 == 0xe) {
      uVar2 = fn_82681320(param_1,param_7,uVar2);
      return uVar2;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff820059c4;
  }
  fn_82683FF8(param_4 + 0xc,uVar2);
  return 0;
}

