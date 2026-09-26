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


void fn_82A1F560(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)*(uint *)(param_2 + 0x1c) + *(longlong *)(param_2 + 0x10);
  RtlEnterCriticalSection(param_1 + 3);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *param_1);
      if (((*(int *)(iVar1 + 0x30) != 0) && (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) &&
         (lVar4 = (ulonglong)*(uint *)(iVar1 + 0x1c) + *(longlong *)(iVar1 + 0x10), lVar5 < lVar4))
      {
        lVar5 = lVar4;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)param_1[1]);
  }
  *(longlong *)(param_2 + 0x10) = lVar5;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  RtlLeaveCriticalSection(param_1 + 3);
  return;
}

