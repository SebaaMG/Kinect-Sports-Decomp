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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern unsigned int fStack_38;
extern int fn_82F512E8();
extern unsigned int lbl_82191FC8;
extern V16 vectorSubtractFloatingPoint();


void fn_824E4400(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float afStack_40 [2];
  float fStack_38;
  undefined1 auStack_30 [24];
  
  fn_82F512E8(afStack_40,param_2,*param_1,0);
  fn_82F512E8(auStack_30,param_2,0,0);
  fVar3 = lbl_82191FC8;
  puVar1 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  param_1[1] = (uint)(SQRT(fStack_38 * fStack_38 + afStack_40[0] * afStack_40[0]) <= fVar3);
  return;
}

