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
extern int fn_82A40238();
extern int fn_82A40CF0();
extern int fn_82F68CC0();


int fn_82A413D8(int param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  int aiStack_30 [12];
  
  piVar1 = (int *)(param_1 + 0x2c);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar1);
  aiStack_30[0] = fn_82A40CF0(param_1);
  if (-1 < aiStack_30[0]) {
    if ((ulonglong)*(uint *)(param_1 + 0x98) <= (param_2 & 0xffffffff)) {
      aiStack_30[0] = -0x7769ffff;
    }
    if (-1 < aiStack_30[0]) {
      fn_82F68CC0(param_3,param_2 * 0x42c + (ulonglong)*(uint *)(param_1 + 0x9c),0x42c);
    }
  }
  (**(code **)(*piVar1 + 0x14))(piVar1);
  fn_82A40238(aiStack_30);
  return aiStack_30[0];
}

