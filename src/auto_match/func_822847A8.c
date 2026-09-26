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
extern unsigned int *auStack_290;
extern unsigned int *auStack_490;
extern unsigned int *auStack_78;
extern unsigned int *auStack_90;
extern int fn_8227CB30();
extern int fn_82284738();
extern int fn_82284BA0();
extern int fn_82284FD0();
extern int fn_82359C18();
extern int fn_82F4DCF8();
extern int fn_82F64988();
extern unsigned int iStack_60;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_80;


int fn_822847A8(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined2 auStack_490 [256];
  undefined2 auStack_290 [256];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined1 auStack_78 [16];
  undefined4 uStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar1 = fn_82284738();
  uStack_80 = 0;
  uStack_68 = 0;
  fn_8227CB30(auStack_90,param_2);
  fn_8227CB30(auStack_78,param_4);
  *(undefined4 *)(iVar1 + 0x15c) = 0xffffffff;
  uStack_5c = param_5;
  uStack_58 = param_6;
  fn_82F4DCF8(0xffffffffffffffff);
  if ((param_1 & 0xffffffff) == 0) {
    auStack_490[0] = 0;
  }
  else {
    fn_82F64988(auStack_490,0x20,param_1);
  }
  if ((param_3 & 0xffffffff) == 0) {
    auStack_290[0] = 0;
  }
  else {
    fn_82F64988(auStack_290,0x20,param_3);
  }
  iStack_60 = *(int *)(iVar1 + 0x130) + 1;
  *(int *)(iVar1 + 0x130) = iStack_60;
  fn_82284FD0(iVar1 + 0x148,auStack_490);
  fn_82284BA0(iVar1,auStack_490,auStack_290,uStack_5c,uStack_58);
  iVar1 = iStack_60;
  fn_82359C18(auStack_78);
  fn_82359C18(auStack_90);
  fn_82359C18(param_2);
  fn_82359C18(param_4);
  return iVar1;
}

