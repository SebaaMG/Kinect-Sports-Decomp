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
extern int fn_82D74770();
extern int fn_82D74788();
extern int fn_82D747B0();
extern int fn_82D747D8();
extern int fn_82D747F0();
extern int fn_82D74808();
extern int fn_82D74820();
extern int fn_82D74838();
extern int fn_82D74850();
extern int fn_82D74908();
extern unsigned int uStack_2e;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_58;


void fn_82D74958(undefined8 param_1)

{
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  
  pcStack_50 = fn_82D74820;
  pcStack_4c = fn_82D74838;
  pcStack_54 = fn_82D74808;
  pcStack_60 = fn_82D74850;
  uStack_2f = 0;
  pcStack_34 = fn_82D74908;
  pcStack_5c = fn_82D74770;
  pcStack_48 = fn_82D74788;
  uStack_2e = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  pcStack_44 = fn_82D747B0;
  pcStack_40 = fn_82D747D8;
  pcStack_3c = fn_82D747F0;
  uStack_30 = 1;
  fn_82D59328(param_1,&pcStack_60,0xffffffffffffffff,0xffffffffffffffff);
  return;
}

