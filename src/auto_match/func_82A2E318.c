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
extern int fn_82A2C4A8();


void fn_82A2E318(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x50) + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    ExFreePool();
  }
  RtlEnterCriticalSection(param_1);
  if (*(int *)(iVar1 + 8) != 0) {
    fn_82A2C4A8();
  }
  iVar2 = *(int *)(iVar1 + 0x50);
  piVar3 = *(int **)(iVar1 + 0x54);
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  RtlLeaveCriticalSection(param_1);
  *(undefined4 *)(param_2 + 0x10) = 0;
  IoCompleteRequest(param_2,1);
  return;
}

