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
extern int fn_82286080();


void fn_8228BC90(int param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = fn_82286080(param_2);
  if (iVar2 != 1) {
    bVar1 = false;
    iVar3 = 0;
    iVar2 = **(int **)(param_1 + 4);
    if (0 < iVar2) {
      iVar4 = 0x5a4;
      do {
        if ((ulonglong)*(uint *)(iVar4 + *(int *)(param_1 + 8)) == (param_2 & 0xffffffff)) {
          bVar1 = true;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < iVar2);
    }
    if (!bVar1) {
      *(int *)((iVar2 + 0x169) * 4 + *(int *)(param_1 + 8)) = (int)param_2;
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
    }
  }
  return;
}

