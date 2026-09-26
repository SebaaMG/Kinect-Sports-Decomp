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
extern int fn_827845D8();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int uStack_2c;


void fn_82784648(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int aiStack_40 [3];
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  aiStack_40[2] = *(undefined4 *)(param_1 + 8);
  aiStack_40[1] = 0;
  aiStack_40[0] = param_1;
  iStack_34 = param_2;
  iStack_30 = param_3;
  uStack_2c = param_4;
  fn_827845D8(param_1 + 0x18,aiStack_40);
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  *(uint *)(param_1 + 0x28) =
       *(int *)((uVar1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) + (uVar1 & 0x3f) * 0x18;
  if (-1 < param_2) {
    if (param_2 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x2c) = param_2;
    }
    if (*(int *)(param_1 + 0x30) < param_2) {
      *(int *)(param_1 + 0x30) = param_2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x2c) = param_3;
    }
    if (*(int *)(param_1 + 0x30) < param_3) {
      *(int *)(param_1 + 0x30) = param_3;
    }
  }
  return;
}

