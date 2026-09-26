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
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;
extern unsigned int lbl_831751D8;
extern unsigned int lbl_8322B180;
extern unsigned int lbl_8322B1BC;
extern unsigned int lbl_8322B1C0;


undefined8 fn_82BE5848(undefined *param_1,undefined *param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  fn_82BEA1F8(0xffffffff8322b184,0xffffffff820e92ec);
  if ((lbl_8322B180 == 0) && (lbl_831751D8 != 0)) {
    lbl_831751D0 = param_1;
    if (param_1 == (undefined *)0x0) {
      lbl_831751D0 = lbl_8322B1BC;
    }
    lbl_831751CC = param_2;
    if (param_2 == (undefined *)0x0) {
      lbl_831751CC = lbl_8322B1C0;
    }
    uVar1 = 1;
    lbl_831751D8 = param_3;
  }
  fn_82BEA230(0xffffffff8322b184,0xffffffff820e92ec);
  return uVar1;
}

