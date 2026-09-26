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
extern int fn_8265C990();
extern int fn_82A828B8();
extern int fn_82A84B10();
extern int fn_82A84B20();
extern int fn_82A86110();
extern unsigned int lbl_8322344C;
extern unsigned int lbl_8322344D;
extern unsigned int lbl_83223450;
extern unsigned int lbl_832234AC;


void fn_82A81F68(void)

{
  fn_82A828B8();
  lbl_8322344D = 0;
  fn_82A86110();
  lbl_8322344C = 0;
  XamAvatarShutdown();
  fn_82A84B10();
  fn_82A84B20();
  if (lbl_83223450 != 0) {
    fn_8265C990(lbl_83223450,0x20980000);
    lbl_83223450 = 0;
  }
  lbl_832234AC = 0;
  return;
}

