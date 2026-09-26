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
extern int fn_829E30F8();
extern int fn_829E3C08();
extern int fn_829E4C60();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int lbl_83217B30;
extern unsigned int lbl_83217B38;


void fn_829DBB38(void)

{
  int iVar1;
  
  iVar1 = (((U64)(lbl_83217B30) >> 0) & 0xFFFFFFFF);
  if ((((U64)(lbl_83217B30) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82BA02A8((((U64)(lbl_83217B30) >> 0) & 0xFFFFFFFF));
    fn_829E4C60(iVar1,0x2418);
    lbl_83217B30 = ((((U64)(lbl_83217B30)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(0)) & ((U64)0xFFFFFFFF)) << 0));
  }
  iVar1 = (((U64)(lbl_83217B30) >> 32) & 0xFFFFFFFF);
  if ((((U64)(lbl_83217B30) >> 32) & 0xFFFFFFFF) != 0) {
    fn_829E3C08((((U64)(lbl_83217B30) >> 32) & 0xFFFFFFFF));
    fn_829E4C60(iVar1,0x108);
    lbl_83217B30 = ((((U64)(lbl_83217B30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(0)) & ((U64)0xFFFFFFFF)) << 32));
  }
  iVar1 = lbl_83217B38;
  if (lbl_83217B38 != 0) {
    fn_829E30F8(lbl_83217B38);
    fn_829E4C60(iVar1,0x98);
    lbl_83217B38 = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(0xffffffff83217b08,0,0x5c);
}

