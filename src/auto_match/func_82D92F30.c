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


void fn_82D92F30(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  iVar4 = *param_3;
  if (*param_3 < *(int *)(param_1 + 8)) {
    iVar4 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 <= param_3[1]) {
    iVar4 = param_3[1];
  }
  *(int *)(param_1 + 8) = iVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[1];
  *(int *)(param_1 + 0x10) = param_3[2] + *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3[3];
  iVar4 = *(int *)(param_2 + 0x30);
  iVar1 = param_3[3];
  iVar2 = param_3[2];
  *(short *)(iVar4 + 0x14) = *(short *)(iVar4 + 0x14) + (short)param_3[1];
  *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + (short)iVar2;
  *(short *)(iVar4 + 0x18) = *(short *)(iVar4 + 0x18) + (short)iVar1;
  uVar3 = (uint)*(ushort *)(*(int *)(param_2 + 0x30) + 0x14);
  uVar5 = *(uint *)(param_1 + 8);
  if ((int)*(uint *)(param_1 + 8) <= (int)uVar3) {
    uVar5 = uVar3;
  }
  *(uint *)(param_1 + 8) = uVar5;
  return;
}

