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
extern int fn_82695750();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826BF7B0();


void fn_826C0608(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82695750(auStack_40,param_4);
  fn_826BF7B0(param_1,param_2,param_3,auStack_40);
  fn_82696330(auStack_40);
  iVar1 = *(int *)(param_1 + 4);
  auStack_50[0] = 3;
  uVar2 = *param_3;
  iVar3 = *(int *)(iVar1 + 0x10);
  uVar4 = fn_826961B0(auStack_40,param_2);
  (**(code **)(iVar3 + 0x28))(iVar1 + 0x10,param_3,(ulonglong)uVar2 + 0x130,uVar4,auStack_50);
  fn_82696330(auStack_40);
  return;
}

