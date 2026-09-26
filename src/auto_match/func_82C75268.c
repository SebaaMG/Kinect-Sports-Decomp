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
extern int (*lbl_8329F14C)();


void fn_82C75268(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 0xec0) + (ulonglong)*(uint *)(param_1 + 0xdc);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xe0);
  lVar4 = (ulonglong)*(uint *)(param_1 + 0xef8) + (ulonglong)*(uint *)(param_1 + 0xdc);
  iVar5 = 0;
  lVar8 = *(uint *)(param_1 + 0xec4) + uVar2;
  lVar6 = *(uint *)(param_1 + 0xec8) + uVar2;
  lVar9 = *(uint *)(param_1 + 0xefc) + uVar2;
  lVar7 = *(uint *)(param_1 + 0xf00) + uVar2;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      fn_82F68CC0(lVar9,lVar8,*(undefined4 *)(param_1 + 0xd0));
      uVar1 = *(uint *)(param_1 + 0xd0);
      lVar9 = (ulonglong)uVar1 + lVar9;
      lVar8 = (ulonglong)uVar1 + lVar8;
      fn_82F68CC0(lVar7,lVar6,uVar1);
      lVar7 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar7;
      lVar6 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar6;
      fn_82F68CC0(lVar4,lVar3,*(undefined4 *)(param_1 + 0xcc));
      iVar5 = iVar5 + 1;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0xcc) + lVar4;
      lVar3 = (ulonglong)*(uint *)(param_1 + 0xcc) + lVar3;
    } while (iVar5 < *(int *)(param_1 + 200));
  }
  lVar4 = (ulonglong)*(uint *)(param_1 + 0xef8) + (ulonglong)*(uint *)(param_1 + 0xdc);
  uVar1 = *(uint *)(param_1 + 0x88);
  lVar6 = (ulonglong)*(uint *)(param_1 + 0xefc) + (ulonglong)*(uint *)(param_1 + 0xe0);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0xf00) + (ulonglong)*(uint *)(param_1 + 0xe0);
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    do {
      uVar2 = 0;
      if (uVar1 != 0) {
        lVar7 = lVar4;
        lVar8 = lVar6;
        do {
          (*lbl_8329F14C)(param_1,lVar7,lVar8,(lVar3 - lVar6) + lVar8,uVar2,0,param_2,0);
          uVar2 = uVar2 + 1;
          lVar7 = lVar7 + 0x10;
          lVar8 = lVar8 + 4;
        } while ((uVar2 & 0xffffffff) < (ulonglong)uVar1);
      }
      param_2 = param_2 + 1;
      lVar7 = ((ulonglong)*(uint *)(param_1 + 0xd0) & 0xfffffff) * 0x10;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0xe4) + lVar4;
      lVar6 = lVar7 + lVar6;
      lVar3 = lVar7 + lVar3;
    } while ((param_2 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  return;
}

