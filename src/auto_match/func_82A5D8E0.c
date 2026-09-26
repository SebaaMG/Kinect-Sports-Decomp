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
extern int fn_82A3FF60();
extern int fn_82A49FB8();
extern int fn_82A5D210();
extern int iRam8321a308;
extern unsigned int uRam8329f804;


undefined8 fn_82A5D8E0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uRam8329f804 = 0;
  iVar2 = fn_82A49FB8(0,3,6,48000,0x20,0x20,0x3f,0x80);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + 0xc);
    *(uint *)(param_1 + 0x1c) = (uint)uVar1 << 8;
    iVar2 = fn_82A3FF60(0xffffffff83219d50,(ulonglong)uVar1 << 8,0x20970006,0);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_82A5D210(0,0);
      *(int *)(param_1 + 0x28) = iVar2;
      if ((iVar2 != 0) && (iVar2 != -1)) {
        iVar2 = fn_82A5D210(0,0);
        *(int *)(param_1 + 0x2c) = iVar2;
        if ((iVar2 != 0) && (iVar2 != -1)) {
          iVar2 = fn_82A5D210(1,0);
          *(int *)(param_1 + 0x30) = iVar2;
          if ((iVar2 != 0) && (iVar2 != -1)) {
            KeEnterCriticalRegion();
            RtlEnterCriticalSection(0xffffffff8315f6f0);
            if (iRam8321a308 == 0) {
              ExRegisterTitleTerminateNotification(0xffffffff8315f6e0,1);
            }
            iRam8321a308 = iRam8321a308 + 1;
            piVar3 = (int *)0x8321a2e8;
            uVar4 = 0;
            do {
              if (*piVar3 == 0) {
                *(int *)(uVar4 * 4 + -0x7cde5d18) = param_1;
                break;
              }
              uVar4 = uVar4 + 1;
              piVar3 = piVar3 + 1;
            } while (uVar4 < 8);
            *(undefined4 *)(param_1 + 0x4c) = 1;
            RtlLeaveCriticalSection(0xffffffff8315f6f0);
            KeLeaveCriticalRegion();
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff8007000e;
}

