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


uint fn_82547CF0(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = -(int)LZCOUNT(param_4);
  uVar2 = (param_2 & 6) * 4 + (param_1 & 7) << (iVar1 + 0x1fU & 0x3f);
  uVar2 = ((param_3 + 0x1fU >> 5) * (param_2 >> 5) + (param_1 >> 5) << (iVar1 + 0x26U & 0x3f)) +
          ((param_2 & 1) * 8 + (uVar2 & 0xfffffff0)) * 2 + ((param_2 & 8) << (iVar1 + 0x22U & 0x3f))
          + (uVar2 & 0xf);
  return (((param_2 & 0x10) * 0x10 + (uVar2 & 0xfffffe00)) * 2 + (uVar2 & 0x1c0)) * 4 +
         ((param_2 & 0x7ffffff8) * 2 + param_1 & 0x18) * 8 + (uVar2 & 0x3f) >>
         (iVar1 + 0x1fU & 0x3f);
}

