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
extern unsigned int lbl_8317EFF0;
extern unsigned int lbl_8317F000;
extern unsigned int lbl_8317F010;
extern unsigned int lbl_8317F020;
extern unsigned int lbl_8323B1D0;
extern unsigned int lbl_8323B1E0;
extern unsigned int lbl_8323B1F0;
extern unsigned int lbl_8323B200;
extern unsigned int uRam8317f004;
extern unsigned int uRam8317f008;
extern unsigned int uRam8317f00c;
extern unsigned int uRam8317f014;
extern unsigned int uRam8317f018;
extern unsigned int uRam8317f01c;
extern unsigned int uRam8317f024;
extern unsigned int uRam8317f028;
extern unsigned int uRam8317f02c;
extern unsigned int uRam8323b1e4;
extern unsigned int uRam8323b1e8;
extern unsigned int uRam8323b1ec;
extern unsigned int uRam8323b1f4;
extern unsigned int uRam8323b1f8;
extern unsigned int uRam8323b1fc;
extern unsigned int uRam8323b204;
extern unsigned int uRam8323b208;
extern unsigned int uRam8323b20c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8312C1F0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uRam8323b20c = uRam8317f02c;
  uRam8323b208 = uRam8317f028;
  uRam8323b204 = uRam8317f024;
  lbl_8323B200 = lbl_8317F020;
  uRam8323b1fc = uRam8317f01c;
  uRam8323b1f8 = uRam8317f018;
  uRam8323b1f4 = uRam8317f014;
  lbl_8323B1F0 = lbl_8317F010;
  uRam8323b1ec = uRam8317f00c;
  uRam8323b1e8 = uRam8317f008;
  uRam8323b1e4 = uRam8317f004;
  lbl_8323B1E0 = lbl_8317F000;
  puVar1 = (undefined4 *)((uint)(&lbl_8317EFF0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(&lbl_8323B1D0 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

