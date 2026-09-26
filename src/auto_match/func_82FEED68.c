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
extern int fn_82FEC940();
extern int fn_82FED980();
extern int fn_82FEE718();
extern int fn_82FEEC60();
extern int fn_8300D4C0();
extern int fn_8300D8E8();
extern unsigned int lbl_832643F0;


void fn_82FEED68(void)

{
  bool bVar1;
  char cVar2;
  
  fn_82FEE718();
  fn_82FEC940();
  fn_82FEEC60();
  if (lbl_832643F0 != 0) {
    cVar2 = fn_8300D8E8();
    bVar1 = true;
    if (cVar2 != '\0') goto LAB_82feedb0;
  }
  bVar1 = false;
LAB_82feedb0:
  if (bVar1) {
    fn_8300D4C0(lbl_832643F0);
  }
  fn_82FED980();
  return;
}

