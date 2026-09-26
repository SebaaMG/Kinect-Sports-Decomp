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
extern int fn_8267C4C8();
extern int fn_8267C4F0();


ulonglong fn_827531E8(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_2;
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != iVar1) {
    if (iVar1 != 0) {
      fn_8267C4C8(param_2);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0xc) = iVar1;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x10) != (param_3 & 0xffffffff)) {
    uVar2 = 1;
    if ((param_3 & 0xffffffff) != 0) {
      fn_8267C4C8(param_3);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0x10) = (int)param_3;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x14) != (param_4 & 0xffffffff)) {
    uVar2 = uVar2 | 2;
    if ((param_4 & 0xffffffff) != 0) {
      fn_8267C4C8(param_4);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0x14) = (int)param_4;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x18) != (param_5 & 0xffffffff)) {
    uVar2 = 3;
    if ((param_5 & 0xffffffff) != 0) {
      fn_8267C4C8(param_5);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0x18) = (int)param_5;
  }
  return uVar2;
}

