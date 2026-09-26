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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_829F4980();


undefined8
fn_829F4B50(ulonglong param_1,ulonglong param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined1 *param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [72];
  
  if (((((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) || (param_3 < 0)) ||
     (5 < param_3)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (param_6 == (undefined1 *)0x0) {
      fn_8263C7D8(param_1,0,auStack_50,0,0x10);
      param_6 = auStack_50;
    }
    if (param_7 == (undefined1 *)0x0) {
      fn_8263C7D8(param_2,0,auStack_48,0,0x10);
      param_7 = auStack_48;
    }
    if ((*(int *)(param_7 + 4) == 0) || (*(int *)(param_6 + 4) == 0)) {
      fn_8263C620(param_1,0);
      fn_8263C620(param_2,0);
      uVar1 = 0xffffffff80004005;
    }
    else {
      fn_829F4980();
      fn_8263C620(param_1,0);
      fn_8263C620(param_2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}

