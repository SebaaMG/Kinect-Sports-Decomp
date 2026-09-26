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
extern int fn_82F68CC0();


void fn_82ED4B70(int param_1,longlong param_2,longlong param_3,longlong param_4,ulonglong param_5,
                  uint param_6)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x4ef8);
  iVar7 = 0;
  uVar2 = (ulonglong)uVar1;
  if (0 < (int)param_6) {
    do {
      fn_82F68CC0(uVar2,(longlong)iVar7 * (longlong)*(int *)(param_1 + 0x564) + param_2,param_5);
      iVar7 = iVar7 + 1;
      uVar2 = uVar2 + param_5;
    } while (iVar7 < (int)param_6);
  }
  iVar6 = (int)param_5;
  uVar2 = (longlong)iVar6 * (longlong)(int)param_6;
  lVar4 = (longlong)((int)param_6 >> 1) + (ulonglong)((int)param_6 < 0 && (param_6 & 1) != 0);
  lVar3 = uVar2 + uVar1;
  iVar8 = 0;
  iVar7 = (int)lVar4;
  if (0 < lVar4) {
    uVar5 = 0;
    do {
      fn_82F68CC0((longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0) +
                   lVar3,(longlong)*(int *)(param_1 + 0x568) * (longlong)iVar8 + param_3,
                   (longlong)(iVar6 >> 1) + (ulonglong)(iVar6 < 0 && (param_5 & 1) != 0));
      iVar8 = iVar8 + 1;
      uVar5 = uVar5 + param_5;
    } while (iVar8 < iVar7);
  }
  iVar8 = 0;
  if (0 < iVar7) {
    uVar5 = 0;
    do {
      fn_82F68CC0((longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0) +
                   (longlong)((int)uVar2 >> 2) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 3) != 0) +
                   lVar3,(longlong)*(int *)(param_1 + 0x568) * (longlong)iVar8 + param_4,
                   (longlong)(iVar6 >> 1) + (ulonglong)(iVar6 < 0 && (param_5 & 1) != 0));
      iVar8 = iVar8 + 1;
      uVar5 = uVar5 + param_5;
    } while (iVar8 < iVar7);
  }
  return;
}

