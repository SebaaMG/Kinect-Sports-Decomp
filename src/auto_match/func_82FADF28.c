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
extern int fn_82F69148();


void fn_82FADF28(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  for (iVar4 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0); 2 < (uint)(iVar4 >> 3);
      iVar4 = iVar4 - *(uint *)(param_1 + 0xa0)) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xa0);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0xa4) - 8;
    uVar1 = uVar2 + 8;
    if ((uVar1 & 0xffffffff) < (uVar3 & 0xffffffff)) {
      fn_82F69148(uVar1,uVar2 + 0x10,
                   ((((uVar3 - uVar1) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
    }
    iVar4 = *(int *)(param_1 + 0xa4) + -8;
    *(int *)(param_1 + 0xa4) = iVar4;
  }
  return;
}

