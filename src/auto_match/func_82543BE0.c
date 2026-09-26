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
extern int fn_825207D0();
extern int fn_826310E0();
extern int fn_82A1DD38();


void fn_82543BE0(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (param_2 + 0x806 & 0xfffffff) * 0x10 + param_1;
  iVar2 = fn_825207D0(lVar3,param_3,(param_4 & 0xfffffff) << 4);
  if (iVar2 != 0) {
    fn_82A1DD38(lVar3);
    uVar1 = (param_2 & 0xffffffff) >> 2;
    fn_826310E0(*(undefined4 *)param_1,param_2,param_3,param_4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((param_2 + param_4) - 1 & 0xffffffff) >> 2) - uVar1 & 0x7f)) >> (uVar1 & 0x7f));
  }
  return;
}

