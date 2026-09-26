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
extern int fn_82EE9CF8();
extern int fn_82EE9E20();
extern int fn_82EE9EA8();


undefined8 fn_82EEA360(int param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = 1;
  RtlEnterCriticalSection();
  while (*(longlong *)(param_1 + 0x820) <= param_2) {
    iVar3 = (*(int *)(param_1 + 0x81c) + 7) * 4;
    uVar6 = *(uint *)(iVar3 + param_1);
    uVar5 = (ulonglong)uVar6;
    if (uVar5 == 0) {
      uVar6 = *(int *)(param_1 + 0x81c) + 1;
      *(uint *)(param_1 + 0x81c) = uVar6;
      if (0x1ff < uVar6) {
        *(undefined4 *)(param_1 + 0x81c) = 0;
      }
      *(longlong *)(param_1 + 0x820) = *(longlong *)(param_1 + 0x820) + 0x14;
    }
    else {
      *(undefined4 *)(iVar3 + param_1) = *(undefined4 *)(uVar6 + 8);
LAB_82eea448:
      *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0x828) + -1;
      piVar4 = (int *)uVar5;
      *param_3 = *piVar4;
      *piVar4 = 0;
      if (piVar4[7] != 0) {
        fn_82EE9E20(param_1,*(undefined8 *)(piVar4 + 8));
        *(undefined8 *)((int)uVar5 + 0x20) = 0;
      }
      fn_82EE9CF8(param_1 + 0x82c,uVar5);
      if (*param_3 != 0) {
        uVar7 = 0;
        *(longlong *)(param_1 + 0x1018) = param_2;
LAB_82eea4c8:
        RtlLeaveCriticalSection(param_1);
        return uVar7;
      }
    }
  }
  uVar6 = *(uint *)(param_1 + 0x830);
  uVar5 = (ulonglong)uVar6;
  if ((uVar5 == 0) || (param_2 < *(longlong *)(uVar6 + 0x10))) {
    if ((*(int *)(param_1 + 0x828) == 0) && (*(longlong *)(param_1 + 0x1018) + 100000000 < param_2))
    {
      uVar7 = 2;
    }
    goto LAB_82eea4c8;
  }
  iVar3 = *(int *)(uVar6 + 8);
  iVar1 = *(int *)(uVar6 + 0xc);
  iVar2 = iVar1;
  if ((iVar3 != 0) && (iVar2 = iVar3, iVar1 != 0)) {
    iVar2 = iVar1;
    if (*(longlong *)(iVar3 + 0x10) < *(longlong *)(iVar1 + 0x10)) {
      iVar2 = iVar3;
      iVar3 = iVar1;
    }
    iVar2 = fn_82EE9EA8(param_1,iVar2,iVar3);
  }
  *(int *)(param_1 + 0x830) = iVar2;
  goto LAB_82eea448;
}

