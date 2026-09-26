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
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82DEDCE0(int param_1,int param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_2 * 0xc + *(int *)(param_1 + 8));
  iVar3 = 0;
  if (0 < piVar4[1]) {
    do {
      iVar2 = (*piVar4 + iVar3) * 8;
      iVar5 = iVar2 + *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(iVar2 + *(int *)(param_1 + 0x14));
      uVar1 = *(uint *)(iVar5 + 4);
      if (*(int *)((int)((((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0x3fffffff) * 4
                          + param_3 + 0x10 & 0xffffffff) << 2) + *(int *)(iVar2 + 0x18)) != 0) {
        fn_82CE4118();
      }
      uVar1 = *(uint *)(iVar5 + 4);
      *(int *)((int)((((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0x3fffffff) * 4 +
                      param_3 + 0x10 & 0xffffffff) << 2) + *(int *)(iVar2 + 0x18)) = (int)param_4;
      if ((param_4 & 0xffffffff) != 0) {
        fn_82CE4040(param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar4[1]);
  }
  return;
}

