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
extern int fn_82D59158();
extern int fn_82D60418();
extern int fn_82D60698();
extern int fn_82D60928();
extern int fn_82D60988();
extern int fn_82D60AC8();
extern int fn_82D60B10();
extern int fn_82D66F00();
extern int fn_82D75FD0();
extern unsigned int uStack_1f;
extern unsigned int uStack_20;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82D609F8(undefined8 param_1)

{
  code *pcStack_50;
  code *pcStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  code *pcStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  
  pcStack_4c = fn_82D60AC8;
  pcStack_48 = fn_82D60B10;
  pcStack_44 = fn_82D66F00;
  uStack_40 = 1;
  pcStack_50 = fn_82D60988;
  uStack_3f = 1;
  fn_82D59158(param_1,&pcStack_50,0x12,0x19);
  uStack_1f = 1;
  pcStack_30 = fn_82D60928;
  pcStack_28 = fn_82D60418;
  pcStack_24 = fn_82D75FD0;
  pcStack_2c = fn_82D60698;
  uStack_20 = 0;
  fn_82D59158(param_1,&pcStack_30,0x19,0x12);
  return;
}

