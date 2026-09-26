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
extern int fn_82529D38();
extern unsigned int lbl_832978C8;
extern unsigned int lbl_832978CC;
extern unsigned int lbl_832978D0;
extern unsigned int lbl_832978D4;
extern unsigned int lbl_832978D8;
extern unsigned int lbl_832978DC;
extern unsigned int lbl_832978E0;
extern unsigned int lbl_832978F4;
extern unsigned int lbl_832978FC;
extern unsigned int lbl_83297A40;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern U64 storeVectorElementWordIndexed();


undefined8 fn_825BC4F8(int param_1,undefined4 param_2)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if ((lbl_83297A40 & 1) == 0) {
    lbl_83297A40 = lbl_83297A40 | 1;
  }
  lbl_832978C8 = 0;
  fn_82529D38(param_1,&uStack_58);
  lbl_832978FC = param_2;
  lbl_832978CC = storeVectorElementWordIndexed(in_vs32,0xffffffff832978c8,4);
  lbl_832978D0 = storeVectorElementWordIndexed(in_vs45,0xffffffff832978cc,4);
  lbl_832978D4 = storeVectorElementWordIndexed(in_vs44,0xffffffff832978cc,8);
  lbl_832978D8 = uStack_58;
  lbl_832978E0 = uStack_50;
  lbl_832978DC = uStack_54;
  lbl_832978C8 = lbl_832978C8 | 0x4d;
  lbl_832978F4 = *(undefined4 *)(param_1 + 0xa8);
  return 0xffffffff832978c8;
}

