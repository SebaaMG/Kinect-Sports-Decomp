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
extern int fn_82643E10();


ulonglong fn_82644040(int param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int aiStack_30 [12];
  
  if ((*(byte *)(param_1 + 0x2abd) & 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x35a0);
    aiStack_30[0] = (int)((param_2 & 0x3fffffff) << 2);
    if (iVar1 == 0) {
      uVar3 = fn_82643E10(param_1,1,aiStack_30,param_3);
    }
    else if (*(int *)(iVar1 + 0x98) == 0) {
      iVar4 = KeGetCurrentProcessType();
      puVar2 = __imp__VdGlobalDevice;
      if (iVar4 == 2) {
        puVar2 = __imp__VdGlobalXamDevice;
      }
      uVar6 = *puVar2;
      RtlEnterCriticalSection((ulonglong)uVar6 + 0x3b50);
      uVar3 = (**(code **)(iVar1 + 0xac))(*(undefined4 *)(iVar1 + 0xa4),1,aiStack_30,param_3);
      RtlLeaveCriticalSection((ulonglong)uVar6 + 0x3b50);
    }
    else {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x3b18);
      if (uVar5 == 0) {
        uVar5 = ((ulonglong)*(uint *)(iVar1 + 0x9c) & 0xfffffffc) +
                (ulonglong)*(uint *)(iVar1 + 0x98);
      }
      uVar3 = uVar5 + (param_2 & 0x3fffffff) * -4 & ~(param_3 - 1U);
      if ((uVar3 & 0xffffffff) < (ulonglong)(*(int *)(param_1 + 0x30) + 0xa4)) {
        uVar3 = 0;
      }
      else {
        *(int *)(param_1 + 0x3b18) = (int)uVar3;
        iVar1 = (int)uVar5 - (int)uVar3 >> 2;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar1 * -4;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1 * -4;
      }
    }
    uVar6 = *(int *)(param_1 + 0x3b28) + aiStack_30[0];
    *(uint *)(param_1 + 0x3b28) = uVar6;
    if ((*(uint *)(param_1 + 0x3b2c) < uVar6) && (*(int *)(param_1 + 0x3460) == 0)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x30) + 0xa0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x3b20) != *(int *)(param_1 + 0x3b0c)) {
        *(undefined4 *)(param_1 + 0x3b18) = *(undefined4 *)(param_1 + 0x3b10);
      }
    }
    if ((uVar3 & 0xffffffff) == 0) {
      *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 0x20;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

