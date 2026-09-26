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


ulonglong fn_8268AF70(int param_1,int param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  
  for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
    param_2 = param_2 + -1;
    bVar1 = *(byte *)(param_1 + param_2);
    uVar2 = (ulonglong)bVar1;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      uVar2 = uVar2 + 0x20;
    }
    param_3 = param_3 * 0x21 ^ uVar2;
  }
  return param_3;
}

