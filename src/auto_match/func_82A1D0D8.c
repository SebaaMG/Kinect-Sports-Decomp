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
extern unsigned int *auStack_128;
extern unsigned int *auStack_140;
extern unsigned int *auStack_180;
extern unsigned int *auStack_18c;
extern unsigned int *auStack_190;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e8;
extern int fn_82A1C808();
extern int fn_82A1CA50();
extern int fn_82A1CD98();
extern int fn_82A1CE88();
extern int fn_8314231C();
extern int fn_83142B1C();
extern int iRam832192e0;
extern unsigned int uRam832192e8;
extern unsigned int uStack_110;
extern unsigned int uStack_138;
extern unsigned int uStack_168;
extern unsigned int uStack_e0;


undefined8 fn_82A1D0D8(int *param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_190 [4];
  undefined1 auStack_18c [12];
  undefined1 auStack_180 [24];
  undefined4 uStack_168;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined1 auStack_128 [24];
  undefined4 uStack_110;
  undefined1 auStack_e8 [8];
  undefined4 uStack_e0;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [144];
  
  bVar1 = false;
  if (*(code **)(param_1[0xa6] + 4) != (code *)0x0) {
    lVar3 = (**(code **)(param_1[0xa6] + 4))();
    if (lVar3 < 0) goto LAB_82a1d2e4;
  }
  lVar3 = fn_82A1C808(param_1[2],param_1,auStack_180,auStack_190,auStack_d0);
  if (-1 < lVar3) {
    bVar2 = false;
    if (param_1[3] == 0) {
LAB_82a1d16c:
      bVar1 = bVar2;
      lVar3 = fn_82A1CE88(param_1[3],0xffffffff8208873c,param_1[2]);
      if (-1 < lVar3) {
        iRam832192e0 = 1;
        ExRegisterTitleTerminateNotification(0xffffffff8315d26c,1);
        param_1[4] = (int)lVar3;
        uRam832192e8 = 1;
        KeSetEvent(0xffffffff8315d25c,1,0);
        do {
          KeWaitForSingleObject(0xffffffff8315d24c,3,1,0,0);
          iVar4 = *param_1;
          fn_82A1CA50(param_1[2],param_1,auStack_180);
          if (param_1[3] != 0) {
            fn_82A1CA50(1,param_1,auStack_128);
          }
          if (iVar4 == 1) {
            param_1[4] = (int)lVar3;
            KeSetEvent(0xffffffff8315d25c,1,0);
          }
        } while ((iVar4 != 2) && (iVar4 = fn_8314231C(), iVar4 == 0));
        if (iRam832192e0 != 0) {
          iRam832192e0 = 0;
          ExRegisterTitleTerminateNotification(0xffffffff8315d26c,0);
        }
        fn_82A1CD98();
      }
    }
    else {
      lVar3 = fn_82A1C808(1,param_1,auStack_128,auStack_18c,auStack_90);
      if (-1 < lVar3) {
        bVar2 = true;
        goto LAB_82a1d16c;
      }
    }
    fn_83142B1C(uStack_138);
    ObDereferenceObject(uStack_138);
    NtFreeVirtualMemory(auStack_140,auStack_190,0x8000,1);
    NtClose(uStack_168);
    if (bVar1) {
      fn_83142B1C(uStack_e0);
      ObDereferenceObject(uStack_e0);
      NtFreeVirtualMemory(auStack_e8,auStack_18c,0x8000,1);
      NtClose(uStack_110);
    }
  }
  if (*(code **)(param_1[0xa6] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[0xa6] + 0x10))();
  }
LAB_82a1d2e4:
  param_1[4] = (int)lVar3;
  uRam832192e8 = 0;
  KeSetEvent(0xffffffff8315d25c,1,0);
  return 0;
}

