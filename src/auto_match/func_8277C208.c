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


undefined8 fn_8277C208(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_2 < *(uint *)(param_1 + 0x120)) {
    iVar1 = *(int *)(param_1 + 0x11c) + param_2 * 0xc;
  }
  if (param_3 < *(uint *)(param_1 + 300)) {
    iVar2 = *(int *)(param_1 + 0x128) + param_3 * 0xc;
  }
  if (iVar1 != 0) {
    if (iVar2 == 0) goto code_r0x8277c27c;
    if (*(int *)(iVar1 + 8) == *(int *)(iVar2 + 8)) {
      return 0;
    }
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) == param_4)) {
    return 2;
  }
code_r0x8277c27c:
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == param_4)) {
    return 3;
  }
  return 0;
}

