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
extern unsigned int fStack_28;
extern int fn_824DC918();
extern int fn_824DC998();
extern unsigned int lbl_821CC160;


void fn_824E09C0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float afStack_30 [2];
  float fStack_28;
  
  fn_824DC998(param_1 + 8);
  dVar3 = (double)lbl_821CC160;
  if (dVar3 < (double)*(float *)(param_2 + 0xb8)) {
    puVar1 = (undefined4 *)(param_2 + 0xb0U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    dVar3 = (double)SQRT(fStack_28 * fStack_28 + afStack_30[0] * afStack_30[0]);
  }
  fn_824DC918(dVar3,param_1 + 8);
  return;
}

