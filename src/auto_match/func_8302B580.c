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
extern int fn_8302B6E0();


void fn_8302B580(int param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  RtlEnterCriticalSection(0xffffffff83264ea8);
  iVar2 = fn_8302B6E0(param_1,param_2);
  if (iVar2 == 0) {
    *(int *)(param_3 + 4) = (int)param_2;
    uVar1 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
    uVar1 = ((param_2 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
    iVar2 = (int)((param_2 - ((uVar1 & 0x7ffffff) * 0x20 - uVar1) & 0xffffffff) << 2);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar2 + param_1);
    *(int *)(iVar2 + param_1) = param_3;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  RtlLeaveCriticalSection(0xffffffff83264ea8);
  return;
}

