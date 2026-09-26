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
extern unsigned int uStack_10;
extern unsigned int uStack_e;


void fn_82C2D0A0(int param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 uStack_10;
  undefined1 uStack_e;
  
  uStack_e = (undefined1)((uint)(param_1 << 4) >> 8);
  uStack_10 = (undefined2)((uint)(param_1 << 4) >> 0x10);
  puVar1 = (undefined2 *)(param_4 * 3 + param_2);
  *puVar1 = uStack_10;
  *(undefined1 *)(puVar1 + 1) = uStack_e;
  return;
}

