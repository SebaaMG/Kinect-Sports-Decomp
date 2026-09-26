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
extern int fn_82E4F2B8();
extern int fn_82EDE890();
extern int fn_82EDFDE0();


undefined8
fn_82E99CD0(int param_1,ulonglong param_2,ulonglong param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  
  if ((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
     (((param_4 < 0 || (3 < param_4)) && (param_4 != -1)))) {
    uVar1 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x395c) = param_5;
    if (param_4 != -1) {
      *(int *)(param_1 + 0x393c) = param_4;
      uVar1 = fn_82EDE890(param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = fn_82E4F2B8(param_1);
    if ((int)uVar1 == 0) {
      uVar1 = fn_82EDFDE0(param_2,param_3,param_1,0,0);
    }
  }
  return uVar1;
}

