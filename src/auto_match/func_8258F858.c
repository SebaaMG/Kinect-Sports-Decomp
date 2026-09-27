typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


void fn_8258F858(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,int *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = (**(code **)(*param_6 + 0x10))(param_6,param_7);
  iVar2 = *(int *)(param_4 + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    param_4 = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  Jeff_8258F748(param_1,param_2 + -0xc,*(undefined4 *)(param_4 + 0x1c),uVar3);
  return;
}
