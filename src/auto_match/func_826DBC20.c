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
extern int fn_826D97A0();


ulonglong fn_826DBC20(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20);
  iVar3 = 0;
  if (*(int *)(iVar1 + 0x74) < 2) {
    RtlEnterCriticalSection(iVar1 + 0xac);
    iVar3 = iVar1;
  }
  lVar2 = fn_826D97A0((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0xd0
                        ,param_2);
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3 + 0xac);
  }
  return -(ulonglong)(lVar2 != 0) & lVar2 + 4U;
}

