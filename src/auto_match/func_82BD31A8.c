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
extern unsigned int lbl_8316FF50;


void fn_82BD31A8(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_2 + 0xe4) >> 1 & 1) == 0) {
    uVar1 = *(uint *)(&lbl_8316FF50 + *(int *)(param_2 + 0x18) * 0x34) >> 3 & 1;
  }
  else {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    return;
  }
  if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_2 + 0x18) * 0x34) >> 2 & 1) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    return;
  }
  if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_2 + 0x18) * 0x34) >> 1 & 1) == 0) {
    return;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}

