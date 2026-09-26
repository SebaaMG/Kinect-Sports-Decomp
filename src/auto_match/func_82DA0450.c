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
extern unsigned int lbl_8323E280;
extern unsigned int lbl_8323E290;
extern unsigned int lbl_8323E2A0;
extern unsigned int lbl_8323E2B0;
extern unsigned int uRam8323e294;
extern unsigned int uRam8323e298;
extern unsigned int uRam8323e29c;
extern unsigned int uRam8323e2a4;
extern unsigned int uRam8323e2a8;
extern unsigned int uRam8323e2ac;
extern unsigned int uRam8323e2b4;
extern unsigned int uRam8323e2b8;
extern unsigned int uRam8323e2bc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DA0450(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int in_r6;
  int in_r8;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(in_r0 + in_r6 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(&lbl_8323E280 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)(in_r6 + 0x10U & 0xfffffff0);
  lbl_8323E290 = *puVar1;
  uRam8323e294 = puVar1[1];
  uRam8323e298 = puVar1[2];
  uRam8323e29c = puVar1[3];
  puVar1 = (undefined4 *)(in_r0 + in_r8 & 0xfffffff0);
  lbl_8323E2A0 = *puVar1;
  uRam8323e2a4 = puVar1[1];
  uRam8323e2a8 = puVar1[2];
  uRam8323e2ac = puVar1[3];
  puVar1 = (undefined4 *)(in_r8 + 0x10U & 0xfffffff0);
  lbl_8323E2B0 = *puVar1;
  uRam8323e2b4 = puVar1[1];
  uRam8323e2b8 = puVar1[2];
  uRam8323e2bc = puVar1[3];
  return;
}

