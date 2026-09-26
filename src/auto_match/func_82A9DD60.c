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
extern unsigned int *auStack_10;
extern int fn_82A9D3D8();


void fn_82A9DD60(int param_1,uint param_2,int param_3,uint param_4)

{
  uint auStack_10 [4];
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    auStack_10[0] = (param_4 & 0xf) << 0x10 | (param_3 << 4 | param_2 & 0xf) << 0x14;
    fn_82A9D3D8(*(undefined4 *)(param_1 + 0x50),auStack_10,param_1 + 0x90);
  }
  return;
}

