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
extern int fn_82D01840();
extern int fn_82D01D88();


void fn_82CF8E10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  RtlEnterCriticalSection(param_1 + 4);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x208)) {
    piVar4 = (int *)(param_1 + 0x17c);
    do {
      iVar1 = *piVar4;
      iVar2 = *(int *)(iVar1 + 0x28);
      iVar3 = fn_82D01D88(iVar1);
      if (0 < iVar3) {
        fn_82D01840(iVar1,(ulonglong)*(uint *)(iVar1 + 0x14) -
                                (ulonglong)*(uint *)(iVar1 + 0x14) / 10);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      *(int *)(param_1 + 0x20) =
           (*(int *)(iVar1 + 0x28) - iVar2) * *(int *)(iVar1 + 4) + *(int *)(param_1 + 0x20);
    } while (iVar5 < *(int *)(param_1 + 0x208));
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

