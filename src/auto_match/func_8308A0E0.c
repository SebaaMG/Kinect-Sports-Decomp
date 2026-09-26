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
extern int fn_82F643F8();
extern int fn_82F6A534();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821878A8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323C860;
extern unsigned int lbl_8323C864;


void fn_8308A0E0(undefined8 param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_82F6A534();
  dVar2 = (double)(float)((double)lbl_821878A8 * 0.0 - (double)lbl_8201DD74);
  if ((double)lbl_821AAD20 <= dVar2) {
                    /* WARNING: Subroutine does not return */
    fn_82F643F8(dVar2);
  }
  lbl_8323C860 = lbl_82002AE0;
  lbl_8323C864 = lbl_821AAD20;
  dVar1 = (double)(float)((double)(float)((double)lbl_8201DD74 - ABS(dVar2)) - dVar1);
  if ((dVar1 <= param_2) && (param_2 = dVar1, dVar1 < 0.0)) {
    param_2 = (double)lbl_821AAD20;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8(param_2);
}

