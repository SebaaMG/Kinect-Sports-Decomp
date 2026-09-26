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


ulonglong fn_82818400(ushort *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0;
  while( true ) {
    if ((ulonglong)uVar1 == 0) break;
    param_1 = param_1 + 1;
    uVar3 = (uVar3 & 0xfffffff) * 0x10 + (ulonglong)uVar1;
    uVar2 = uVar3 & 0xf0000000;
    if (uVar2 != 0) {
      uVar3 = (uVar2 >> 0x18 | uVar2) ^ uVar3;
    }
    uVar1 = *param_1;
  }
  return uVar3;
}

