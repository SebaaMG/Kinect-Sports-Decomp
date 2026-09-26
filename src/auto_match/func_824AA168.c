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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_3c;
extern unsigned int fStack_4c;
extern int fn_824AA530();
extern unsigned int lbl_82195898;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824AA168(int *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_50 [4];
  float fStack_4c;
  undefined1 auStack_40 [4];
  float fStack_3c;
  
  lVar3 = (-(ulonglong)(param_1[0xf] != 0) & 0xfffffffc) + 10;
  lVar2 = (-(ulonglong)(param_1[0xf] != 0) & 0xfffffffc) + 9;
  fn_824AA530(auStack_50,param_2,lVar3,lVar2);
  fn_824AA530(auStack_40,param_2,lVar3,lVar2);
  fVar1 = lbl_82195898;
  if (ABS(fStack_4c) <= ABS(fStack_3c)) {
    fStack_4c = fStack_3c;
  }
  param_1[0x10] = (uint)LZCOUNT(param_1[0xf] - (uint)(lbl_821CC160 < fStack_4c)) >> 5;
  param_1[0x11] = (uint)(fVar1 < ABS(fStack_4c));
  dVar4 = (double)(**(code **)(*param_1 + 0x28))(param_1,param_2);
  param_1[0xc] = (int)(float)dVar4;
  return;
}

