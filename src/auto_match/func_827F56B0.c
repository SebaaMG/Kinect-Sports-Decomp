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


void fn_827F56B0(int param_1)

{
  ushort uVar1;
  short *psVar2;
  
  uVar1 = 0;
  psVar2 = *(short **)(param_1 + 0x40);
  if (*(ushort *)(param_1 + 0x44) == 0) {
    return;
  }
  while( true ) {
    if (*psVar2 == -1) {
      return;
    }
    if (*psVar2 == 0) break;
    psVar2 = psVar2 + 1;
    uVar1 = uVar1 + 1;
    if (*(ushort *)(param_1 + 0x44) <= uVar1) {
      return;
    }
  }
  *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) | 0x10;
  return;
}

