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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82CE6010();
extern int fn_82D1EEF8();
extern unsigned int lbl_8323B1D0;
extern unsigned int lbl_8323B1E0;
extern unsigned int lbl_8323B1F0;
extern unsigned int lbl_8323B200;
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

void fn_82D1F090(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int in_r0;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  uVar14 = uRam8323b20c;
  uVar13 = uRam8323b208;
  uVar12 = uRam8323b204;
  uVar11 = lbl_8323B200;
  uVar10 = uRam8323b1fc;
  uVar9 = uRam8323b1f8;
  uVar8 = uRam8323b1f4;
  uVar7 = lbl_8323B1F0;
  uVar6 = uRam8323b1ec;
  uVar5 = uRam8323b1e8;
  uVar4 = uRam8323b1e4;
  uVar3 = lbl_8323B1E0;
  puVar1 = (undefined4 *)((uint)(&lbl_8323B1D0 + in_r0) & 0xfffffff0);
  uVar15 = puVar1[1];
  uVar16 = puVar1[2];
  uVar17 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar15;
  puVar2[2] = uVar16;
  puVar2[3] = uVar17;
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  fn_82CE6010(auStack_60);
  fn_82D1EEF8(param_1,auStack_60);
  return;
}

