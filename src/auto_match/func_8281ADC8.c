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
extern int fn_82819398();
extern int fn_8281A1A0();
extern int fn_82822E38();
extern int fn_828233A8();


void fn_8281ADC8(int param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int aiStack_30 [12];
  
  uVar1 = *(uint *)(param_1 + 0x7c);
  fn_828233A8(param_1 + 0x88,aiStack_30,0xffffffff828192c8,param_2);
  uVar2 = (ulonglong)(short)((int)(aiStack_30[0] - uVar1) >> 6);
  fn_82819398((ulonglong)uVar1,param_1 + 0x108,uVar2);
  fn_82822E38((uVar2 & 0x3ffffff) * 0x40 + (ulonglong)uVar1);
  fn_8281A1A0(param_1,uVar2);
  return;
}

