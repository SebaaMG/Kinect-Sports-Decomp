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


void fn_82E9B0D0(ulonglong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = (ulonglong)((int)param_1 >> 0x1f);
  lVar2 = (param_1 ^ uVar1) - uVar1;
  if (lVar2 == 0) {
    *param_2 = 0;
    return;
  }
  iVar3 = (int)lVar2;
  if (iVar3 < 3) {
    *param_2 = 1;
    return;
  }
  if (iVar3 < 7) {
    *param_2 = 2;
    return;
  }
  if (iVar3 < 0xf) {
    *param_2 = 3;
    return;
  }
  uVar4 = 4;
  if (0x1e < iVar3) {
    uVar4 = 5;
  }
  *param_2 = uVar4;
  return;
}

