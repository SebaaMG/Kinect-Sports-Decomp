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
extern int fn_82A2F770();


undefined8 fn_82A30800(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_82A2F770(param_1,*(undefined4 *)(param_2 + 0x20),0,0);
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x10;
  }
  return uVar1;
}

