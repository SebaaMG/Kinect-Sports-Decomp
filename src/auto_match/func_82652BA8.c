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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define TBLr 0
extern unsigned int *__imp__KeCertMonitorData;
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *auStack_110;
extern int fn_82645688();
extern int fn_82649D98();
extern int fn_82652438();
extern int fn_82652AA0();
extern int fn_82F691F0();
extern unsigned int uStack_120;


void fn_82652BA8(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar6;
  int iVar5;
  ulonglong uVar7;
  undefined8 uStack_120;
  undefined1 auStack_110 [248];
  
  uVar1 = *(uint *)(param_1 + 0x4228);
  uVar7 = 0;
  if ((uVar1 & 0x400) == 0) {
    if ((uVar1 & 0x100) == 0) goto LAB_82652c04;
    if (*__imp__KeDebugMonitorData == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*__imp__KeDebugMonitorData + 0x20);
    }
    iVar5 = (**(code **)(iVar5 + 0xc))(0xffffffff821cc5b0,(uVar1 & 0xff) << 0x14);
    *(int *)(param_1 + 0x422c) = iVar5;
    if (-1 < iVar5) {
      *(uint *)(param_1 + 0x4228) = *(uint *)(param_1 + 0x4228) & 0xfffffaff | 0x400;
      goto LAB_82652c04;
    }
  }
  else {
    if (*__imp__KeDebugMonitorData == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*__imp__KeDebugMonitorData + 0x20);
    }
    uVar4 = (**(code **)(iVar5 + 0x10))();
    *(undefined4 *)(param_1 + 0x422c) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x4228) = 0;
LAB_82652c04:
  uStack_120 = CONCAT44(*(undefined4 *)(param_1 + 0x5528),*(int *)(param_1 + 0x5524));
  uVar3 = TBLr;
  if (uStack_120 != 0) {
    *(int *)(param_1 + 0x5520) = (int)uVar3 - *(int *)(param_1 + 0x5524);
  }
  uStack_120 = ((((U64)(uStack_120)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)uVar3 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  *(int *)(param_1 + 0x5548) = (int)*(undefined8 *)(param_1 + 0x5538);
  *(undefined8 *)(param_1 + 0x5538) = 0;
  *(undefined4 *)(param_1 + 0x5528) = (((U64)(uStack_120) >> 0) & 0xFFFFFFFF);
  *(int *)(param_1 + 0x5524) = (int)uVar3;
  *(int *)(param_1 + 0x554c) = (int)*(undefined8 *)(param_1 + 0x5540);
  *(undefined8 *)(param_1 + 0x5540) = 0;
  if (*(int *)(param_1 + 0x5568) == 1) {
    cVar6 = fn_82652AA0(param_1);
    if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_110,0,0xf0);
    }
    *(undefined4 *)(param_1 + 0x5568) = 0;
  }
  else if (*(int *)(param_1 + 0x5568) == 2) {
    if ((*(byte *)(param_1 + 0x2abe) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x2abe) & 1) != 1) {
        fn_82645688(param_1);
        VdEnableDisableClockGating(0);
      }
      *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) | 1;
    }
    if ((ulonglong)*(uint *)(param_1 + 0x5570) != 3) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x5570) + 1;
    }
    if ((uVar7 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x556c)) {
      fn_82649D98(param_1,(ulonglong)*(uint *)(param_1 + 0x5560) + (uVar7 & 0xfffffff) * 0x10)
      ;
      *(int *)(param_1 + 0x5570) = (int)uVar7;
    }
  }
  fn_82652438(param_1);
  if ((*__imp__KeCertMonitorData != 0) &&
     (pcVar2 = *(code **)(*__imp__KeCertMonitorData + 4), pcVar2 != (code *)0x0)) {
    (*pcVar2)(0);
  }
  return;
}

