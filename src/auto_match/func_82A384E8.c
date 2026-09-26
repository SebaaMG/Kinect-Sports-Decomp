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
extern int fn_82A381F0();


longlong fn_82A384E8(undefined4 *param_1,ulonglong param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 auStack_50 [20];
  
  lVar4 = fn_82A381F0(param_1,param_2,0);
  iVar10 = 0;
  if (lVar4 == 0) {
    lVar5 = -0x3ffffddb;
  }
  else {
    lVar5 = (**(code **)(*(int *)*param_1 + 8))(param_2,auStack_50,0);
    if (-1 < lVar5) {
      RtlEnterCriticalSection(param_1 + 5);
      uVar1 = param_1[2];
      uVar6 = (ulonglong)uVar1;
      if ((uint)param_1[3] == uVar6) {
        lVar5 = -0x3ffffee1;
        (**(code **)(*(int *)*param_1 + 4))(auStack_50[0]);
        iVar10 = 0;
      }
      else {
        iVar2 = param_1[1];
        uVar9 = (param_2 & 0x7ffffff) / 0xc;
        iVar8 = ((int)lVar4 - iVar2) / 0x58;
        lVar4 = uVar9 - (longlong)(int)(uVar9 / uVar6) * (longlong)(int)uVar1;
        trapWord(6,uVar6,0);
        iVar10 = (int)lVar4 * 0x58;
        iVar7 = 0;
        iVar3 = *(int *)(iVar10 + iVar2);
        while (iVar3 != -1) {
          iVar7 = iVar7 + 1;
          trapWord(6,uVar6,0);
          lVar4 = (lVar4 + 1U) -
                  (longlong)(int)((lVar4 + 1U & 0xffffffff) / (ulonglong)uVar1) *
                  (longlong)(int)uVar1;
          iVar10 = (int)lVar4 * 0x58;
          iVar3 = *(int *)(iVar2 + iVar10);
        }
        *(undefined4 *)(iVar10 + iVar2) = auStack_50[0];
        *(undefined4 *)(iVar10 + param_1[1] + 4) = 0xffffffff;
        *(int *)(iVar10 + param_1[1] + 8) = iVar7;
        *(int *)(iVar10 + param_1[1] + 0x10) = iVar8;
        iVar8 = iVar8 * 0x58 + param_1[1];
        *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
        iVar10 = iVar10 + param_1[1];
        param_1[3] = param_1[3] + 1;
      }
      RtlLeaveCriticalSection(param_1 + 5);
    }
  }
  *param_3 = iVar10;
  return lVar5;
}

