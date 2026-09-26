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
extern int fn_82A1F2F8();
extern int fn_82E23978();


undefined8
fn_82E22F48(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x17c) != 0)) {
    uVar2 = 0x15;
  }
  else {
    if ((int)param_4 == -1) {
      lVar1 = fn_82A1F2F8(param_1,param_2,param_4);
      param_4 = (lVar1 - (ulonglong)*(uint *)(param_1 + 0x164)) -
                (ulonglong)*(uint *)(param_1 + 0x154);
    }
    uVar2 = fn_82E23978(param_1 + 0x30,param_2,param_4,param_3,param_5);
  }
  return uVar2;
}

