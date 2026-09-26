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


int fn_82636080(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((((((~(ulonglong)*(uint *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) & 0xffffffff) >> 4 & 1) != 0)
       && (param_1[iVar1 * 0x9b4 + 0x20] != 0)) &&
      (iVar2 = param_1[iVar1 * 0x9b4 + 0x1f] + param_1[iVar1 * 0x9b4 + 0x20] * 8, iVar2 != 8)) &&
     ((1 << (*(uint *)(iVar2 + -4) >> 0xc & 0xf) & 0x607eU) != 0)) {
    param_1[iVar1 * 0x9b4 + 0x22] = 1;
  }
  return param_1[iVar1 * 0x9b4 + 0x20];
}

