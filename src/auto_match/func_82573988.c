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
extern unsigned int *auStack_50;
extern int fn_82574340();
extern int fn_825A2A88();


void fn_82573988(int param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_50 [80];
  
  piVar1 = (int *)param_2;
  iVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  if (0 < piVar1[9]) {
    lVar4 = param_2 + 0x28;
    do {
      piVar5 = (int *)lVar4;
      if (*piVar5 != 0) {
        uVar13 = uVar9;
        uVar12 = uVar8;
        uVar11 = uVar7;
        uVar10 = uVar6;
        if (piVar5[1] == 0) {
          puVar2 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
        }
        else {
          if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined4 *)
                     ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                     *(int *)(param_1 + 0x8c0));
          }
          fn_82574340(piVar5[1],param_1 + 0xf0,uVar9,auStack_50);
          puVar2 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
        }
        puVar2 = (undefined4 *)(*piVar5 + 0xa0U & 0xfffffff0);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        puVar2 = (undefined4 *)(*piVar5 + 0x10U & 0xfffffff0);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        uVar9 = uVar13;
        uVar8 = uVar12;
        uVar7 = uVar11;
        uVar6 = uVar10;
        if (*(int *)(*piVar5 + 0x1b0) != 0) {
          (**(code **)(**(int **)(*piVar5 + 0x1b0) + 8))(*(int **)(*piVar5 + 0x1b0),0x18,0);
          uVar9 = uVar13;
          uVar8 = uVar12;
          uVar7 = uVar11;
          uVar6 = uVar10;
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < piVar1[9]);
  }
  lVar4 = 0;
  if (0 < *piVar1) {
    do {
      param_2 = param_2 + 4;
      iVar3 = fn_825A2A88(param_1,*(undefined4 *)param_2);
      if (iVar3 != 0) {
        puVar2 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *piVar1);
  }
  return;
}

