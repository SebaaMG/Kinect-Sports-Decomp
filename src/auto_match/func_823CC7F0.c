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
extern int fn_8255A260();
extern unsigned int lbl_821958A4;
extern unsigned int lbl_821958B0;
extern unsigned int lbl_821958B4;
extern unsigned int lbl_821958B8;
extern unsigned int lbl_821CC160;
extern V16 vectorNegativeMultiplySubtractFloatingPoint();


char fn_823CC7F0(void)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int in_r0;
  char cVar4;
  bool bVar5;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float in_register_00010014;
  float in_vr1;
  float in_register_00010024;
  float in_register_00010028;
  float in_register_00010480;
  float in_register_00010488;
  float afStack_40 [16];
  
  dVar6 = (double)fn_8255A260();
  fVar3 = lbl_821CC160;
  if (dVar6 <= (double)lbl_821958A4) {
    cVar4 = '\0';
  }
  else {
    vectorNegativeMultiplySubtractFloatingPoint(in_vs45,in_vs32,in_vs44);
    fVar1 = in_register_00010480 * in_vr1 * 0.0 +
            in_register_00010024 * in_register_00010488 * in_vr1 +
            in_register_00010028 * in_register_00010488 * in_register_00010014;
    pfVar2 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar1;
    pfVar2[1] = fVar1;
    pfVar2[2] = fVar1;
    pfVar2[3] = fVar1;
    bVar5 = fVar3 < afStack_40[0];
    if ((double)lbl_821958B0 <= dVar6) {
      if ((double)lbl_821958B4 <= dVar6) {
        if ((double)lbl_821958B8 <= dVar6) {
          cVar4 = '\x04';
        }
        else {
          cVar4 = (-bVar5 & 2U) + 3;
        }
      }
      else {
        cVar4 = (-bVar5 & 4U) + 2;
      }
    }
    else {
      cVar4 = (-bVar5 & 6U) + 1;
    }
  }
  return cVar4;
}

