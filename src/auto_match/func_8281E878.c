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
extern unsigned int *auStack_50;
extern int fn_8280E890();
extern int fn_8280F098();


void fn_8281E878(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [64];
  
  fn_8280E890(param_1,auStack_50,param_2 + 4,param_2 + 8,param_3,param_2);
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else if ((param_3 & 0xffffffff) == 1) {
    uVar1 = 1;
  }
  else if ((param_3 & 0xffffffff) < 3) {
    uVar1 = 2;
  }
  else if ((param_3 & 0xffffffff) == 4) {
    uVar1 = 4;
  }
  else if ((param_3 & 0xffffffff) == 5) {
    uVar1 = 5;
  }
  else {
    if ((param_3 & 0xffffffff) != 6) {
      return;
    }
    uVar1 = 6;
  }
  fn_8280F098(auStack_50,uVar1);
  return;
}

