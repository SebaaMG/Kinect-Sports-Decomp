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
extern unsigned int uStack00000014;


void fn_8288C798(undefined8 param_1,ulonglong param_2,char *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puStack00000010;
  uint uStack00000014;
  uint *puStack00000018;
  
  puStack00000018 = (uint *)(param_2 >> 0x20);
  uStack00000014 = (uint)param_1;
  puStack00000010 = (uint *)((ulonglong)param_1 >> 0x20);
  while( true ) {
    if ((puStack00000010 != puStack00000018) ||
       (bVar2 = true, (ulonglong)uStack00000014 != (param_2 & 0xffffffff))) {
      bVar2 = false;
    }
    if (bVar2) break;
    uVar1 = 1 << (uStack00000014 & 0x3f);
    uVar3 = uVar1 | *puStack00000010;
    if (*param_3 == '\0') {
      uVar3 = *puStack00000010 & ~uVar1;
    }
    *puStack00000010 = uVar3;
    if (uStack00000014 < 0x1f) {
      uStack00000014 = uStack00000014 + 1;
    }
    else {
      uStack00000014 = 0;
      puStack00000010 = puStack00000010 + 1;
    }
  }
  return;
}

