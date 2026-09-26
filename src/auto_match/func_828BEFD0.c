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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_8288A398();
extern int fn_828C4348();
extern int fn_828C4370();
extern int fn_828C6408();
extern int fn_828C6AF0();
extern int fn_828E9D60();
extern int fn_828E9D90();


void fn_828BEFD0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [40];
  
  if ((int)param_1 == 0x19) {
    fn_8288A398();
    fn_828C4370(auStack_30,0xffffffff8321434c);
    iVar3 = fn_828E9D90(param_2);
    uVar1 = iVar3 + 7U & 0xfffffff8;
    uVar2 = fn_828C4348(auStack_28,auStack_30);
    fn_828C6408(0xffffffff8321434c,uVar2,param_2);
    uVar4 = fn_828E9D90(param_2);
    if (uVar1 < uVar4) {
      fn_828E9D60(param_2,uVar1);
    }
  }
  else {
    fn_828C6AF0(0xffffffff8321434c,param_1,param_2);
  }
  return;
}

