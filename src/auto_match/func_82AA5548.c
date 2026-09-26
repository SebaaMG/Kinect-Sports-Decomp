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


ulonglong fn_82AA5548(ulonglong param_1,uint param_2,ulonglong param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (param_3 & 0xffffffff) >> 2;
  lVar2 = -LZCOUNT(param_6);
  uVar1 = (param_2 & 6) * 4 + ((uint)param_1 & 7) << ((uint)(lVar2 + 0x1fU) & 0x3f);
  uVar3 = (param_2 >> 3) + uVar4 & 1;
  uVar4 = (((longlong)(int)((param_5 + 0x1fU >> 4 & 0xffffffe) * (int)uVar4 + (param_2 >> 4)) *
            (longlong)(int)(param_4 + 0x1fU >> 5) + ((param_1 & 0xffffffff) >> 5) & 0xffffffff) <<
          (lVar2 + 0x27U & 0x7f)) +
          (((ulonglong)param_2 & 1) * 8 + ((ulonglong)uVar1 & 0xfffffff0)) * 2 +
          ((param_3 & 3) << (lVar2 + 0x25U & 0x7f)) + ((ulonglong)uVar1 & 0xf);
  return (((uVar4 & 0xfffffffffffffe00) + uVar3 * 0x100) * 2 + (uVar4 & 0x1c0)) * 4 +
         ((param_1 & 0xfffffff8) * 8 + uVar3 * -0x80 & 0xc0) + (uVar4 & 0x3f) >>
         (lVar2 + 0x1fU & 0x7f) & 0xffffffff;
}

