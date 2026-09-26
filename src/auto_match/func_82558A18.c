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
extern int fn_825587E8();
extern int fn_827DA660();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern int iRam8327fbfc;
extern unsigned int lbl_8326B7C8;
extern unsigned int lbl_8327FBE4;
extern unsigned int lbl_8327FBE8;
extern unsigned int lbl_8327FBF0;
extern unsigned int lbl_8327FBF4;
extern unsigned int lbl_8327FC04;
extern unsigned int lbl_8327FC08;
extern unsigned int lbl_8327FC0C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82558A18(void)

{
  if (lbl_8327FC08 == 0) {
    fn_82A1E810(lbl_8327FBF0);
    fn_82A1E650(lbl_8327FBE8,0xffffffffffffffff);
    fn_82A1E650(lbl_8327FBE4,0xffffffffffffffff);
    fn_82A1E658(lbl_8327FBE8);
    lbl_8327FBE8 = 0;
    fn_82A1E658(lbl_8327FBE4);
    lbl_8327FBE4 = 0;
    if (lbl_8327FBF4 != 0) {
      fn_827DA660(lbl_8326B7C8,lbl_8327FBF4,0);
      lbl_8327FBF4 = 0;
    }
    if (iRam8327fbfc != 0) {
      fn_827DA660(lbl_8326B7C8,iRam8327fbfc,0);
      iRam8327fbfc = 0;
    }
    fn_82A1E658(lbl_8327FC04);
    lbl_8327FC04 = 0;
    lbl_8327FC0C = 1;
    lbl_8327FC08 = 1;
    fn_825587E8();
  }
  return;
}

