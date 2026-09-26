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
extern int fn_82D59328();
extern int fn_82D67D58();
extern int fn_82D67DE0();
extern int fn_82D67E28();
extern int fn_82D67E30();
extern int fn_82D67E70();
extern int fn_82D67EF0();
extern int fn_82D67EF8();
extern unsigned int uStack_2e;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82D68118(undefined8 param_1)

{
  code *pcStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  code *pcStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  
  uStack_2f = 0;
  uStack_2e = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  pcStack_60 = fn_82D67E30;
  pcStack_34 = fn_82D67EF8;
  uStack_38 = 0;
  pcStack_58 = fn_82D67E70;
  pcStack_54 = fn_82D67D58;
  pcStack_50 = fn_82D67DE0;
  pcStack_4c = fn_82D67E28;
  uStack_48 = 0;
  pcStack_5c = fn_82D67EF0;
  uStack_30 = 0;
  fn_82D59328(param_1,&pcStack_60,4,4);
  return;
}

