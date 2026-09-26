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
extern int fn_829D4A28();
extern int fn_829DCFB0();


void fn_829DD268(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int aiStack_60 [24];
  
  uVar2 = 700 - *(int *)(param_1 + 0x24b1c8);
  uVar1 = *(uint *)(param_1 + 0xf4a10);
  if (uVar2 <= *(uint *)(param_1 + 0xf4a10)) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      fn_829D4A28(param_1 + 0xf4a18,
                      ((*(int *)(param_1 + 0xf4a14) + uVar2) % 500) * 0x7d4 + param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  aiStack_60[0] = param_1 + 0xf4a18;
  fn_829DCFB0(*(int *)(param_1 + 0x24b1c8),param_2,aiStack_60,param_3);
  return;
}

