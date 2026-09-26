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
extern int fn_82E85220();


void fn_82F1CDD0(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  if (((param_2 == 0) || (param_2 == 4)) || (param_2 == 5)) {
    iVar1 = *(int *)(param_1 + 0x6d24);
    iVar6 = param_3 + *(int *)(param_1 + 0x2d0) * -0x114;
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0x60) * 0x34 + iVar1 + 0x28);
    iVar3 = *(int *)(*(int *)(iVar6 + 0x60) * 0x34 + iVar1 + 0x28);
    iVar4 = *(int *)(*(int *)(param_3 + -0xb4) * 0x34 + iVar1 + 0x28);
    sVar5 = fn_82E85220(param_1,(longlong)*(int *)(*(int *)(iVar6 + -0xb4) * 0x34 + iVar1 + 0x28) *
                                 (longlong)*param_6,uVar2);
    *param_6 = (int)sVar5;
    sVar5 = fn_82E85220(param_1,(longlong)*param_4 * (longlong)iVar3,uVar2);
    *param_4 = (int)sVar5;
    sVar5 = fn_82E85220(param_1,(longlong)*param_5 * (longlong)iVar4,uVar2);
    *param_5 = (int)sVar5;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(*(int *)(param_3 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x60) * 0x34 +
                     *(int *)(param_1 + 0x6d24) + 0x28);
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0x60) * 0x34 + *(int *)(param_1 + 0x6d24) + 0x28);
    sVar5 = fn_82E85220(param_1,(longlong)iVar1 * (longlong)*param_6,uVar2);
    *param_6 = (int)sVar5;
    sVar5 = fn_82E85220(param_1,(longlong)*param_4 * (longlong)iVar1,uVar2);
    *param_4 = (int)sVar5;
  }
  else if (param_2 == 2) {
    iVar1 = *(int *)(*(int *)(param_3 + -0xb4) * 0x34 + *(int *)(param_1 + 0x6d24) + 0x28);
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0x60) * 0x34 + *(int *)(param_1 + 0x6d24) + 0x28);
    sVar5 = fn_82E85220(param_1,(longlong)iVar1 * (longlong)*param_6,uVar2);
    *param_6 = (int)sVar5;
    sVar5 = fn_82E85220(param_1,(longlong)*param_5 * (longlong)iVar1,uVar2);
    *param_5 = (int)sVar5;
  }
  return;
}

