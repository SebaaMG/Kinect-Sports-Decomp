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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


void fn_82BD96A0(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 auStack_30 [6];
  
  uVar6 = 0;
  auStack_40[0] = 0;
  puStack_34 = auStack_40;
  uStack_38 = 1;
  if ((param_2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar2 = lbl_821AAD20;
    uVar1 = lbl_82002AE0;
    puVar5 = auStack_30;
    puVar4 = (uint *)(param_1 + 0x24);
    lVar7 = 4;
    do {
      if (*puVar4 < 0x10000) {
        if (((uint)*(byte *)(param_1 + 0x40) & 1 << (uVar6 & 0x3f)) != 0) goto LAB_82bd9730;
        *puVar5 = uVar1;
      }
      else {
LAB_82bd9730:
        *puVar5 = uVar2;
      }
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(int *)(param_1 + 0x4c) = (int)param_2;
    if ((param_2 & 0xffffffff) == 0) {
      param_2 = (ulonglong)*(uint *)(param_1 + 0x50);
    }
    else {
      auStack_30[0] = uVar1;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48),&uStack_38);
    if (-1 < iVar3) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x40))
                (*(int **)(param_1 + 0x48),param_2,1,4,auStack_30,0);
    }
  }
  return;
}

