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
extern int fn_826776A0();
extern int fn_826792B0();


void fn_82679C40(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if ((ulonglong)*(uint *)(param_1 + 0x1d8) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x1d8) - 1;
    iVar3 = 0;
    if (-1 < (longlong)uVar2) {
      lVar1 = (uVar2 & 0x3fffffff) << 2;
      do {
        if (2 < *(int *)((int)lVar1 + *(int *)(param_1 + 0x1d4))) {
          iVar3 = *(int *)((int)((uVar2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x1d4));
          break;
        }
        uVar2 = uVar2 - 1;
        lVar1 = lVar1 + -4;
      } while (-1 < (longlong)uVar2);
    }
    fn_826792B0(param_1 + 0x1d4,(ulonglong)*(uint *)(param_1 + 0x1d8) - 1);
    if (iVar3 != *(int *)(param_1 + 0x1d0)) {
      *(int *)(param_1 + 0x1d0) = iVar3;
      fn_826776A0(param_1,iVar3);
    }
  }
  return;
}

