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
extern unsigned int *auStack_70;
extern int fn_82CE2A00();


void fn_82CE2008(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 *in_stack_00000074;
  undefined1 auStack_70 [112];
  
  lVar3 = 0x4c;
  if ((param_3 & 0x200) != 0) {
    lVar3 = 0x50;
  }
  iVar1 = (int)(param_4 + 0x1e20);
  XMsgInProcessCall(0xfc,0x58004,auStack_70,0);
  iVar2 = fn_82CE2A00(param_5,param_1,0xffffffff8323a8f0,param_2,param_3,lVar3 + param_5,
                            param_4 + 0x1e20,in_stack_0000006c);
  if (-1 < iVar2) {
    *in_stack_0000005c = iVar1 + (int)(lVar3 + param_5);
    *in_stack_00000064 = param_6 - (iVar1 + (int)lVar3 + 0x1000);
    *in_stack_00000074 = (int)param_5;
  }
  return;
}

