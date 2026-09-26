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


undefined8 fn_82D4BB40(int param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((*(char *)(*(int *)(param_1 + 0x14) + 0x2c) != '\x01') &&
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x18))
                         (*(int **)(param_1 + 0x34),param_2,0x100), -1 < iVar1)) && (iVar1 < 0x101))
  {
    *(int *)(param_1 + 0x38) = iVar1;
    return 0x40;
  }
  return 0xffffffffffffffff;
}

