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


undefined8 fn_829ABDA0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(*param_1 + 0x14) = 0x66;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x6f] + 0xc) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3d;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = 0;
  lVar2 = 0x10;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0xe8) = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 0xf8) = 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x108) = 5;
    iVar1 = iVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x46] = 0;
  param_1[10] = 0;
  param_1[0x4c] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)((int)param_1 + 0x121) = 1;
  *(undefined1 *)((int)param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x49) = 1;
  *(undefined2 *)((int)param_1 + 0x126) = 1;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1[0x6f] + 0xc) = 1;
  return 1;
}

