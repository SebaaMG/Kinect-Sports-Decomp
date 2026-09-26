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


void fn_82814560(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = param_2 == param_1;
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = iVar2 + 0x58;
  while ((uVar4 < iVar2 + 0x80U && (!bVar1))) {
    if (param_2 == *(int *)(uVar4 + 4)) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 0x14;
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar3 = (uint)*(byte *)(iVar2 + 0x51) * 0x21 + uVar4;
  while( true ) {
    if (uVar3 <= uVar4) {
      return;
    }
    if (bVar1) break;
    if (param_2 == *(int *)(uVar4 + 0xd)) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 0x21;
  }
  return;
}

