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
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *__imp__VdGlobalDevice;
extern unsigned int *__imp__VdGlobalXamDevice;
extern int fn_82645688();
extern int fn_826458F8();
extern int fn_82647620();
extern int fn_82652910();
extern int fn_82653408();
extern int fn_826534B8();
extern int fn_82653510();
extern int fn_82657168();
extern int fn_8265C990();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_831425CC();
extern int fn_831427BC();
extern unsigned int lbl_83275D96;


void fn_82653918(int param_1)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82647620();
  }
  if ((*(byte *)(param_1 + 0x2abc) & 0x80) == 0) {
    fn_82653510(param_1);
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_82645688();
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_82645688(param_1);
    }
    if (*(int *)(param_1 + 0x5560) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x5560),0x24800000);
      *(undefined4 *)(param_1 + 0x5560) = 0;
    }
    if (*(int *)(param_1 + 0x555c) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x555c),0xffffffffb1800000);
      *(undefined4 *)(param_1 + 0x555c) = 0;
      *(undefined4 *)(param_1 + 0x5564) = 0;
    }
    *(undefined4 *)(param_1 + 0x5568) = 0;
    iVar1 = KeGetCurrentProcessType();
    if (iVar1 != 2) {
      fn_82657168(param_1);
      lbl_83275D96 = 0;
    }
    fn_82652910(param_1);
    fn_831425CC(0);
    fn_82653408(param_1);
    fn_8265C990(*(undefined4 *)(param_1 + 0x5e90),0xffffffffb1800000);
    fn_8265C990(*(undefined4 *)(param_1 + 0x5e98),0x24800000);
    *(undefined4 *)(param_1 + 0x5e90) = 0;
    *(undefined4 *)(param_1 + 0x5e98) = 0;
    *(undefined8 *)(param_1 + 0x5ea0) = 0;
    fn_8265C990(*(undefined4 *)(param_1 + 0x5ea8),0xffffffffb1800000);
    *(undefined4 *)(param_1 + 0x5ea8) = 0;
    fn_8265C990(*(undefined4 *)(param_1 + 0x5eb0),0x24800000);
    *(undefined4 *)(param_1 + 0x5eb0) = 0;
    *(undefined4 *)(param_1 + 0x2ac8) = 0;
    fn_8265C990(*(undefined4 *)(param_1 + 0x2ec8),0xffffffffb1800000);
    iVar1 = param_1 + 0x2c7c;
    lVar3 = 6;
    do {
      if (*(int *)(iVar1 + 0x10) != 0) {
        KeSetEvent(iVar1,1,0);
      }
      lVar3 = lVar3 + -1;
      iVar1 = iVar1 + 0x6c;
    } while (lVar3 != 0);
    piVar4 = (int *)(param_1 + 0x2c8c);
    lVar3 = 6;
    do {
      if (*piVar4 != 0) {
        fn_82A1E650(*piVar4,0xffffffffffffffff);
        fn_82A1E658(*piVar4);
      }
      lVar3 = lVar3 + -1;
      piVar4 = piVar4 + 0x1b;
    } while (lVar3 != 0);
    *(undefined4 *)(param_1 + 0x2aec) = 0;
    *(undefined4 *)(param_1 + 0x2af0) = 0;
    fn_8265C990(*(undefined4 *)(param_1 + 0x36a8),0xffffffffb1800000);
    if (*__imp__KeDebugMonitorData == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = *(uint **)(*__imp__KeDebugMonitorData + 0x20);
    }
    if (puVar2 != (uint *)0x0) {
      if (8 < *puVar2) {
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar2[6] = 0;
      puVar2[7] = 0;
    }
    fn_831427BC(0,0);
    fn_826458F8(param_1,0);
    fn_8265C990(*(undefined4 *)(param_1 + 0x2a94),0xffffffffb1800000);
    fn_8265C990(*(undefined4 *)(param_1 + 0x2a90),0xffffffffb1800000);
    *(undefined4 *)(param_1 + 0x2a94) = 0;
    *(undefined4 *)(param_1 + 0x2a90) = 0;
    iVar1 = KeGetCurrentProcessType();
    if (iVar1 == 2) {
      *__imp__VdGlobalXamDevice = 0;
    }
    else {
      *__imp__VdGlobalDevice = 0;
      ExRegisterTitleTerminateNotification(0xffffffff831bea50,0);
      ExRegisterTitleTerminateNotification(0xffffffff831bea60,0);
    }
    VdShutdownEngines();
  }
  if (*(int *)(param_1 + 0x4230) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4230),0xffffffffb1800000);
  }
  iVar1 = *(int *)(param_1 + 0x551c);
  if (iVar1 != 0) {
    fn_826534B8(*(undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(iVar1 + 0xc) = 0;
    fn_8265C990(*(undefined4 *)(iVar1 + 8),0xffffffffb1800000);
    fn_8265C990(iVar1,0x24800000);
  }
  return;
}

