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


ulonglong fn_82C38BA0(int param_1,ulonglong param_2,int param_3,ulonglong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return param_2;
  }
  iVar2 = *(int *)(param_1 + 0xac);
  iVar1 = (int)param_2;
  if (iVar2 < iVar1) {
    if (*(int *)(param_1 + 0xa8) <= param_5) {
      return param_2;
    }
    param_5 = *(int *)(param_1 + 0xb4) * param_5;
    lVar3 = (longlong)(0x40000000 - param_5) * (longlong)iVar2 + (longlong)param_5 * (longlong)iVar1
    ;
  }
  else {
    if (*(int *)(param_1 + 0xa4) <= param_5) {
      return param_2;
    }
    param_5 = *(int *)(param_1 + 0xb0) * param_5;
    lVar3 = (longlong)(0x40000000 - param_5) * (longlong)iVar2 + (longlong)param_5 * (longlong)iVar1
    ;
  }
  uVar4 = (ulonglong)param_3;
  iVar2 = (int)(lVar3 >> 0x1e);
  *(int *)(param_1 + 0xac) = iVar2;
  if ((int)param_4 <= (int)((longlong)((longlong)iVar2 * uVar4) >> 0x14)) {
    trapDoubleWordImmediate(6,uVar4,0);
    *(int *)(param_1 + 0xac) =
         (int)((ulonglong)((longlong)(param_4 << 0x24) / (longlong)uVar4) >> 0x10);
    trapDoubleWordImmediate
              (5,uVar4 & ~((param_4 << 0x25 | (param_4 & 0xfffffff) >> 0x1b) - 1),0xffff);
  }
  return (ulonglong)*(uint *)(param_1 + 0xac);
}

