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
extern int fn_82D61EB0();
extern int fn_82D61EF0();
extern int fn_82D61F28();
extern int fn_82D61F30();
extern int fn_82D61FA0();
extern int fn_82D62008();
extern int fn_82D62010();
extern int fn_82D62140();
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_82D62508(undefined8 param_1)

{
  code *pcStack_70;
  code *pcStack_6c;
  code *pcStack_68;
  code *pcStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  
  pcStack_70 = fn_82D61F30;
  uStack_3f = 0;
  uStack_3e = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  pcStack_44 = fn_82D62140;
  pcStack_48 = fn_82D62010;
  pcStack_68 = fn_82D61FA0;
  pcStack_64 = fn_82D61EB0;
  pcStack_60 = fn_82D61EF0;
  pcStack_5c = fn_82D61F28;
  uStack_58 = 0;
  pcStack_6c = fn_82D62008;
  uStack_40 = 0;
  fn_82D59328(param_1,&pcStack_70,5,3);
  return;
}

