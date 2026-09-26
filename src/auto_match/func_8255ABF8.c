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
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern unsigned int fStack_28;
extern unsigned int fStack_40;
extern int fn_8253FDC8();


void fn_8255ABF8(float *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  float fStack_40;
  float afStack_3c [5];
  float fStack_28;
  
  dVar3 = (double)param_1[1];
  dVar2 = (double)param_1[2];
  fStack00000020 = in_register_00010010;
  fStack00000024 = in_register_00010014;
  fStack00000028 = in_register_00010018;
  uVar1 = fn_8253FDC8((double)*param_1,param_1,afStack_3c,&fStack_40);
  dVar4 = (double)(fStack00000024 * afStack_3c[0] + fStack00000028 * fStack_40);
  uVar1 = fn_8253FDC8(dVar3,uVar1,afStack_3c,&fStack_40);
  fStack_28 = (float)(dVar4 * (double)fStack_40 - (double)(fStack00000020 * afStack_3c[0]));
  fn_8253FDC8(dVar2,uVar1,afStack_3c,&fStack_40);
  return;
}

