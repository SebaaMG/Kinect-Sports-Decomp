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
extern int fn_8265CA20();
extern int fn_828AC8F0();
extern int fn_828E9D28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828EA0D0();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


undefined8 fn_828AC950(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  puStack_30 = auStack_50;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 2;
  fn_828E9D28(auStack_40,auStack_50,2);
  fn_828AC8F0(param_1,auStack_40);
  fn_828E9D40(auStack_40);
  iVar1 = fn_828E9DA8(auStack_40);
  iVar2 = fn_828E9D90(auStack_40);
  if (0xb < iVar1 - iVar2) {
    uVar3 = fn_828EA0D0(auStack_40,0xc);
  }
  if (iStack_28 != 0) {
    fn_8265CA20();
  }
  return uVar3;
}

