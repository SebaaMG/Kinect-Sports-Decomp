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


void fn_82DFA398(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(float *)(param_2 + 0x1c) == lbl_821AAD20) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar6 = (ulonglong)uVar1;
    trapWord(6,uVar6,0);
    uVar4 = (*(uint *)(param_1 + 8) + uVar6) - 1;
    trapWord(5,uVar6 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),0xffff);
    if (*(float *)((int)((uVar4 - (longlong)((int)uVar4 / (int)uVar1) * (longlong)(int)uVar1 &
                         0xffffffff) << 5) + *(int *)(param_1 + 0x10) + 0x1c) == lbl_821AAD20) {
      return;
    }
  }
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  iVar7 = *(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 0x10);
  puVar3 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  uVar5 = *(int *)(param_1 + 8) + 1;
  uVar1 = *(uint *)(param_1 + 0xc);
  trapWord(6,(ulonglong)uVar1,0);
  *(uint *)(param_1 + 8) = uVar5 - ((int)uVar5 / (int)uVar1) * uVar1;
  trapWord(5,(ulonglong)uVar1 &
             ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),0xffff);
  return;
}

