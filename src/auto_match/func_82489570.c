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
extern unsigned int *auStack_40;
extern int fn_8251CF80();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82544F40();
extern unsigned int lbl_83276741;
extern unsigned int lbl_832810F0;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82489570(void)

{
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (lbl_832810F0 != 0) {
    fn_82544F40();
    fn_8251FA58(lbl_832810F0);
    lbl_832810F0 = 0;
  }
  if (lbl_83276741 == '\0') {
    lbl_83276741 = '\x01';
  }
  fn_82520158(0xffffffff821c2274,auStack_40,0);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  fn_8251CF80(auStack_40,0,&uStack_30);
  return;
}

