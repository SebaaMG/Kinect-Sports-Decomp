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
extern int fn_82672C20();


void fn_82396230(int param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x240) != 0) {
    bVar2 = true;
    uVar1 = *(uint *)(param_1 + 0x54);
    if (((uVar1 < 4) || (uVar1 == 7)) || (uVar1 == 0x10)) {
      bVar2 = false;
    }
    if (((*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x14) + 0x14) == 0) &&
        (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x18) + 0xc) == 0)) && (bVar3 = true, bVar2))
    goto LAB_82396294;
  }
  bVar3 = false;
LAB_82396294:
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0xd4) + 0xc);
  if (bVar3) {
    if (puVar4[0x16] != 0) {
      return;
    }
    if (puVar4[4] == 0) {
      fn_82672C20(*puVar4,0xffffffff821a8484,0,0);
      puVar4[4] = 1;
      puVar4 = puVar4 + 0x1c;
      lVar5 = 8;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    return;
  }
  if (puVar4[0x16] == 0) {
    return;
  }
  if (puVar4[4] != 0) {
    fn_82672C20(*puVar4,0xffffffff821a8498,0,0);
    puVar4[4] = 0;
    puVar4 = puVar4 + 0x1c;
    lVar5 = 8;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

