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
extern int fn_82EDE890();
extern int fn_82EDFDE0();
extern int fn_82F45228();


undefined8
fn_82F17548(int param_1,ulonglong param_2,ulonglong param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
LAB_82f17590:
    uVar1 = 1;
  }
  else {
    if ((param_4 < 0) || (3 < param_4)) {
      if (param_4 != -1) goto LAB_82f17590;
    }
    else if (param_4 != -1) {
      *(int *)(param_1 + 0x393c) = param_4;
      uVar1 = fn_82EDE890(param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = fn_82F45228(param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = fn_82EDFDE0(param_2,param_3,param_1,param_5,param_6);
  }
  return uVar1;
}

