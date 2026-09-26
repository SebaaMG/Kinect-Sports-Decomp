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
extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_64;
extern int fn_8263B958();
extern int fn_82F68CC0();
extern unsigned int uStack_20;
extern unsigned int uStack_30;
extern unsigned int uStack_70;


undefined4 fn_82A94048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_70;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [32];
  uint uStack_30;
  uint uStack_20;
  
  fn_82F68CC0(auStack_50,param_1,0x34);
  uStack_30 = uStack_30 & 0xfff;
  uStack_20 = uStack_20 & 0xfff;
  fn_8263B958(auStack_50,param_2,param_3,auStack_54,auStack_58,auStack_5c,auStack_60,
                    auStack_64);
  return uStack_70;
}

