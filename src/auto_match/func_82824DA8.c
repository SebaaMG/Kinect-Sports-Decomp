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
extern unsigned int *auStack_58;
extern int fn_82824AC0();
extern unsigned int uStack_454;


void fn_82824DA8(int *param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uStack_454;
  int aiStack_450 [254];
  undefined4 auStack_58 [22];
  
  puVar6 = &uStack_454;
  lVar11 = 0x100;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar7 = 0;
  iVar8 = (int)param_4;
  uVar12 = param_4;
  if (0 < iVar8) {
    do {
      pbVar3 = (byte *)(iVar7 + param_3);
      iVar7 = iVar7 + 1;
      aiStack_450[*pbVar3] = aiStack_450[*pbVar3] + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  piVar5 = aiStack_450;
  lVar11 = 0xff;
  do {
    piVar4 = piVar5 + 1;
    iVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    *piVar5 = *piVar4 + iVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = 0xff;
  puVar6 = auStack_58 + 1;
  do {
    *puVar6 = puVar6[-1];
    lVar11 = lVar11 + -1;
    puVar6 = puVar6 + -1;
  } while (lVar11 != 0);
  iVar7 = 0;
  aiStack_450[0] = 0;
  uVar12 = param_4;
  if (0 < iVar8) {
    do {
      iVar1 = aiStack_450[*(byte *)(iVar7 + param_3)];
      aiStack_450[*(byte *)(iVar7 + param_3)] = iVar1 + 1;
      param_1[iVar1 + 1] = iVar7;
      iVar7 = iVar7 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *param_1 = iVar8;
  iVar7 = 0;
  if (0 < iVar8) {
    piVar5 = (int *)(param_2 + -4);
    uVar12 = param_4;
    do {
      pbVar3 = (byte *)(iVar7 + param_3);
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
      *piVar5 = aiStack_450[*pbVar3];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  piVar5 = aiStack_450;
  *(undefined4 *)((int)((param_4 & 0xffffffff) << 2) + param_2) = 0;
  lVar11 = 0xff;
  do {
    piVar5 = piVar5 + 1;
    if (*piVar5 == piVar5[-1] + 1) {
      param_1[*piVar5] = -1;
    }
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *param_1 = -1;
  uVar12 = 1;
  if (-1 - iVar8 != -1) {
    do {
      lVar11 = 0;
      uVar10 = 0;
      if (0 < iVar8 + 1) {
        do {
          iVar7 = (int)((uVar10 & 0xffffffff) << 2);
          uVar2 = *(uint *)(iVar7 + (int)param_1);
          if ((int)uVar2 < 0) {
            lVar11 = lVar11 - (ulonglong)uVar2;
            lVar9 = -(ulonglong)uVar2;
          }
          else {
            if ((int)lVar11 != 0) {
              *(int *)((int)((uVar10 - lVar11 & 0xffffffff) << 2) + (int)param_1) = -(int)lVar11;
            }
            lVar9 = (*(uint *)(*(int *)(iVar7 + (int)param_1) * 4 + param_2) - uVar10) + 1;
            fn_82824AC0(param_1,param_2,uVar10,lVar9,uVar12);
            lVar11 = 0;
          }
          uVar10 = uVar10 + lVar9;
        } while ((int)uVar10 < iVar8 + 1);
        if ((int)lVar11 != 0) {
          *(int *)((int)((uVar10 - lVar11 & 0xffffffff) << 2) + (int)param_1) = -(int)lVar11;
        }
      }
      uVar12 = (uVar12 & 0x7fffffff) << 1;
    } while (*param_1 != -1 - iVar8);
  }
  iVar7 = 0;
  if (0 < (longlong)(param_4 + 1)) {
    piVar5 = (int *)(param_2 + -4);
    do {
      piVar5 = piVar5 + 1;
      param_1[*piVar5] = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(param_4 + 1));
  }
  return;
}

