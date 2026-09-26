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
extern unsigned int *auStack_20;
extern int fn_829E3EC8();


undefined8 fn_829E4450(int param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 auStack_20 [4];
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (param_2 == *(int *)(param_1 + 0xfc)) {
      auStack_20[0] = *(undefined4 *)(param_1 + 0x100);
    }
    else {
      uVar1 = fn_829E3EC8(param_1,param_2,auStack_20);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    *param_3 = auStack_20[0];
    uVar1 = 0;
  }
  return uVar1;
}

