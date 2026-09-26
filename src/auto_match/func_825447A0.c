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
extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263E9F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B2FC;
extern unsigned int lbl_8326B300;
extern unsigned int lbl_8326B474;


void fn_825447A0(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = lbl_821CA460;
  if (lbl_8326B474 != 0) {
    fVar1 = lbl_821CC160;
  }
  fn_8263E9F0((double)fVar1,lbl_8320A898,0x300,0,0,0,param_1,0,0);
  if (lbl_8326B2FC != 0) {
    fn_8263A1B8(lbl_8320A898,0);
    fn_8262FEC8(lbl_8326B2FC);
  }
  if (lbl_8326B300 != 0) {
    fn_8263A508(lbl_8320A898);
    fn_8262FEC8(lbl_8326B300);
  }
  return;
}

