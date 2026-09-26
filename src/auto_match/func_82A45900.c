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


void fn_82A45900(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar2 = 0;
  if (*param_1 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    puVar4 = (uint *)(param_1[2] + iVar3);
    uVar1 = *(uint *)(param_1[2] + iVar3);
    if ((uVar1 >> 0xc & 0xff) != param_2) {
      puVar4[0xc] = 1;
      *puVar4 = (param_2 & 0xff) << 0xc | uVar1 & 0xfff00fff;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x60;
  } while (uVar2 < *param_1);
  return;
}

