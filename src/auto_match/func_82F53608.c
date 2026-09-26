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
extern int fn_82F65E18();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;


double fn_82F53608(void)

{
  float fVar1;
  float *pfVar2;
  int in_r0;
  double dVar3;
  double dVar4;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float afStack_20 [8];
  
  fVar1 = in_register_00010010 * in_register_00010020 + in_register_00010014 * in_register_00010024
          + in_register_00010018 * in_register_00010028;
  dVar4 = (double)lbl_82002AE0;
  pfVar2 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  dVar3 = (double)afStack_20[0];
  if ((dVar4 < dVar3) || (dVar4 = (double)lbl_8200133C, dVar3 < (double)lbl_8200133C)) {
    dVar3 = dVar4;
  }
  dVar4 = (double)fn_82F65E18(dVar3);
  return (double)(float)dVar4;
}

