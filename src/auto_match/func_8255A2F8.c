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
extern int fn_828095F8();
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CC160;


double fn_8255A2F8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  
  fVar1 = in_register_00010020 * in_register_00010010 +
          in_register_00010028 * in_register_00010018 + in_register_00010024 * in_register_00010014;
  fVar2 = SQRT(in_register_00010020 * in_register_00010020 +
               in_register_00010028 * in_register_00010028 +
               in_register_00010024 * in_register_00010024) *
          SQRT(in_register_00010010 * in_register_00010010 +
               in_register_00010018 * in_register_00010018 +
               in_register_00010014 * in_register_00010014);
  if (lbl_82195628 <= fVar2) {
    fVar3 = ABS(fVar1);
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    dVar4 = (double)fn_828095F8((double)(fVar1 / fVar2));
  }
  else {
    dVar4 = (double)lbl_821CC160;
  }
  return dVar4;
}

