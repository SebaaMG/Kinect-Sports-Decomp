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
extern int fn_82DD77B0();


int fn_82D5B2B0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  fn_82DD77B0(param_2 + 0xc,param_3,param_4);
  bVar1 = *(byte *)(param_2 + 0xe);
  bVar2 = *(byte *)(param_2 + 0xd);
  bVar3 = *(byte *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 2) = 0;
  return (((uint)bVar1 * 4 + (uint)bVar2 + (uint)bVar3 + 2) * 2 + 0x1b & 0xfffffff0) + param_2;
}

