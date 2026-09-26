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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005730;
extern unsigned int lbl_820E88E0;


/* WARNING: Removing unreachable block (ram,0x82be1118) */
/* WARNING: Removing unreachable block (ram,0x82be112c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BE1050(void)

{
  int in_r6;
  double dVar1;
  
  fn_82F6A548();
  dVar1 = lbl_820E88E0 / (double)(longlong)(in_r6 << 2);
  if (0 < in_r6) {
                    /* WARNING: Subroutine does not return */
    fn_82F643F8((lbl_82005730 + 0.0) * dVar1);
  }
  if (in_r6 < 1) {
    fn_82F6A594();
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8((lbl_82005730 + 0.0) * dVar1);
}

