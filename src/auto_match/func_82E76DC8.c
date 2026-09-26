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


bool fn_82E76DC8(undefined8 param_1,int param_2)

{
  if ((((param_2 != 0) && (*(ushort *)(param_2 + 0x1f) < 9)) && (*(uint *)(param_2 + 0xb) < 0x100))
     && (*(int *)(param_2 + 7) == 0)) {
    return *(uint *)(param_2 + 0x1b) == *(uint *)(param_2 + 0xb);
  }
  return false;
}

