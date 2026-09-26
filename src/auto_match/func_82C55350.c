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
extern int fn_82A29A38();
extern int fn_82C54E88();
extern int fn_82C56398();


ulonglong fn_82C55350(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  
  RtlEnterCriticalSection(*param_1);
  uVar4 = 0;
  uVar5 = (ulonglong)(uint)param_1[7];
  uVar8 = -(ulonglong)(uVar5 != 0xffffffffffffffff) & uVar5;
  iVar9 = (int)uVar8;
  if (uVar8 < (uint)param_1[3]) {
    lVar3 = (uVar8 & 0x3fffffff) << 2;
    do {
      iVar9 = (int)uVar8;
      if ((uVar8 & 0xffffffff) < (ulonglong)(uint)param_1[6]) {
        uVar1 = *(uint *)((int)lVar3 + param_1[4]);
      }
      else {
        uVar1 = 0;
      }
      if ((uVar1 & 1) == 0) {
        if ((ulonglong)(uint)param_1[6] <= (uVar8 & 0xffffffff)) {
          fn_82A29A38();
        }
        if ((uVar8 & 0xffffffff) < (ulonglong)(uint)param_1[6]) {
          *(uint *)((int)((uVar8 & 0xffffffff) << 2) + param_1[4]) = (int)(char)uVar1 | 1;
        }
        if (((ulonglong)(uint)param_1[3] <= (uVar8 & 0xffffffff)) ||
           (uVar4 = (ulonglong)*(uint *)((int)((uVar8 & 0xffffffff) << 2) + param_1[1]), uVar4 == 0)
           ) {
          uVar4 = fn_82C56398((ulonglong)(uint)param_1[9] + 8,param_1[8],0xffffffff82196582);
          if ((ulonglong)(uint)param_1[3] <= (uVar8 & 0xffffffff)) {
            fn_82A29A38();
          }
          if ((uVar8 & 0xffffffff) < (ulonglong)(uint)param_1[3]) {
            *(int *)((int)((uVar8 & 0xffffffff) << 2) + param_1[1]) = (int)uVar4;
          }
        }
        if ((uVar8 & 0xffffffff) == uVar5) {
          param_1[7] = iVar9 + 1;
        }
        if ((uVar4 & 0xffffffff) != 0) goto LAB_82c55590;
        break;
      }
      uVar8 = uVar8 + 1;
      iVar9 = (int)uVar8;
      lVar3 = lVar3 + 4;
    } while ((uVar8 & 0xffffffff) < (ulonglong)(uint)param_1[3]);
  }
  piVar6 = param_1 + 1;
  uVar1 = fn_82C54E88(piVar6,0);
  if (-1 < (int)uVar1) {
    piVar7 = param_1 + 4;
    uVar2 = fn_82C54E88(piVar7,0);
    if (-1 < (int)uVar2) {
      uVar4 = fn_82C56398((ulonglong)(uint)param_1[9] + 8,param_1[8],0xffffffff82196582);
      if ((uVar4 & 0xffffffff) != 0) {
        param_1[7] = iVar9 + 1;
        if ((uint)param_1[6] <= uVar2) {
          fn_82A29A38();
        }
        if (uVar2 < (uint)param_1[6]) {
          *(undefined4 *)(uVar2 * 4 + *piVar7) = 1;
        }
        if ((uint)param_1[3] <= uVar1) {
          fn_82A29A38();
        }
        if (uVar1 < (uint)param_1[3]) {
          *(int *)(uVar1 * 4 + *piVar6) = (int)uVar4;
          RtlLeaveCriticalSection(*param_1);
          return uVar4;
        }
        goto LAB_82c55590;
      }
      if (param_1[6] != 0) {
        iVar9 = param_1[6] + -1;
        param_1[6] = iVar9;
        *(undefined4 *)(iVar9 * 4 + *piVar7) = 0;
      }
    }
    if (param_1[3] != 0) {
      iVar9 = param_1[3] + -1;
      param_1[3] = iVar9;
      *(undefined4 *)(iVar9 * 4 + *piVar6) = 0;
    }
  }
LAB_82c55590:
  RtlLeaveCriticalSection(*param_1);
  return uVar4;
}

