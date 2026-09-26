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
extern int fn_82D53D68();
extern int fn_82D542B8();
extern int fn_82D54A38();
extern int fn_82D54E78();
extern int fn_82D54EC0();
extern int fn_82D55500();
extern int fn_82D556E0();
extern int fn_82D57DB8();
extern int fn_82D58028();
extern int fn_82D59158();
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;
extern unsigned int uStack_6f;
extern unsigned int uStack_70;


void fn_82D53F68(undefined8 param_1)

{
  code *pcStack_80;
  code *pcStack_7c;
  code *pcStack_78;
  code *pcStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  code *pcStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  code *pcStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  code *pcStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  
  pcStack_7c = fn_82D54E78;
  pcStack_78 = fn_82D54EC0;
  pcStack_74 = fn_82D53D68;
  uStack_70 = 1;
  pcStack_80 = fn_82D54A38;
  uStack_6f = 1;
  fn_82D59158(param_1,&pcStack_80,10,0x12);
  uStack_4f = 1;
  pcStack_60 = fn_82D542B8;
  pcStack_58 = fn_82D57DB8;
  pcStack_54 = fn_82D55500;
  pcStack_5c = fn_82D58028;
  uStack_50 = 0;
  fn_82D59158(param_1,&pcStack_60,0x12,10);
  uStack_30 = 0;
  uStack_2f = 1;
  pcStack_40 = fn_82D556E0;
  pcStack_3c = fn_82D58028;
  pcStack_34 = fn_82D55500;
  pcStack_38 = fn_82D57DB8;
  fn_82D59158(param_1,&pcStack_40,10,10);
  return;
}

