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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82D01808();
extern int fn_82D02518();


void fn_82CF9248(int param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 auStack_50 [4];
  uint auStack_4c [19];
  
  RtlEnterCriticalSection(param_1 + 4);
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x900);
  uVar5 = (ulonglong)uVar1;
  do {
    iVar3 = *(int *)((int)((uVar5 + 0x5f & 0xffffffff) << 2) + param_1);
    iVar2 = *(int *)(iVar3 + 0x28);
    pcVar4 = (char *)fn_82D02518(auStack_50,iVar3,param_2,auStack_4c);
    if (*pcVar4 != '\0') {
      uVar5 = uVar5 + 1;
      uVar5 = (ulonglong)(*(uint *)(param_1 + 0x208) >> 0x1f) -
              (((uVar5 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar5 < *(uint *)(param_1 + 0x208))) &
              uVar5;
    }
    fn_82D01808(iVar3);
    param_2 = param_2 - (ulonglong)auStack_4c[0];
    *(int *)(param_1 + 0x20) =
         (*(int *)(iVar3 + 0x28) - iVar2) * *(int *)(iVar3 + 4) + *(int *)(param_1 + 0x20);
  } while ((0 < param_2) && ((uint)uVar5 != uVar1));
  *(uint *)(param_1 + 0x900) = (uint)uVar5;
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

