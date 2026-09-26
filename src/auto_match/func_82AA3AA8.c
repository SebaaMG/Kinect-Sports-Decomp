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
extern int fn_82AA3400();
extern int fn_82AA3680();


undefined8
fn_82AA3AA8(undefined8 param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_4 < 0x24) {
    uVar1 = 0xffffffff80070057;
  }
  iVar2 = *(int *)((param_8 + 3) * 8 + param_3);
  if ((iVar2 != 0) && (iVar2 = iVar2 + param_3, -1 < (int)uVar1)) {
    if (param_2 == 0) {
      uVar1 = fn_82AA3400(iVar2,param_7,param_5,param_6,param_1);
    }
    else if (param_2 == 1) {
      uVar1 = fn_82AA3680(iVar2,param_7,param_5,param_6,param_1);
    }
    else {
      uVar1 = 0xffffffff80070057;
    }
  }
  return uVar1;
}

