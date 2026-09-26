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
extern unsigned int __imp__ExThreadObjectType;
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *auStack_7c;
extern int fn_82A1BBE8();
extern int fn_82A1BC40();
extern int fn_82A343B0();
extern int fn_82A344D8();
extern int fn_82A35450();
extern int fn_82A371C0();
extern int fn_82A37560();
extern int fn_82A37600();
extern int fn_82A37608();
extern int fn_82A37A90();
extern int fn_82A37F58();
extern int fn_82A37F68();
extern int fn_82F68CC0();
extern int iRam8321959c;
extern unsigned int uStack_80;


undefined8 fn_82A35648(int param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  int iVar6;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_80;
  undefined1 auStack_7c [124];
  
  piVar10 = (int *)(param_1 + 0x17c);
  if ((param_2 & 0xffffffff) == 0) {
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x188) = 4;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0x20000;
    *(undefined4 *)(param_1 + 0x198) = 0x40;
    *(undefined4 *)(param_1 + 0x194) = 0x10;
    *(undefined4 *)(param_1 + 0x19c) = 0x40000;
  }
  else {
    fn_82F68CC0(piVar10,param_2,0x24);
  }
  if (*piVar10 == 0) {
    *piVar10 = 1;
  }
  *(int *)(param_1 + 0x1ac) = (int)param_3;
  if (*__imp__KeDebugMonitorData == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(*__imp__KeDebugMonitorData + 0x18))(0x7e,0);
  }
  if ((iVar6 == 1) || (iRam8321959c != 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  iVar6 = param_1 + 0x1a0;
  if (*(int *)(param_1 + 0x180) == 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0x80000;
  }
  else {
    fn_82F68CC0(iVar6,*(int *)(param_1 + 0x180),0xc);
  }
  *(int *)(param_1 + 0x180) = iVar6;
  lVar2 = fn_82A37F58(param_1 + 0x50,*(undefined4 *)(param_1 + 0x198));
  uVar1 = *(uint *)(param_1 + 0x19c);
  lVar3 = fn_82A37600(param_1 + 0xc4,*(undefined4 *)(param_1 + 0x194));
  lVar4 = fn_82A371C0(param_1 + 0x10c,*(undefined4 *)(param_1 + 400));
  uVar5 = fn_82A1BBE8(1,iVar6,0xffffffff80000000);
  fn_82A37F68(param_1 + 0x50,param_1,*(undefined4 *)(param_1 + 0x198),param_3,lVar2);
  iVar7 = fn_82A37A90(param_1 + 0x8c,param_1,lVar2 + param_3,(ulonglong)uVar1,
                            *(undefined4 *)(param_1 + 400));
  if (-1 < iVar7) {
    lVar2 = (ulonglong)uVar1 + lVar2 + param_3;
    iVar7 = fn_82A37608(param_1 + 0xc4,*(undefined4 *)(param_1 + 0x194),lVar2,lVar3);
    if (-1 < iVar7) {
      lVar3 = lVar3 + lVar2;
      iVar7 = fn_82A37560(param_1 + 0x10c,param_1,lVar3,lVar4,*(undefined4 *)(param_1 + 400));
      if (-1 < iVar7) {
        lVar4 = lVar4 + lVar3;
        uVar8 = fn_82A1BC40(1,iVar6,0xffffffff80000000,lVar4,uVar5);
        *(undefined4 *)(param_1 + 0x168) = uVar8;
        *(int *)(param_1 + 0x16c) = (int)lVar4;
        *(int *)(param_1 + 0x170) = (int)uVar5;
        puVar11 = (undefined4 *)(param_1 + 0x178);
        *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1a4);
        iVar6 = ExCreateThread(puVar11,0,auStack_7c,0xffffffff82a33cc8,0xffffffff82a35640,param_1,
                               (1 << (*(uint *)(param_1 + 0x188) & 0x3f)) << 0x18 | 1);
        if (-1 < iVar6) {
          iVar6 = ObReferenceObjectByHandle(*puVar11,__imp__ExThreadObjectType,&uStack_80);
          if (iVar6 < 0) {
            uVar5 = 0;
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x18c);
            uVar9 = (ulonglong)uVar1;
            if (uVar1 == 0xf) {
              uVar9 = 0x10;
            }
            else if (uVar1 == 0xfffffff1) {
              uVar9 = 0xfffffffffffffff0;
            }
            KeSetBasePriorityThread(uStack_80,uVar9);
            ObDereferenceObject(uStack_80);
            uVar5 = NtResumeThread(*puVar11,0);
            if (-1 < (int)uVar5) {
              *(undefined4 *)(param_1 + 0x1b0) = 1;
              fn_82A343B0(param_1);
              fn_82A344D8(param_1);
              return 1;
            }
          }
          fn_82A35450(param_1);
          return uVar5;
        }
      }
    }
  }
  fn_82A35450(param_1);
  return 0;
}

