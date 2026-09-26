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
extern int fn_8304FCF0();


undefined8
fn_830510E0(int param_1,int param_2,longlong *param_3,undefined4 *param_4,uint *param_5,
             ulonglong param_6)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  *(int *)(param_1 + 0x60) = param_2;
  if (*param_3 < 0) {
    return 0x1f;
  }
  *(longlong *)(param_1 + 0x18) = *param_3;
  *(longlong *)(param_1 + 0x20) = param_3[1];
  *(longlong *)(param_1 + 0x28) = param_3[2];
  *(longlong *)(param_1 + 0x30) = param_3[3];
  iVar3 = (**(code **)(**(int **)(param_2 + 0x80) + 8))
                    (*(int **)(param_2 + 0x80),(longlong *)(param_1 + 0x18));
  *(int *)(param_1 + 0x6c) = iVar3;
  if (iVar3 == 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar2 = *(uint *)(param_1 + 0x6c);
  uVar5 = (ulonglong)uVar2;
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x88) = *param_4;
  trapWord(6,uVar5,0);
  *(uint *)(param_1 + 0x8c) = ((uint)param_4[1] / uVar2) * uVar2;
  if (lVar4 < (longlong)(ulonglong)(uint)param_4[2]) {
    *(int *)(param_1 + 0x90) = (int)lVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = param_4[2];
  }
  iVar3 = param_4[3];
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x94) = iVar3;
  uVar1 = *(undefined1 *)(param_4 + 4);
  *(ulonglong *)(param_1 + 0x80) =
       (longlong)*(int *)(param_1 + 0x20) * (longlong)(int)uVar2 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x70) = uVar1;
  if (param_5 == (uint *)0x0) {
    *(int *)(param_1 + 0x68) = (int)param_6;
    goto LAB_83051264;
  }
  uVar9 = *param_5;
  if ((ulonglong)uVar9 == 0) {
    uVar6 = (ulonglong)param_5[1];
    if ((ulonglong)param_5[1] <= (param_6 & 0xffffffff)) {
      uVar6 = param_6;
    }
    *(int *)(param_1 + 0x68) = (int)uVar6;
    uVar9 = param_5[2];
    uVar8 = (ulonglong)uVar9;
    if (uVar8 == 0) goto LAB_83051264;
    trapWord(6,uVar8,0);
    lVar7 = uVar6 - (longlong)(int)((uVar6 & 0xffffffff) / uVar8) * (longlong)(int)uVar9;
    if (lVar7 == 0) goto LAB_83051264;
    uVar9 = (uVar9 - (int)lVar7) + (int)uVar6;
  }
  else {
    param_6 = uVar9 - param_6;
    trapWord(6,uVar5,0);
    if (param_6 != (longlong)(int)((param_6 & 0xffffffff) / uVar5) * (longlong)(int)uVar2) {
      return 0x1f;
    }
  }
  *(uint *)(param_1 + 0x68) = uVar9;
LAB_83051264:
  uVar9 = *(uint *)(param_1 + 0x68);
  trapWord(6,uVar5,0);
  lVar7 = (ulonglong)uVar9 - (longlong)(int)(uVar9 / uVar2) * (longlong)(int)uVar2;
  if (lVar7 != 0) {
    *(uint *)(param_1 + 0x68) = (uVar9 - (int)lVar7) + uVar2;
  }
  if (lVar4 == 0) {
    fn_8304FCF0(param_1,1);
  }
  return 1;
}

