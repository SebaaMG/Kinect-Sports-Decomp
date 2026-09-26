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
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_829C7AA8();
extern int fn_829C7FC8();
extern int fn_829C8848();
extern unsigned int lbl_82028800;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B18;
extern unsigned int lbl_83217B20;


longlong fn_829DB5F0(void)

{
  longlong lVar1;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [2];
  
  fn_829C7AA8(0,1);
  lVar1 = fn_829C7FC8(0,1,6,&fStack_1c);
  if (((lVar1 < 0) || (lVar1 = fn_829C7FC8(0,1,7,&fStack_20), lVar1 < 0)) ||
     (lVar1 = fn_829C7FC8(0,1,8,afStack_18), lVar1 < 0)) goto LAB_829db718;
  lbl_83217B18 = ((((U64)(lbl_83217B18)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(fStack_1c - fStack_20)) & ((U64)0xFFFFFFFF)) << 0));
  lbl_83217B18 = ((((U64)(lbl_83217B18)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(afStack_18[0] - fStack_20)) & ((U64)0xFFFFFFFF)) << 32));
  if ((((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) < lbl_821AAD20) {
    if (lbl_821AAD20 <= (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) {
      lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(lbl_82028800 - (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 0));
      lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(lbl_820570E0 - (((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 32));
      goto LAB_829db718;
    }
    lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(lbl_82028800)) & ((U64)0xFFFFFFFF)) << 0));
    if ((((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) < (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) {
      lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(lbl_820570E0 - (((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 32));
      goto LAB_829db718;
    }
  }
  else {
    lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(lbl_820570E0)) & ((U64)0xFFFFFFFF)) << 32));
    if ((((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) < (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) {
      lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(lbl_82028800 - (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 0));
      goto LAB_829db718;
    }
    lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(lbl_82028800 - (((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 0));
    if (lbl_821AAD20 <= (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) goto LAB_829db718;
  }
  lbl_83217B20 = ((((U64)(lbl_83217B20)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(lbl_820570E0 - (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 32));
LAB_829db718:
  fn_829C8848(0,1);
  return lVar1;
}

