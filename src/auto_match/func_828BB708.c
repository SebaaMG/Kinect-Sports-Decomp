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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_825174B8();
extern int fn_828BAB98();
extern int fn_828BACE8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA268();
extern unsigned int iStack_34;


undefined8 fn_828BB708(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint auStack_40 [2];
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uVar1 = fn_828EA268((ulonglong)*(uint *)(param_2 + 0x100) - 1);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (iVar2 - iVar3 < (int)uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_828E9FF8(param_3,uVar1);
  }
  auStack_40[0] = **(uint **)(param_2 + 0xfc);
  fn_828BAB98(auStack_40,uVar1);
  fn_828BACE8(auStack_38,param_3);
  fn_825174B8(param_1,(ulonglong)auStack_40[0] + 0x28,auStack_38);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return param_1;
}

