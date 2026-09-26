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
extern int fn_8278FDC8();
extern int fn_82792180();


void fn_8279A300(int param_1,ulonglong param_2)

{
  int iVar2;
  longlong lVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2;
  if ((*(uint *)(param_1 + 0x1c) != 0) &&
     (iVar2 = fn_8278FDC8((ulonglong)*(uint *)(param_1 + 0x1c) + 0x14), iVar2 != 0)) {
    uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x1c) + 0x30);
    uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x30) + 0x1c) +
            (ulonglong)*(uint *)(param_1 + 0x68);
    if (((uVar3 & 0xffffffff) <= uVar4) && (uVar4 <= (uVar3 + param_2 & 0xffffffff))) {
      uVar5 = uVar4 - uVar3;
      if ((param_2 & 0xffffffff) <= (uVar4 - uVar3 & 0xffffffff)) {
        uVar5 = param_2;
      }
      uVar3 = fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14);
      uVar4 = (*(uint *)(param_1 + 0x28) - uVar5) + param_2;
      if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        lVar1 = fn_8278FDC8((ulonglong)*(uint *)(param_1 + 0x1c) + 0x14);
        uVar5 = ((ulonglong)*(uint *)(param_1 + 0x28) - lVar1) + param_2;
        iVar2 = fn_8278FDC8((ulonglong)*(uint *)(param_1 + 0x1c) + 0x14);
        *(int *)(param_1 + 0x28) = iVar2;
        iVar2 = *(int *)(param_1 + 0xa8) + iVar2;
      }
      else {
        *(int *)(param_1 + 0x28) = (int)uVar4;
        iVar2 = (*(int *)(param_1 + 0xa8) - (int)uVar5) + (int)param_2;
      }
      *(int *)(param_1 + 0xa8) = iVar2;
    }
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_82792180(param_1 + 0x4c,uVar5);
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + (int)uVar5;
  }
  return;
}

