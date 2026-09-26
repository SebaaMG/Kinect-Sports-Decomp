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
extern int fn_825A14E8();


undefined8 fn_82573DA0(int param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x8ac) = param_2;
  if (*(int *)(param_1 + 0x8a4) != 0) {
    *(int *)(param_1 + 0x8a4) = *(int *)(param_1 + 0x8a4) + -1;
    *(int *)(param_1 + 0x7d8) = *(int *)(param_1 + 0x7d8) + -1;
  }
  *(int *)(param_1 + 0x7d4) = *(int *)(param_1 + 0x7d4) + 1;
  *(undefined4 *)(param_1 + 0x8ac) = 2;
  iVar1 = *(int *)(param_1 + 0xb10);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x8a0) != 0)) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x8a8) - 1;
    *(int *)(param_1 + 0x8a8) = (int)lVar2;
    if (lVar2 == 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
    }
    else {
      fn_825A14E8();
    }
  }
  return 1;
}

