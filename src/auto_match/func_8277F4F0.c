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
extern int fn_8277E590();


void fn_8277F4F0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int aiStack_30 [12];
  
  aiStack_30[1] = 0;
  aiStack_30[0] = param_3;
  if (*param_2 == 0) {
    fn_8277E590((int *)(param_1 + 0x164),aiStack_30);
    uVar3 = *(int *)(param_1 + 0x164) - 1;
    iVar1 = *(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x170));
    param_2[3] = -1;
    param_2[2] = -1;
    *param_2 = iVar1 + (uVar3 * 8 & 0x1ff8);
  }
  else {
    iVar2 = (param_2[1] & 0x3ffU) * 8;
    iVar1 = *(int *)(((uint)param_2[1] >> 8 & 0xfffffc) + *(int *)(param_1 + 0x170));
    if (*(int *)(iVar1 + iVar2) == param_3) {
      return;
    }
    fn_8277E590((int *)(param_1 + 0x164),aiStack_30);
    uVar3 = *(int *)(param_1 + 0x164) - 1;
    *(uint *)(iVar1 + iVar2 + 4) =
         *(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x170)) + (uVar3 * 8 & 0x1ff8);
    param_2[3] = param_2[2];
    param_2[2] = param_2[1];
  }
  param_2[1] = *(int *)(param_1 + 0x164) + -1;
  return;
}

