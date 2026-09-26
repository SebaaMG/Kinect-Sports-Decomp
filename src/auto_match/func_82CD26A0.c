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


void fn_82CD26A0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar7 = 0x100;
  piVar6 = (int *)(param_1 + 0x347c);
  if (*(int *)(param_1 + 0x3884) == 0) {
    iVar1 = -0x12a150;
    iVar2 = -0x1023480;
    iVar3 = -0x322580;
    iVar4 = -0x680f80;
    iVar5 = -0xcc4a80;
    do {
      piVar6[-0x3ff] = iVar5 >> 0x10;
      piVar6[-0x2ff] = iVar4 >> 0x10;
      piVar6[-0x1ff] = iVar3 >> 0x10;
      piVar6[-0xff] = iVar2 >> 0x10;
      iVar5 = iVar5 + 0x19895;
      piVar6 = piVar6 + 1;
      *piVar6 = iVar1 >> 0x10;
      iVar4 = iVar4 + 0xd01f;
      iVar3 = iVar3 + 0x644b;
      iVar2 = iVar2 + 0x20469;
      iVar1 = iVar1 + 0x12a15;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else {
    iVar1 = -0x12b400;
    iVar2 = -0x10f7280;
    iVar3 = -0x447b00;
    iVar4 = -0x1b6700;
    iVar5 = -0xe65f00;
    do {
      piVar6[-0x3ff] = iVar5 >> 0x10;
      piVar6[-0x1ff] = iVar4 >> 0x10;
      piVar6[-0x2ff] = iVar3 >> 0x10;
      piVar6[-0xff] = iVar2 >> 0x10;
      iVar5 = iVar5 + 0x1ccbe;
      piVar6 = piVar6 + 1;
      *piVar6 = iVar1 >> 0x10;
      iVar4 = iVar4 + 0x36ce;
      iVar3 = iVar3 + 0x88f6;
      iVar2 = iVar2 + 0x21ee5;
      iVar1 = iVar1 + 0x12b40;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar1 = -0x7f8;
  iVar2 = -0x1fe;
  *(undefined4 *)(param_1 + 0x3880) = 0x832496c0;
  lVar7 = 0x3fc;
  do {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0xff;
      if (iVar2 < 0x100) {
        iVar3 = iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + *(int *)(param_1 + 0x3880)) = iVar3;
    iVar1 = iVar1 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

