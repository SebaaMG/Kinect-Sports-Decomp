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
extern unsigned int lbl_83265988;


void fn_8228C928(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  if (lbl_83265988 == 0) {
    return;
  }
  uVar1 = **(uint **)(param_2 * 4 + -0x7ce31218);
  if (uVar1 != 0) {
    uVar3 = uVar1 >> 3;
    uVar1 = 1 << (uVar1 & 7);
    iVar2 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
    bVar4 = (byte)uVar1;
    if ((uVar1 & 0xff & (uint)*(byte *)(iVar2 + uVar3)) == 0) {
      bVar4 = *(byte *)(iVar2 + uVar3) | bVar4;
    }
    else {
      bVar4 = *(byte *)(iVar2 + uVar3) & ~bVar4;
    }
    *(byte *)(iVar2 + uVar3) = bVar4;
  }
  *(undefined4 *)(param_1 + 0x16c) = 1;
  return;
}

