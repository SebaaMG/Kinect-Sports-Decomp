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
extern int fn_8265C940();
extern int fn_82A1EFC0();
extern unsigned int lbl_83217B8C;
extern unsigned int lbl_83217B90;
extern unsigned int lbl_83217B94;
extern unsigned int lbl_83217B98;
extern unsigned int lbl_83217B9C;
extern unsigned int lbl_83217BA0;


undefined8 fn_829E1C28(void)

{
  lbl_83217B94 = fn_8265C940(1800000,0xffffffffa79d0000);
  lbl_83217B8C = fn_8265C940(0x3840,0xffffffffa79d0000);
  lbl_83217B90 = fn_8265C940(2000,0xffffffffa79d0000);
  lbl_83217B98 = fn_8265C940(0x3840,0xffffffffa79d0000);
  lbl_83217B9C = fn_8265C940(0xe85,0xffffffffa79d0000);
  lbl_83217BA0 = fn_8265C940(2000,0xffffffffa79d0000);
  if ((((lbl_83217B94 != 0) && (lbl_83217B8C != 0)) && (lbl_83217B90 != 0)) &&
     (((lbl_83217B98 != 0 && (lbl_83217B9C != 0)) && (lbl_83217BA0 != 0)))) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(lbl_83217B94,0,4);
  }
  return 0xffffffff8007000e;
}

