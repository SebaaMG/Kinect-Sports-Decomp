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


void fn_82D7C188(int *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_1[2];
  iVar3 = 0;
  if (iVar1 < 1) {
    return;
  }
  puVar2 = (uint *)(param_1[1] + -4);
  do {
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
    uVar5 = *puVar2;
    if (iVar3 == iVar1) {
      uVar4 = *param_1 + uVar5;
    }
    else {
      uVar4 = uVar5 + 0x200;
    }
    for (; uVar5 < uVar4; uVar5 = *(byte *)(uVar5 + 3) + uVar5) {
    }
  } while (iVar3 < iVar1);
  return;
}

