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
extern int fn_82A6D090();
extern int fn_82A75588();


undefined8 fn_82A734A0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int aiStack_40 [16];
  
  iVar1 = *param_1;
  iVar7 = 0;
  aiStack_40[0] = 0;
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0x130);
  lVar5 = (ulonglong)uVar2 + 1;
  lVar8 = 0x18;
  if ((int)lVar5 < 0x19) {
    lVar8 = lVar5;
  }
  piVar6 = (int *)(param_1[0x1d] * 0x98 + param_1[0x1e]);
  if ((*piVar6 < 2) || (((piVar6[3] != 1 || (piVar6[4] == 2)) && (piVar6[3] != 0)))) {
    iVar7 = 0;
    if (0 < (int)uVar2) {
      do {
        iVar4 = param_1[0x1d] * 0x26 + iVar7;
        iVar7 = iVar7 + 1;
        *(undefined4 *)((iVar4 + 6) * 4 + param_1[0x1e]) = 1;
      } while (iVar7 < *(int *)(iVar1 + 0x130));
    }
  }
  else if (param_1[0x16] == 5) {
    piVar6 = param_1 + 0x38;
    uVar3 = fn_82A75588(piVar6,lVar8);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82A6D090(piVar6,1,aiStack_40);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    *(int *)(param_1[0x1d] * 0x98 + param_1[0x1e] + 0x14) = aiStack_40[0];
    if (aiStack_40[0] != 1) {
      if (0 < lVar8 + -1) {
        do {
          uVar3 = fn_82A6D090(piVar6,1,aiStack_40);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          iVar4 = param_1[0x1d] * 0x26 + iVar7;
          iVar7 = iVar7 + 1;
          *(int *)((iVar4 + 6) * 4 + param_1[0x1e]) = aiStack_40[0];
        } while (iVar7 < (int)(lVar8 + -1));
      }
      param_1[0x16] = ((uint)LZCOUNT((*(int *)(iVar1 + 0x130) + 1) - (int)lVar8) >> 5) + 6;
      return uVar3;
    }
    iVar7 = 0;
    if (0 < *(int *)(iVar1 + 0x130)) {
      do {
        iVar4 = param_1[0x1d] * 0x26 + iVar7;
        iVar7 = iVar7 + 1;
        *(undefined4 *)((iVar4 + 6) * 4 + param_1[0x1e]) = 1;
      } while (iVar7 < *(int *)(iVar1 + 0x130));
      param_1[0x16] = 7;
      return uVar3;
    }
  }
  else if (param_1[0x16] == 6) {
    uVar3 = fn_82A75588(param_1 + 0x38,((ulonglong)uVar2 - lVar8) + 1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    lVar8 = lVar8 + -1;
    if ((int)lVar8 < *(int *)(iVar1 + 0x130)) {
      do {
        uVar3 = fn_82A6D090(param_1 + 0x38,1,aiStack_40);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        lVar5 = (ulonglong)(uint)param_1[0x1d] * 0x26 + lVar8;
        lVar8 = lVar8 + 1;
        *(int *)((int)((lVar5 + 6U & 0xffffffff) << 2) + param_1[0x1e]) = aiStack_40[0];
      } while ((int)lVar8 < *(int *)(iVar1 + 0x130));
      param_1[0x16] = 7;
      return uVar3;
    }
  }
  param_1[0x16] = 7;
  return uVar3;
}

