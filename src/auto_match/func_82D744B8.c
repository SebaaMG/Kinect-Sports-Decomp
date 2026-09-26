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
extern int fn_82D741B8();
extern int fn_82D741C8();
extern int fn_82D74228();
extern int fn_82D74238();
extern int fn_82D74248();
extern int fn_82D742B0();
extern int fn_82D743F0();
extern unsigned int uStack_2e;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_82D744B8(undefined8 param_1)

{
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  
  pcStack_60 = fn_82D743F0;
  pcStack_34 = fn_82D742B0;
  uStack_2f = 0;
  uStack_2e = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  pcStack_48 = fn_82D74248;
  pcStack_44 = fn_82D741C8;
  pcStack_40 = fn_82D74228;
  pcStack_3c = fn_82D74238;
  pcStack_5c = fn_82D741B8;
  uStack_30 = 1;
  fn_82D59328(param_1,&pcStack_60,0xffffffffffffffff,9);
  return;
}

