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


undefined8 fn_82F6DEF0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  while( true ) {
    uVar4 = (ulonglong)bVar2;
    uVar3 = (ulonglong)bVar1;
    if ((bVar2 == 0) || (uVar3 != uVar4)) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    param_2 = param_2 + 1;
    bVar2 = *param_2;
  }
  if (uVar3 == uVar4) {
    return 0;
  }
  if ((longlong)(uVar3 - uVar4) < 0) {
    return 0xffffffffffffffff;
  }
  return 1;
}

