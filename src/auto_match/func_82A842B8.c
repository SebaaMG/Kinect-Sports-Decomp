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


void fn_82A842B8(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  longlong lVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  iVar2 = param_1 + 0x470;
  lVar3 = 0x48;
  altv207_13(in_vs32,in_vs41);
  do {
    puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    iVar2 = iVar2 + -0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs42);
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  puVar1 = (undefined4 *)(param_1 + 0x130U & 0xfffffff0);
  *puVar1 = in_register_000103e0;
  puVar1[1] = in_register_000103e4;
  puVar1[2] = in_register_000103e8;
  puVar1[3] = in_vr62;
  return;
}

