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


void fn_82773A88(int *param_1)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = param_1[1];
  uVar4 = (ulonglong)uVar2;
  if ((0 < (int)uVar2) && (*(short *)(uVar2 * 2 + *param_1 + -2) == 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar4 = uVar4 - 1;
  if ((longlong)uVar4 < 0) {
    return;
  }
  lVar5 = (uVar4 & 0x7fffffff) << 1;
  while( true ) {
    psVar3 = (short *)((int)lVar5 + *param_1);
    sVar1 = *psVar3;
    if ((sVar1 != 10) && (sVar1 != 0xd)) break;
    uVar4 = uVar4 - 1;
    lVar5 = lVar5 + -2;
    param_1[1] = param_1[1] + -1;
    *psVar3 = 0;
    if ((longlong)uVar4 < 0) {
      return;
    }
  }
  return;
}

