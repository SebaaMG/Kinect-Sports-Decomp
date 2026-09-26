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
extern unsigned int lbl_8317F990;
extern unsigned int lbl_8317F9A0;
extern unsigned int lbl_8317F9B0;
extern unsigned int lbl_8317F9C0;
extern unsigned int lbl_8323B530;
extern unsigned int lbl_8323B540;
extern unsigned int lbl_8323B550;
extern unsigned int lbl_8323B560;
extern unsigned int uRam8317f9a4;
extern unsigned int uRam8317f9a8;
extern unsigned int uRam8317f9ac;
extern unsigned int uRam8317f9b4;
extern unsigned int uRam8317f9b8;
extern unsigned int uRam8317f9bc;
extern unsigned int uRam8317f9c4;
extern unsigned int uRam8317f9c8;
extern unsigned int uRam8317f9cc;
extern unsigned int uRam8323b544;
extern unsigned int uRam8323b548;
extern unsigned int uRam8323b54c;
extern unsigned int uRam8323b554;
extern unsigned int uRam8323b558;
extern unsigned int uRam8323b55c;
extern unsigned int uRam8323b564;
extern unsigned int uRam8323b568;
extern unsigned int uRam8323b56c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8312C8D8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uRam8323b56c = uRam8317f9cc;
  uRam8323b568 = uRam8317f9c8;
  uRam8323b564 = uRam8317f9c4;
  lbl_8323B560 = lbl_8317F9C0;
  uRam8323b55c = uRam8317f9bc;
  uRam8323b558 = uRam8317f9b8;
  uRam8323b554 = uRam8317f9b4;
  lbl_8323B550 = lbl_8317F9B0;
  uRam8323b54c = uRam8317f9ac;
  uRam8323b548 = uRam8317f9a8;
  uRam8323b544 = uRam8317f9a4;
  lbl_8323B540 = lbl_8317F9A0;
  puVar1 = (undefined4 *)((uint)(&lbl_8317F990 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((int)&lbl_8323B530 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

