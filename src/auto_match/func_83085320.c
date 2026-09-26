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
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1a8;
extern int fn_83085A80();
extern int fn_83085AB0();
extern int fn_83086A30();
extern unsigned int lbl_8323B310;
extern unsigned int uRam8323b314;
extern unsigned int uRam8323b318;
extern unsigned int uRam8323b31c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_196;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_19e;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83085320(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 auStack_1a8 [2];
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined2 uStack_19c;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined2 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 auStack_170 [16];
  undefined1 *puStack_160;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [320];
  
  uVar5 = uRam8323b31c;
  uVar4 = uRam8323b318;
  uVar3 = uRam8323b314;
  puVar1 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
  *puVar1 = lbl_8323B310;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uStack_19c = 0;
  uStack_19e = 0;
  uStack_1a0 = 0;
  uStack_194 = 0xffff;
  uStack_196 = 0xffff;
  uStack_198 = 0xffff;
  puVar1 = (undefined4 *)((int)&uStack_1a0 + in_r0 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uStack_18c = 0;
  uStack_184 = 0;
  puVar2 = (undefined4 *)((uint)(auStack_170 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  uStack_1ac = 1;
  uStack_1b0 = param_2;
  uStack_190 = param_1;
  uStack_188 = param_4;
  uStack_180 = param_5;
  fn_83085A80(auStack_140);
  puStack_160 = auStack_140;
  auStack_1a8[0] = param_6;
  uVar3 = fn_83086A30(&uStack_190,&uStack_1b0,param_3,&uStack_1ac,auStack_1a8);
  *param_7 = uVar3;
  fn_83085AB0(auStack_140);
  return;
}

