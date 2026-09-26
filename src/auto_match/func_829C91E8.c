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
extern int fn_829F5188();
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215064;
extern unsigned int lbl_83217270;


void fn_829C91E8(void)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)lbl_83217270 + 0x74;
  if (lbl_83215008 == 0) {
    lVar1 = 0;
  }
  fn_829F5188(0xffffffff8321565c,-(ulonglong)(lbl_83215064 != 0) & 0xffffffff83215628,
                    0xffffffff8321723c,0xffffffff83217204,0xffffffff832171cc,lVar1,
                    0xffffffff83217178,0xffffffff832171a0);
  return;
}

