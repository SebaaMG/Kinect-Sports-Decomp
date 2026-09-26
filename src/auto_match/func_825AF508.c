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
extern int fn_8223C610();
extern int fn_823B4900();
extern int fn_82F64318();
extern int fn_82F6A548();
extern int fn_82F6B030();
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195528;
extern unsigned int lbl_831D4548;
extern unsigned int lbl_83297870;
extern unsigned int lbl_83297878;
extern unsigned int lbl_83297880;


void fn_825AF508(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fn_82F6A548();
  uVar2 = lbl_83297870;
  if ((lbl_83297870 & 1) == 0) {
    uVar2 = lbl_83297870 | 1;
    lbl_83297870 = uVar2;
    dVar4 = (double)fn_82F6B030(0x2000);
    lbl_83297878 = (longlong)SQRT(dVar4);
  }
  if ((uVar2 & 2) == 0) {
    lbl_83297870 = uVar2 | 2;
    lbl_83297880 = lbl_83297878 * lbl_83297878;
  }
  fn_8223C610(param_2,1,0,0);
  fn_8223C610(param_2,1,0,0);
  fn_8223C610(param_2,1,0,0);
  lVar1 = fn_823B4900(param_2,0xd,0,0);
  dVar4 = (double)fn_82F6B030();
  lVar3 = (longlong)SQRT(dVar4);
  fn_82F6B030(lVar1 - lVar3 * lVar3);
  dVar4 = lbl_82195520;
  fn_82F6B030(lVar3 * 2 + 1);
  dVar6 = (double)lbl_831D4548;
  dVar5 = (double)fn_82F6B030(lVar3);
  dVar5 = dVar5 + dVar4;
  dVar4 = (double)fn_82F6B030(lbl_83297878);
                    /* WARNING: Subroutine does not return */
  fn_82F64318((double)(float)((lbl_82195528 - dVar5 / dVar4) * dVar6));
}

