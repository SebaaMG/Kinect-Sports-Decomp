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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82526C70();
extern int fn_8258C000();
extern int fn_8258D950();
extern int fn_8258D9E0();
extern int fn_8266C738();
extern int fn_8266EC60();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_82671AC8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_f1;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [104];
  
  uVar1 = fn_82F6A548();
  uVar3 = extraout_f1;
  fn_8266EC60();
  iVar4 = fn_8266C738();
  if (iVar4 != 0) {
    fn_82526C70(auStack_80,0x40,0xffffffff82002cf0,param_6,uVar1);
    uVar1 = fn_82230110(auStack_a0,auStack_80);
    uVar2 = fn_8258C000();
    fn_8258D950(uVar3,param_2,uVar2,uVar1);
    uVar3 = fn_82230110(auStack_a0,auStack_80);
    uVar1 = fn_8258C000();
    fn_8258D9E0(param_3,param_4,uVar1,uVar3);
  }
  fn_82F6A594();
  return;
}

