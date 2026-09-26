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
extern unsigned int *auStack_20;


undefined8 fn_82E2C268(int *param_1,uint *param_2)

{
  int iVar1;
  uint auStack_20 [4];
  
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff82153498,auStack_20);
  *param_2 = (uint)LZCOUNT(-(iVar1 >> 0x1f) - 1U & auStack_20[0]) >> 5;
  return 0;
}

