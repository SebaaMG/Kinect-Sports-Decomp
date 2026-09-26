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
extern int fn_82FF7438();
extern int fn_82FF74B8();
extern int fn_830178D8();
extern int fn_83018220();
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642FC;


undefined8 fn_8300CA50(undefined8 param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  
  fn_830178D8(lbl_832642FC,param_1);
  fn_82FF74B8(lbl_832642E8,param_1);
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 1;
  }
  else if (param_3 == 0) {
    uVar1 = fn_83018220(lbl_832642FC,param_1,param_2,0);
  }
  else if (param_3 == 1) {
    uVar1 = fn_82FF7438(lbl_832642E8,param_1,param_2);
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

