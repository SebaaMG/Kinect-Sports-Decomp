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
extern unsigned int iStack_2c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82CF89A8(int *param_1)

{
  struct { undefined4 first; int second; } stack_pair_30;

  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&stack_pair_30.first);
  param_1[9] = stack_pair_30.second;
  return;
}

