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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8280D8E0();
extern int fn_8280DD50();
extern int fn_8280DF98();
extern int fn_8280E418();
extern int fn_828105C8();
extern int fn_82810B78();
extern int fn_8281E528();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8281E7B8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_8280DD50(auStack_40);
  dVar1 = (double)lbl_821AAD20;
  fn_828105C8(dVar1,(double)lbl_82002AE0,dVar1,auStack_50);
  fn_828105C8(dVar1,dVar1,(double)lbl_8200133C,auStack_60);
  fn_8281E528(param_1,auStack_60,param_2);
  fn_8280DF98(param_1,auStack_50,auStack_70);
  fn_82810B78(auStack_70,auStack_70);
  fn_8281E528(auStack_40,auStack_70,param_3);
  fn_8280D8E0(auStack_40,param_1,param_1);
  fn_8280E418(param_1,param_1);
  return;
}

