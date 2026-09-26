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
extern int fn_82D6A0E8();
extern int fn_82D74E60();
extern int fn_82D75010();
extern int fn_82D75FD0();
extern unsigned int uStack_10;
extern unsigned int uStack_f;


void fn_82D6A198(undefined8 param_1)

{
  code *pcStack_20;
  undefined *puStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  
  puStack_1c = &fn_82D74E60;
  pcStack_20 = fn_82D6A0E8;
  pcStack_18 = fn_82D75010;
  pcStack_14 = fn_82D75FD0;
  uStack_10 = 0;
  uStack_f = 1;
  fn_82D59158(param_1,&pcStack_20,0x12,0x12);
  return;
}

