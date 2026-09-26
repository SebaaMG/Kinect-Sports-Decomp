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
extern unsigned int lbl_821AAD20;


void fn_82677488(int param_1,int *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  piVar4 = (int *)*param_2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x40))(piVar4,param_3,param_2[7],param_2[8],0);
    uVar6 = lbl_821AAD20;
    puVar5 = *(ulonglong **)(param_1 + 0xd8);
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    *(undefined4 *)(puVar5 + param_4 * 2 + 0xf1) = lbl_821AAD20;
    *(int *)(puVar5 + (param_4 + 0x78) * 2) = iVar1;
    *(int *)((int)puVar5 + param_4 * 0x10 + 0x784) = iVar2;
    uVar7 = param_4 + 1;
    *(int *)((int)puVar5 + param_4 * 0x10 + 0x78c) = iVar3;
    *puVar5 = 0x8000000000000000U >> ((ulonglong)(param_4 >> 2) & 0x7f) | *puVar5;
    iVar1 = param_2[4];
    iVar2 = param_2[5];
    puVar5 = *(ulonglong **)(param_1 + 0xd8);
    iVar3 = param_2[6];
    *(undefined4 *)(puVar5 + uVar7 * 2 + 0xf1) = uVar6;
    *(int *)((int)puVar5 + uVar7 * 0x10 + 0x784) = iVar2;
    *(int *)((int)puVar5 + uVar7 * 0x10 + 0x78c) = iVar3;
    *(int *)(puVar5 + (param_4 + 0x79) * 2) = iVar1;
    *puVar5 = 0x8000000000000000U >> ((ulonglong)(uVar7 >> 2) & 0x7f) | *puVar5;
  }
  return;
}

