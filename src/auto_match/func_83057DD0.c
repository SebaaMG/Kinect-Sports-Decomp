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
extern int fn_8305BD60();
extern int fn_8305BDE0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_820105A0;
extern unsigned int lbl_820153F0;
extern unsigned int lbl_82015618;
extern unsigned int lbl_82028820;
extern unsigned int lbl_820288B8;
extern unsigned int lbl_820FC2C8;


void fn_83057DD0(double param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  double dVar2;
  double dStack_30;
  
  dVar2 = dStack_30;
  if (((((uint)param_4 < 6) &&
       (bVar1 = (uint)param_4 == 0, dStack_30 = lbl_820FC2C8, dVar2 = lbl_82005710,
       param_4 != 1 || bVar1)) && (dStack_30 = lbl_82028820, param_4 != 2 || bVar1)) &&
     (((dStack_30 = lbl_820153F0, param_4 != 3 || bVar1 &&
       (dStack_30 = lbl_82015618, param_4 != 4 || bVar1)) && (dStack_30 = lbl_820288B8, bVar1)))) {
    dStack_30 = lbl_820105A0;
  }
  if (dStack_30 < param_1) {
    param_1 = dStack_30;
  }
  fn_8305BDE0(*param_2);
  dVar2 = (double)fn_8305BD60(dVar2 + param_1);
  *(float *)(param_2[2] + 0x20) = (float)dVar2;
  return;
}

