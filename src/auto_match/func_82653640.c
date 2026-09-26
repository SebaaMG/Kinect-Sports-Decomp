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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_8265C940();
extern int fn_82F691F0();
extern int fn_831427BC();
extern int fn_831427CC();


undefined8 fn_82653640(int param_1)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  
  RtlInitializeCriticalSection(param_1 + 0x3b34);
  RtlInitializeCriticalSection(param_1 + 0x3b50);
  *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) | 4;
  fn_831427CC(0x2dff0003,0xffffffff826535b8,0,0xffffffff821883a0,0xffffffff82188820);
  iVar3 = KeGetCurrentProcessType();
  if (iVar3 != 2) {
    ExRegisterTitleTerminateNotification(0xffffffff831bea50,1);
    ExRegisterTitleTerminateNotification(0xffffffff831bea60,1);
  }
  *(undefined4 *)(param_1 + 0x4220) = 0;
  fn_831427BC(0xffffffff826455f0,param_1);
  iVar3 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalXamDevice;
  if (iVar3 != 2) {
    piVar1 = __imp__VdGlobalDevice;
  }
  *piVar1 = param_1;
  uVar2 = fn_8265C940(0x60,0xffffffffa5800000);
  *(int *)(param_1 + 0x2a90) = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2,0,0x60);
  }
  return 0xffffffff8007000e;
}

