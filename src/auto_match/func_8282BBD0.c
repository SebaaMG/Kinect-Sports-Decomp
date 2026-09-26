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
extern int fn_82822F60();
extern int fn_828252E8();


void fn_8282BBD0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int aiStack_50 [20];
  
  aiStack_50[0] = fn_828252E8(param_1,0x28);
  *(undefined4 *)(aiStack_50[0] + 0x18) = param_2;
  *(undefined4 *)(aiStack_50[0] + 0x20) = param_5;
  *(undefined4 *)(aiStack_50[0] + 0x10) = param_4;
  *(undefined4 *)(aiStack_50[0] + 0x14) = param_3;
  *(undefined4 *)(aiStack_50[0] + 0x1c) = param_6;
  *(undefined4 *)(aiStack_50[0] + 0x24) = param_7;
  fn_82822F60(param_1 + 0x318,aiStack_50[0],0xffffffff8282b948,aiStack_50);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}

