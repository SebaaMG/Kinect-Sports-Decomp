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
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_823AB470();
extern int fn_8245CB70();


void fn_8245B718(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x664) == 0) {
    iVar3 = 1;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = fn_8225C590();
      iVar2 = fn_8225D9B8(uVar1,lVar4);
      if ((iVar2 != 0) && (iVar2 = fn_823AB470(), iVar2 != 0)) {
        iVar3 = 1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < 4);
  }
  RtlEnterCriticalSection(param_1);
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x588) != 0)) {
    if (*(int *)(param_1 + 0x6b4) != 0) {
      fn_8245CB70(param_1,1);
    }
    *(undefined4 *)(param_1 + 0x584) = 1;
  }
  *(int *)(param_1 + 0x588) = iVar3;
  RtlLeaveCriticalSection(param_1);
  return;
}

