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
extern unsigned int *auStack_30;
extern int fn_82643CE0();
extern int fn_82643E10();
extern int fn_826452A8();


ulonglong fn_826441E0(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint auStack_30 [12];
  uint *puVar2;
  
  if ((*(byte *)(param_1 + 0x2abd) & 0x20) != 0) {
    fn_82643CE0();
    return 0;
  }
  if (param_2 == 0) {
    auStack_30[0] = 0;
  }
  else {
    auStack_30[0] = (param_2 + 0x10) * 4;
  }
  iVar5 = *(int *)(param_1 + 0x35a0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0xac) != 0)) &&
     (auStack_30[0] <= *(uint *)(param_1 + 0x3b14))) {
    auStack_30[0] = *(uint *)(param_1 + 0x3b14);
  }
  if (iVar5 == 0) {
    uVar3 = fn_82643E10(param_1,2,auStack_30,0x20);
LAB_82644304:
    if ((uVar3 & 0xffffffff) != 0) {
      iVar5 = (int)uVar3 + -4;
      *(int *)(param_1 + 0x3b24) = (int)uVar3;
      *(int *)(param_1 + 0x30) = iVar5;
      *(undefined4 *)(param_1 + 0x3b18) = 0;
      *(undefined4 *)(param_1 + 0x3b28) = 0;
      iVar5 = ((auStack_30[0] >> 2) - 0x10) * 4 + iVar5;
      *(int *)(param_1 + 0x34) = iVar5;
      *(int *)(param_1 + 0x38) = iVar5 + -0xa0;
      goto LAB_8264434c;
    }
  }
  else {
    if (*(int *)(iVar5 + 0x98) == 0) {
      iVar4 = KeGetCurrentProcessType();
      puVar2 = __imp__VdGlobalDevice;
      if (iVar4 == 2) {
        puVar2 = __imp__VdGlobalXamDevice;
      }
      uVar1 = *puVar2;
      RtlEnterCriticalSection((ulonglong)uVar1 + 0x3b50);
      uVar3 = (**(code **)(iVar5 + 0xac))(*(undefined4 *)(iVar5 + 0xa4),2,auStack_30,0x20);
      RtlLeaveCriticalSection((ulonglong)uVar1 + 0x3b50);
      goto LAB_82644304;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x3b24) = *(undefined4 *)(iVar5 + 0x98);
      auStack_30[0] = *(uint *)(iVar5 + 0x9c);
      uVar3 = (ulonglong)*(uint *)(iVar5 + 0x98);
      goto LAB_82644304;
    }
    uVar3 = 0;
  }
  fn_82643CE0(param_1);
LAB_8264434c:
  if (((*(uint *)(param_1 + 0x5e88) & 1) == 0) && (*(int *)(param_1 + 0x3b30) != 0)) {
    fn_826452A8(param_1,*(int *)(param_1 + 0x3b30),3,0);
    *(undefined4 *)(param_1 + 0x3b30) = 0;
  }
  return uVar3;
}

