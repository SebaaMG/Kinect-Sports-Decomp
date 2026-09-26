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
extern int fn_83050528();
extern int fn_83053F30();


ulonglong fn_83053588(int param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  char acStack_30 [4];
  int aiStack_2c [11];
  
  iVar5 = param_1 + 0x38;
  *param_3 = param_1 + 0x18;
  RtlEnterCriticalSection(iVar5);
  uVar1 = *(uint *)(param_1 + 0x74);
  if (((uVar1 & 0x8000000) == 0) && ((uVar1 >> 0x18 & 1) != 0)) {
    if ((*(uint *)(param_1 + 0x9c) & 0x1000000) != 0) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfeffffff;
      *(ulonglong *)(param_1 + 0x80) =
           ((longlong)*(int *)(param_1 + 0x6c) * (longlong)*(int *)(param_1 + 0x20) & 0xffffffffU) +
           *(longlong *)(param_1 + 0x88);
    }
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x68) - (ulonglong)*(uint *)(param_1 + 0xb0);
    uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x60) + 0x84);
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    uVar2 = fn_83053F30(param_1,param_2,
                          ((longlong)*(int *)(param_1 + 0x6c) * (longlong)*(int *)(param_1 + 0x20) &
                          0xffffffffU) + *(longlong *)(param_1 + 0x88) +
                          (ulonglong)*(uint *)(param_1 + 0xb0),uVar2,uVar1 >> 0x1d & 1,aiStack_2c,
                          acStack_30);
    if ((uVar2 & 0xffffffff) != 0) {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + aiStack_2c[0];
      if ((acStack_30[0] != '\0') || (uVar3 <= uVar4)) {
        fn_83050528(param_1,0);
      }
    }
    RtlLeaveCriticalSection(iVar5);
  }
  else {
    RtlLeaveCriticalSection(iVar5);
    uVar2 = 0;
  }
  return uVar2;
}

