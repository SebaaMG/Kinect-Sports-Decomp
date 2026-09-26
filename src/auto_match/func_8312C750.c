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
extern unsigned int lbl_8317F430;
extern unsigned int lbl_8317F440;
extern unsigned int lbl_8317F450;
extern unsigned int lbl_8323B470;
extern unsigned int lbl_8323B480;
extern unsigned int lbl_8323B490;
extern unsigned int uRam8317f444;
extern unsigned int uRam8317f448;
extern unsigned int uRam8317f44c;
extern unsigned int uRam8317f454;
extern unsigned int uRam8317f458;
extern unsigned int uRam8317f45c;
extern unsigned int uRam8323b484;
extern unsigned int uRam8323b488;
extern unsigned int uRam8323b48c;
extern unsigned int uRam8323b494;
extern unsigned int uRam8323b498;
extern unsigned int uRam8323b49c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8312C750(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uRam8323b49c = uRam8317f45c;
  uRam8323b498 = uRam8317f458;
  uRam8323b494 = uRam8317f454;
  lbl_8323B490 = lbl_8317F450;
  uRam8323b48c = uRam8317f44c;
  uRam8323b488 = uRam8317f448;
  uRam8323b484 = uRam8317f444;
  lbl_8323B480 = lbl_8317F440;
  puVar1 = (undefined4 *)((uint)(&lbl_8317F430 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(&lbl_8323B470 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

