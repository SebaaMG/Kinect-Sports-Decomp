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


ulonglong fn_82F2AC28(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = ((ulonglong)param_2 ^ (longlong)((int)param_2 >> 0x1f)) - (longlong)((int)param_2 >> 0x1f)
  ;
  if ((*(int *)(param_1 + 0x624) == 0) || (2 < *(int *)(param_5 + 0x60))) {
    if ((ulonglong)param_4 <= (uVar2 & 0xffffffff)) {
      return (ulonglong)*(uint *)(param_4 * 8 + param_3 + 4) + 9;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      return (ulonglong)*(uint *)((int)((uVar2 & 0xffffffff) << 3) + param_3 + 4) + 1;
    }
  }
  else {
    lVar3 = 1;
    iVar1 = 1;
    if (*(int *)(param_5 + 0x60) == 1) {
      lVar3 = 2;
      iVar1 = 3;
    }
    if (param_4 <= (uint)(iVar1 + (int)uVar2) >> (int)lVar3) {
      return (ulonglong)*(uint *)(param_4 * 8 + param_3 + 4) + lVar3 + 9;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      return (ulonglong)*(uint *)((int)((uVar2 & 0xffffffff) << 3) + param_3 + 4) + lVar3 + 1;
    }
  }
  return (ulonglong)*(uint *)(param_3 + 4);
}

