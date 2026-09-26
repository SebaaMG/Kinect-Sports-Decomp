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
extern unsigned int *auStack_140;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_350;
extern unsigned int *auStack_370;
extern unsigned int *auStack_390;
extern unsigned int *auStack_3b0;
extern unsigned int fStack_2b0;
extern unsigned int fStack_2c0;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82392860();
extern int fn_82392CE0();


undefined8
fn_82391AB0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [32];
  undefined1 auStack_370 [32];
  undefined1 auStack_350 [144];
  float fStack_2c0;
  float fStack_2b0;
  undefined1 auStack_2a0 [176];
  undefined1 auStack_1f0 [176];
  undefined1 auStack_140 [320];
  
  uVar1 = fn_822C5B18(auStack_390);
  uVar2 = fn_822C5B18(auStack_3b0,uVar1);
  uVar3 = fn_822C5B18(auStack_370,uVar2);
  fn_82392CE0(param_1,auStack_350,uVar3,param_6,param_7,param_8,param_9);
  fStack_2c0 = (float)param_2;
  fn_82359C18(uVar2);
  fStack_2b0 = (float)param_3;
  fn_82359C18(uVar1);
  uVar1 = fn_82392860(auStack_1f0,auStack_350);
  uVar2 = fn_82392860(auStack_140,uVar1);
  fn_82392860(auStack_2a0,uVar2);
  fn_82359C18(uVar2);
  fn_82359C18(uVar1);
  fn_82392860(param_4,auStack_2a0);
  fn_82359C18(auStack_2a0);
  fn_82359C18(auStack_350);
  fn_82359C18(param_5);
  return param_4;
}

