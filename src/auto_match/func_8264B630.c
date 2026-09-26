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
extern int fn_8264D6C0();
extern int fn_8265C990();


void fn_8264B630(int param_1)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  uint *puVar2;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar3 = KeGetCurrentProcessType();
    puVar2 = __imp__VdGlobalDevice;
    if (iVar3 == 2) {
      puVar2 = __imp__VdGlobalXamDevice;
    }
    uVar1 = *puVar2;
    RtlEnterCriticalSection((ulonglong)uVar1 + 0x3b50);
    (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xa4));
    RtlLeaveCriticalSection((ulonglong)uVar1 + 0x3b50);
  }
  else {
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x98);
      uVar4 = (uVar1 + *(int *)(param_1 + 0x9c)) - 1;
      fn_8264D6C0(((ulonglong)(uVar1 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar1 & 0x1fffffff) +
                   -0x40000000,
                   ((ulonglong)(uVar4 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar4 & 0x1fffffff) +
                   -0x40000000,0,0x40000000,0x40000000);
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x10000) == 0) {
      fn_8265C990(*(undefined4 *)(param_1 + 0x98),0xffffffffb1800000);
    }
  }
  return;
}

