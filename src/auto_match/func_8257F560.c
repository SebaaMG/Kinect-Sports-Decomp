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


void fn_8257F560(int *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = *param_1;
  param_1[9] = param_1[9] | 0x80000000;
  if (iVar1 != 0) {
    if (((uint *)(iVar1 + 0x98) != (uint *)0x0) &&
       (uVar3 = (ulonglong)*(uint *)(iVar1 + 0x9c), 0 < (int)*(uint *)(iVar1 + 0x9c))) {
      lVar2 = 0;
      do {
        fn_8257F560((ulonglong)*(uint *)(iVar1 + 0x98) + lVar2);
        uVar3 = uVar3 - 1;
        lVar2 = lVar2 + 0x1a0;
      } while (uVar3 != 0);
    }
  }
  return;
}

