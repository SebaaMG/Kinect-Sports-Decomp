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


void fn_82A3B7B4(int param_1)

{
  int in_r9;
  int in_r10;
  undefined1 *puVar1;
  uint in_r11;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  for (; in_r11 < (uint)((in_r10 + 0x20) * 8); in_r11 = in_r11 + 1) {
    if (*(char *)(in_r9 + in_r11) == '\0') {
      *(undefined1 *)(in_r9 + in_r11) = 0xc;
    }
    in_r10 = *(int *)(param_1 + 0x868);
  }
  iVar2 = 0;
  lVar4 = 0xf9;
  do {
    if (*(char *)(param_1 + 0x27ed + iVar2) == '\0') {
      *(undefined1 *)(param_1 + 0x27ed + iVar2) = 8;
    }
    iVar2 = iVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar3 = *(byte *)(param_1 + 0x554) + 0x12;
  if (*(uint *)(param_1 + 0x868) <= uVar3) {
    return;
  }
  puVar1 = (undefined1 *)((*(byte *)(param_1 + 0x554) + 0x4d7) * 8 + param_1);
  do {
    uVar3 = uVar3 + 1;
    puVar1 = puVar1 + 8;
    *puVar1 = 100;
  } while (uVar3 < *(uint *)(param_1 + 0x868));
  return;
}

