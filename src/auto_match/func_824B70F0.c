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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define _uStack_20 ((*(U64*)&uStack_20))
extern int fn_8225F6D0();
extern int fn_8245AE18();
extern int fn_8245B168();
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


void fn_824B70F0(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  
  if (lbl_832760AA == '\0') {
    lbl_832760B8 = 0;
    lbl_832760BC = 0;
    uVar1 = uStack_1e;
    uVar3 = uStack_1e;
  }
  else {
    if (lbl_832760AB == '\0') {
      fn_8225F6D0();
    }
    uVar1 = (short)lbl_832760B8;
    uVar3 = (short)lbl_832760BC;
  }
  uVar2 = fn_8245AE18();
  _uStack_20 = CONCAT22(uVar1,uStack_1e);
  fn_8245B168(uVar2,&uStack_20,2);
  _uStack_20 = CONCAT22(uVar3,uStack_1e);
  fn_8245B168(uVar2,&uStack_20,2);
  return;
}

