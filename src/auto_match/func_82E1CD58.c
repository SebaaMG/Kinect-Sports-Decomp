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
extern int fn_8265C9E0();


undefined8 fn_82E1CD58(int param_1,ulonglong param_2)

{
  undefined4 uVar2;
  longlong lVar1;
  
  uVar2 = fn_8265C9E0(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  lVar1 = (param_2 & 0x3fffffff) << 2;
  if (0x3fffffff < (param_2 & 0xffffffff)) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C9E0(lVar1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  lVar1 = (param_2 & 0x3fffffff) << 2;
  if (0x3fffffff < (param_2 & 0xffffffff)) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C9E0(lVar1);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(int *)(param_1 + 0x14) = (int)param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return 0;
}

