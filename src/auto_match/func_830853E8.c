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


void fn_830853E8(int *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  if (7 < param_2) {
    iVar4 = *param_1;
    puVar5 = (uint *)(iVar4 + 0x40);
    if (*(int *)(iVar4 + 0x40) < 0) {
      *(undefined8 *)(iVar4 + 0x20) = *(undefined8 *)puVar5;
      *(uint *)(iVar4 + 0x20) =
           ((int)((int)puVar5 + ((*puVar5 & 0x7ffffffc) - iVar4) + -0x20) >> 3) << 3 |
           *(uint *)(iVar4 + 0x20) & 0x80000003;
    }
    else {
      *(undefined8 *)(iVar4 + 0x20) = *(undefined8 *)puVar5;
    }
    uVar1 = *param_4;
    puVar5 = (uint *)((int)(((ulonglong)uVar1 + 8 & 0xffffffff) << 3) + iVar4);
    if ((int)*puVar5 < 0) {
      uVar2 = *puVar5;
      *(undefined8 *)(iVar4 + 0x28) = *(undefined8 *)puVar5;
      *(uint *)(iVar4 + 0x28) =
           ((int)((int)puVar5 + ((uVar2 & 0x7ffffffc) - iVar4) + -0x28) >> 3) << 3 |
           *(uint *)(iVar4 + 0x28) & 0x80000003;
    }
    else {
      *(undefined8 *)(iVar4 + 0x28) = *(undefined8 *)puVar5;
    }
    uVar3 = (ulonglong)param_4[1] + (ulonglong)uVar1 + 8;
    puVar5 = (uint *)((int)((uVar3 & 0xffffffff) << 3) + iVar4);
    if ((int)*puVar5 < 0) {
      uVar1 = *puVar5;
      *(undefined8 *)(iVar4 + 0x30) = *(undefined8 *)puVar5;
      *(uint *)(iVar4 + 0x30) =
           ((int)((int)puVar5 + ((uVar1 & 0x7ffffffc) - iVar4) + -0x30) >> 3) << 3 |
           *(uint *)(iVar4 + 0x30) & 0x80000003;
    }
    else {
      *(undefined8 *)(iVar4 + 0x30) = *(undefined8 *)puVar5;
    }
    puVar5 = (uint *)((int)((param_4[2] + uVar3 & 0xffffffff) << 3) + iVar4);
    if ((int)*puVar5 < 0) {
      uVar1 = *puVar5;
      *(undefined8 *)(iVar4 + 0x38) = *(undefined8 *)puVar5;
      *(uint *)(iVar4 + 0x38) =
           ((int)((int)puVar5 + ((uVar1 & 0x7ffffffc) - iVar4) + -0x38) >> 3) << 3 |
           *(uint *)(iVar4 + 0x38) & 0x80000003;
    }
    else {
      *(undefined8 *)(iVar4 + 0x38) = *(undefined8 *)puVar5;
    }
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  iVar4 = param_3[2];
  if (param_3[2] <= param_3[3]) {
    iVar4 = param_3[3];
  }
  iVar6 = param_3[1];
  if (param_3[1] < *param_3) {
    iVar6 = *param_3;
  }
  if (iVar6 <= iVar4) {
    iVar6 = iVar4;
  }
  param_1[3] = iVar6;
  return;
}

