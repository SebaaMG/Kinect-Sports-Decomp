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
extern int fn_82EDF318();


undefined8 fn_82EDFDE0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(int *)(param_3 + 0xc) == 0) {
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x34) + param_1;
  }
  else if (*(int *)(param_3 + 0xc) == 1) {
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x38) + param_1;
    if (param_4 == 0) {
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x3c) + param_1;
    }
    else {
      *(int *)(param_3 + 0x1c) = param_4;
    }
    if (param_5 == 0) {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x40) + param_1;
    }
    else {
      *(int *)(param_3 + 0x20) = param_5;
    }
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x44) + param_2;
  }
  else if (*(int *)(param_3 + 0x10) == 1) {
    *(int *)(param_3 + 0x28) = param_2;
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x48) + param_2;
    *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x4c) + param_2;
  }
  if (*(int *)(param_3 + 0x38dc) == 1) {
    fn_82EDF318(param_3);
  }
  return 0;
}

