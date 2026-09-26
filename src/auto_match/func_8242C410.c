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


ulonglong fn_8242C410(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c),
     (*(int *)(iVar1 + 0x1c8) - *(int *)(iVar1 + 0x1c4) & 0xfffffffcU) != 4)) {
    return (longlong)((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
  }
  return (ulonglong)*(uint *)(*(int *)(param_1 + 0x174) + 0xbc);
}

