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


void fn_83027798(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_r0;
  uint uVar3;
  uint uVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  uVar3 = (*(ushort *)(param_1 + 0x2e) >> 0xb & 3) * (uint)(*(ushort *)(param_1 + 0x2e) >> 0xd);
  if (uVar3 == 0) {
    return;
  }
  uVar4 = 0;
  do {
    iVar2 = uVar4 * 0x40 + param_1;
    uVar4 = uVar4 + 1 & 0xffff;
    altv207_13(in_vs32,in_vs42);
    puVar1 = (undefined4 *)(in_r0 + iVar2 + 0x50 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs42,in_vs40);
    puVar1 = (undefined4 *)(iVar2 + 0x60U & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
  } while (uVar4 < uVar3);
  return;
}

