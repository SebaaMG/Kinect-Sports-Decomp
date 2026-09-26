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


undefined8 fn_82AB8228(double param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3 * 0x24 + param_2;
  uVar1 = *(uint *)(iVar2 + 0x10);
  *(uint *)(iVar2 + 0x10) =
       (1 << (param_4 & 0x3f) & 0xfU) << 0x14 | uVar1 & 0xfff00fff |
       (~(3 << (param_4 << 1 & 0x3e)) << 0xc & uVar1 | (0 << (param_4 << 1 & 0x3e)) << 0xc) &
       0xff000;
  *(float *)(param_4 * 8 + param_3 * 0x24 + param_2 + 0x14) = (float)param_1;
  return 0;
}

