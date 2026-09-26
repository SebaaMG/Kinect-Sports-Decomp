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


longlong fn_82CF6EE0(int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar4 = 0;
  lVar3 = 0;
  piVar5 = (int *)(param_1 + 8);
  piVar6 = (int *)(param_1 + 0x90);
  lVar7 = 8;
  do {
    piVar1 = piVar6 + 1;
    piVar2 = piVar5 + 2;
    piVar6 = piVar6 + 2;
    piVar5 = piVar5 + 4;
    lVar4 = (longlong)*piVar1 * (longlong)*piVar2 + lVar4;
    lVar3 = (longlong)*piVar5 * (longlong)*piVar6 + lVar3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return lVar3 + lVar4 + (longlong)*(int *)(param_1 + 0xd4) * (longlong)*(int *)(param_1 + 0x90);
}

