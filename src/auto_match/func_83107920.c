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
extern unsigned int lbl_820D2760;
extern unsigned int lbl_820D2840;
extern unsigned int lbl_821CEA90;
extern unsigned int lbl_821CEAA0;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83107920(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)((uint)(&lbl_821CEAA0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(&lbl_820D2840 + in_r0) & 0xfffffff0);
  lbl_8329EAE0 = *puVar2;
  uRam8329eae4 = puVar2[1];
  uRam8329eae8 = puVar2[2];
  uRam8329eaec = puVar2[3];
  puVar2 = (undefined4 *)((uint)(&lbl_821CEA90 + in_r0) & 0xfffffff0);
  lbl_8329EAF0 = *puVar2;
  uRam8329eaf4 = puVar2[1];
  uRam8329eaf8 = puVar2[2];
  uRam8329eafc = puVar2[3];
  puVar2 = (undefined4 *)((uint)(&lbl_820D2760 + in_r0) & 0xfffffff0);
  lbl_8329EB00 = *puVar2;
  uRam8329eb04 = puVar2[1];
  uRam8329eb08 = puVar2[2];
  uRam8329eb0c = puVar2[3];
  puVar2 = (undefined4 *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

