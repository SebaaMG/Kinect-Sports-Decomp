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


longlong fn_82ADCF98(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = (param_1 & 0xffffffff) >> 0x1c;
  uVar6 = (param_1 & 0xffffffff) >> 0x18 & 0xf;
  uVar5 = (param_1 & 0xffffffff) >> 0x14 & 0xf;
  uVar2 = (param_1 & 0xffffffff) >> 0x10 & 0xf;
  uVar4 = (param_1 & 0xffffffff) >> 0xc & 0xf;
  uVar7 = (param_1 & 0xffffffff) >> 8 & 0xf;
  uVar3 = (param_1 & 0xffffffff) >> 4 & 0xf;
  param_1 = param_1 & 0xf;
  return (((0x8da691691448U >> uVar1) >> uVar1) >> uVar1 & 7) +
         (((0x8da691691448U >> uVar6) >> uVar6) >> uVar6 & 7) +
         (((0x8da691691448U >> uVar5) >> uVar5) >> uVar5 & 7) +
         (((0x8da691691448U >> uVar2) >> uVar2) >> uVar2 & 7) +
         (((0x8da691691448U >> uVar4) >> uVar4) >> uVar4 & 7) +
         (((0x8da691691448U >> uVar7) >> uVar7) >> uVar7 & 7) +
         (((0x8da691691448U >> uVar3) >> uVar3) >> uVar3 & 7) +
         (((0x8da691691448U >> param_1) >> param_1) >> param_1 & 7);
}

