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


void fn_82460070(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x34);
  uVar9 = 0;
  uVar8 = 0;
  *param_2 = 0;
  uVar7 = 0;
  uVar6 = 0;
  piVar3 = (int *)(iVar5 + 0x200);
  do {
    if (*piVar3 == *(int *)(iVar1 + 0x1c)) {
      iVar5 = uVar4 * 0x28 + iVar5;
      uVar9 = *(undefined4 *)(iVar5 + 0x20c);
      uVar8 = *(undefined4 *)(iVar5 + 0x210);
      uVar7 = *(undefined4 *)(iVar5 + 0x214);
      uVar6 = *(undefined4 *)(iVar5 + 0x218);
      break;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 10;
  } while (uVar4 < 0xc);
  if (*(int *)(iVar1 + 4) != 0) {
LAB_824601b4:
    *param_2 = uVar7;
    return;
  }
  iVar5 = *(int *)(iVar1 + 0x38);
  if (iVar2 != *(int *)(iVar1 + 0xc)) {
    if (iVar5 != 0) {
      if (*(float *)((1 - iVar2) * 0x11c + *(int *)(param_1 + 0x3c) + 0x114) <=
          *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114)) goto LAB_824601b4;
      if (iVar5 != 0) goto LAB_824601ac;
    }
    if (*(float *)((1 - iVar2) * 0x11c + *(int *)(param_1 + 0x3c) + 0x114) <
        *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114)) {
LAB_824601ac:
      *param_2 = uVar6;
      return;
    }
    goto LAB_824601b4;
  }
  if (iVar5 != 0) {
    if (*(float *)(iVar1 + 0x34) <= *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114))
    goto LAB_82460144;
    if (iVar5 != 0) goto LAB_8246014c;
  }
  if (*(float *)(iVar1 + 0x34) < *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114)) {
LAB_8246014c:
    *param_2 = uVar8;
    return;
  }
LAB_82460144:
  *param_2 = uVar9;
  return;
}

