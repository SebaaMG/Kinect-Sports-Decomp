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
extern int fn_82A3FC78();


ulonglong fn_82A3FF60(int param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  RtlEnterCriticalSection(0xffffffff83219da4);
  lVar5 = param_2 + param_4 + 8;
  uVar3 = fn_82A3FC78(param_1,0,lVar5);
  uVar4 = 0;
  if ((uVar3 & 0xffffffff) != 0) {
    uVar4 = uVar3 + 8;
    if ((param_4 & 0xffffffff) != 0) {
      trapWord(6,param_4,0);
      uVar4 = (longlong)((int)((uVar4 & 0xffffffff) / (param_4 & 0xffffffff)) + 1) *
              (longlong)(int)param_4;
    }
    iVar1 = (int)uVar4;
    *(uint *)(iVar1 + -8) = param_3;
    *(int *)(iVar1 + -4) = iVar1 - (int)uVar3;
    iVar1 = ((param_3 & 0x1fff) + 5) * 4;
    iVar2 = (int)lVar5;
    *(int *)(iVar1 + param_1) = *(int *)(iVar1 + param_1) + iVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
  }
  RtlLeaveCriticalSection(0xffffffff83219da4);
  return uVar4;
}

