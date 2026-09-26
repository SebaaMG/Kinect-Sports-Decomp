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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEEFA8();
extern int fn_82FEF2A8();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_83024C50();
extern unsigned int lbl_831BC770;
extern unsigned int uRam8326442c;


ulonglong fn_82FED500(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = fn_82FA5060(lbl_831BC770,0x180);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    fn_82FEEFA8();
    iVar2 = fn_83024C50(uVar1,uRam8326442c,0x400,param_2);
    if ((iVar2 != 1) || (iVar2 = fn_82FEF2A8(0xffffffff831bc774,param_1,uVar1), iVar2 == 0)) {
      fn_83024470(uVar1);
      fn_830224E8(uVar1 + 0x80);
      fn_82FA5190(lbl_831BC770,uVar1);
      uVar1 = 0;
    }
  }
  return uVar1;
}

