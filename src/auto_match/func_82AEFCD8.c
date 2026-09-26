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


void fn_82AEFCD8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  ulonglong uVar9;
  
  puVar1 = *(uint **)(param_1 + 4);
  uVar6 = 0;
  do {
    if (puVar1 == (uint *)0x0) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = (ulonglong)(uint)(1 << (0x20U - (int)LZCOUNT(uVar6) & 0x3f)) - 1;
      }
      *(uint *)(param_1 + 8) =
           (uint)((((0x8da691691448U >> (uVar9 & 0x7f)) >> (uVar9 & 0x7f)) >> (uVar9 & 0x7f) & 7) <<
                 0xe) |
           (uint)((uVar9 & 0xffff1fff) << 1) & 0x1e | *(uint *)(param_1 + 8) & 0xfffe3fe1;
      return;
    }
    uVar2 = *puVar1;
    if ((uVar2 & 0x40000000) == 0) {
      bVar4 = false;
      if ((uVar2 & 0xe000000) != 0) goto LAB_82aefd08;
    }
    else {
LAB_82aefd08:
      bVar4 = true;
    }
    if (bVar4) {
      uVar5 = uVar2 >> 0x19 & 7;
      uVar7 = 0;
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar10 = uVar10 + 1;
          uVar3 = uVar8 & 0x3f;
          uVar8 = uVar8 + 2;
          uVar7 = 1 << ((uVar2 >> 5 & 0xff) >> uVar3 & 3) | uVar7;
        } while (uVar10 < uVar5);
      }
      uVar6 = uVar7 | uVar6;
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

