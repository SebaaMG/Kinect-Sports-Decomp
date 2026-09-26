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


void fn_82AD1B28(int param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = *(uint **)(param_1 + 4);
  uVar5 = 0;
  do {
    if (puVar1 == (uint *)0x0) {
      uVar5 = (((0x8da691691448U >> (uVar5 & 0x7f)) >> (uVar5 & 0x7f)) >> (uVar5 & 0x7f) & 7) << 0xd
              | uVar5 & 0xffffffffffff1fff;
      *(uint *)(param_1 + 8) =
           (uint)(uVar5 << 1) & 0x1c000 |
           (uint)(uVar5 << 1) & 0x1e | *(uint *)(param_1 + 8) & 0xfffe3fe1;
      return;
    }
    uVar2 = *puVar1;
    if ((uVar2 & 0x40000000) == 0) {
      bVar3 = false;
      if ((uVar2 & 0xe000000) != 0) goto LAB_82ad1b54;
    }
    else {
LAB_82ad1b54:
      bVar3 = true;
    }
    if (bVar3) {
      uVar4 = uVar2 >> 0x19 & 7;
      uVar6 = 0;
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          uVar8 = uVar8 + 1;
          uVar6 = (uint)(1 << ((uVar2 >> 5 & 0xff) >> (uVar7 & 0x3f) & 3)) | uVar6;
          uVar7 = uVar7 + 2;
        } while (uVar8 < uVar4);
      }
      uVar5 = uVar6 | uVar5;
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

