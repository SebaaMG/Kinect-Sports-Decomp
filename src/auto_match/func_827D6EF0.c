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
extern int fn_827D8978();


ulonglong fn_827D6EF0(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int aiStack_20 [4];
  
  fn_827D8978(aiStack_20,param_1 + 0x2d0,param_2);
  if (aiStack_20[0] == *(int *)(param_1 + 0x2d4)) {
    uVar1 = 0xffffffff83156a9c;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(aiStack_20[0] + 0xc);
  }
  return uVar1;
}

