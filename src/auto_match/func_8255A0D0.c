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
extern int fn_82809D40();
extern unsigned int lbl_82195680;
extern unsigned int lbl_821CC160;


undefined8 fn_8255A0D0(float *param_1)

{
  undefined8 uVar1;
  double dVar2;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  
  if (((double)lbl_82195680 < ABS((double)in_register_00010014)) ||
     ((double)lbl_82195680 <
      ABS((double)SQRT(in_register_00010018 * in_register_00010018 +
                       in_register_00010010 * in_register_00010010)))) {
    dVar2 = (double)fn_82809D40(-(double)in_register_00010014);
    *param_1 = (float)dVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *param_1 = lbl_821CC160;
  }
  return uVar1;
}

