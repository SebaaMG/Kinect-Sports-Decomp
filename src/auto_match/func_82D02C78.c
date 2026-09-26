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
extern int fn_82D02880();
extern int fn_82D02A58();
extern int fn_82D02B68();


longlong fn_82D02C78(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar11 = -param_2;
  uVar9 = 0;
  uVar3 = fn_82D02880(param_2);
  uVar7 = (ulonglong)*(uint *)((uVar3 + 6) * 4 + param_1);
  uVar10 = (uint)param_2;
  if (uVar7 != 0) {
    uVar4 = 0;
    uVar5 = (ulonglong)(uVar10 << (-(uint)(uVar3 != 0x1f) & 0x19U - ((int)uVar3 >> 1) & 0x3f));
    uVar8 = uVar7;
    while( true ) {
      iVar1 = (int)uVar8;
      uVar6 = ((ulonglong)*(uint *)(iVar1 + 4) & 0xfffffffc) - param_2;
      if (((uVar6 & 0xffffffff) < (uVar11 & 0xffffffff)) &&
         (uVar7 = uVar8, uVar9 = uVar8, uVar11 = uVar6, (uVar6 & 0xffffffff) == 0)) break;
      uVar7 = (ulonglong)*(uint *)(iVar1 + 0x14);
      uVar8 = (ulonglong)*(uint *)(((int)(uVar5 >> 0x1f) + 4) * 4 + iVar1);
      if ((uVar7 != 0) && (uVar7 != uVar8)) {
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
      if (uVar8 == 0) break;
      uVar5 = (uVar5 & 0x7fffffff) << 1;
    }
    if (uVar7 != 0) goto LAB_82d02dc0;
    if (uVar9 != 0) goto LAB_82d02e10;
  }
  uVar4 = (ulonglong)(uint)(1 << (uVar3 & 0x3f)) & 0x7fffffff;
  uVar4 = (uVar4 * -2 | uVar4 * 2) & (ulonglong)*(uint *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar7 = (-uVar4 & uVar4) - 1;
    uVar4 = (uVar7 & 0xffffffff) >> 0xc & 0x10;
    uVar3 = (uint)uVar7 >> (int)uVar4;
    uVar5 = (ulonglong)(uVar3 >> 5) & 8;
    uVar3 = uVar3 >> (int)uVar5;
    uVar7 = (ulonglong)(uVar3 >> 2) & 4;
    uVar3 = uVar3 >> (int)uVar7;
    uVar6 = (ulonglong)(uVar3 >> 1) & 2;
    uVar3 = uVar3 >> (int)uVar6;
    uVar8 = (ulonglong)(uVar3 >> 1) & 1;
    uVar7 = (ulonglong)
            *(uint *)((int)(((ulonglong)(uVar3 >> (int)uVar8) + uVar4 + uVar5 + uVar7 + uVar6 +
                             uVar8 + 6 & 0xffffffff) << 2) + param_1);
  }
  while (uVar7 != 0) {
LAB_82d02dc0:
    iVar1 = (int)uVar7;
    uVar4 = ((ulonglong)*(uint *)(iVar1 + 4) & 0xfffffffc) - param_2;
    if ((uVar4 & 0xffffffff) < (uVar11 & 0xffffffff)) {
      uVar9 = uVar7;
      uVar11 = uVar4;
    }
    uVar7 = (ulonglong)*(uint *)(iVar1 + 0x10);
    if (uVar7 == 0) {
      uVar7 = (ulonglong)*(uint *)(iVar1 + 0x14);
    }
  }
  if (uVar9 == 0) {
    return 0;
  }
LAB_82d02e10:
  param_2 = uVar9 + param_2;
  fn_82D02B68(param_1,uVar9);
  iVar1 = (int)uVar9;
  uVar3 = (uint)uVar11;
  if ((uVar11 & 0xffffffff) < 0x100) {
    iVar2 = uVar3 + uVar10 + iVar1;
    *(uint *)(iVar1 + 4) = uVar3 + uVar10 | 3;
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
    *(uint *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + uVar3 + uVar10;
    *(uint *)(param_1 + 0xc0) = uVar3 + uVar10 + *(int *)(param_1 + 0xc0) + -0x10;
  }
  else {
    *(uint *)(iVar1 + 4) = uVar10 | 3;
    *(uint *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + uVar10;
    *(uint *)(param_1 + 0xc0) = uVar10 + *(int *)(param_1 + 0xc0) + -0x10;
    *(uint *)((int)param_2 + 4) = uVar3 | 1;
    *(uint *)((int)param_2 + uVar3) = uVar3;
    fn_82D02A58(param_1,param_2,uVar11);
  }
  return uVar9 + 0x10;
}

