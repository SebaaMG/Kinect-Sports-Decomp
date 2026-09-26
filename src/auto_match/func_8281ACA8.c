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
extern int fn_8281A000();
extern int fn_82822E38();
extern int fn_82822F60();
extern int fn_828233A0();


longlong fn_8281ACA8(int param_1,short *param_2,undefined8 param_3,ulonglong param_4,
                      longlong param_5,longlong param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  fn_8281A000();
  iVar2 = *(int *)(param_1 + 0x7c);
  fn_82819398(iVar2,param_1 + 0x84,*param_2);
  fn_82822E38(*param_2 * 0x40 + iVar2);
  fn_82822E38(*param_2 * 0x40 + iVar2 + 0x10);
  fn_828233A0(param_1 + 0xd8);
  sVar1 = *param_2;
  if (*(short *)(param_1 + 0x108) != -1) {
    *(short *)(*(short *)(param_1 + 0x108) * 0x40 + iVar2 + 0x32) = sVar1;
  }
  iVar3 = sVar1 * 0x40 + iVar2;
  *(undefined2 *)(iVar3 + 0x30) = *(undefined2 *)(param_1 + 0x108);
  *(undefined2 *)(iVar3 + 0x32) = 0xffff;
  *(short *)(param_1 + 0x108) = sVar1;
  fn_82822F60(param_1 + 0x88,*param_2 * 0x40 + iVar2,0xffffffff82819260,0);
  iVar3 = *param_2 * 0x40 + iVar2;
  param_6 = (((ulonglong)*(uint *)(iVar3 + 0x20) + (param_4 & 0xffff) + param_5 + param_6) - 1 &
            ~((param_4 & 0xffff) - 1)) - param_6;
  *(int *)(iVar3 + 0x3c) = (int)param_6;
  iVar2 = *param_2 * 0x40 + iVar2;
  *(byte *)(iVar2 + 0x36) = *(byte *)(iVar2 + 0x36) | 1;
  return param_6 - param_5;
}

