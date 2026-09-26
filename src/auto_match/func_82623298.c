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
extern unsigned int *auStack_60;
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8264B7E0();
extern int fn_82A1BB18();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82623298(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x2a88) != 0) {
    fn_82A1BB18();
  }
  uVar2 = fn_82A1BB18();
  *(undefined4 *)(iVar1 + 0x2a88) = uVar2;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auStack_60[0] = 0xffffffffffffffff;
  fn_8264B7E0(*param_1,param_1[1],0x10,auStack_60,0,0,0);
  fn_8263A1B8(*param_1,0,param_2);
  fn_8263A508(*param_1,param_3);
  return;
}

