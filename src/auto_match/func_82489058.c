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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82520158();
extern int fn_82528B78();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_83276728;
extern unsigned int lbl_8327672C;
extern unsigned int lbl_83276730;


void fn_82489058(void)

{
  ulonglong uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  if (lbl_83276728 == 0) {
    fn_82520158(0xffffffff821beacc,auStack_20,0);
    fn_82520158(0xffffffff821beae0,auStack_1c,0);
    uVar1 = fn_8265C9E0(0x24);
    if ((uVar1 & 0xffffffff) == 0) {
      lbl_8327672C = 0;
    }
    else {
      lbl_8327672C = fn_82528B78(uVar1,auStack_20,0xffffffff821bd350);
    }
    uVar1 = fn_8265C9E0(0x24);
    if ((uVar1 & 0xffffffff) == 0) {
      lbl_83276730 = 0;
    }
    else {
      lbl_83276730 = fn_82528B78(uVar1,auStack_1c,0xffffffff821beaf0);
    }
    lbl_83276728 = 1;
  }
  fn_82528BF8(lbl_8327672C,0xffffffff82198508,0xffffffff831d096c,0x80,1,1);
  fn_82528BF8(lbl_8327672C,0xffffffff82198518,0xffffffff831d0a6c,0x80,1,1);
  return;
}

