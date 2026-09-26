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
extern int fn_825089A0();


void fn_8288C358(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x10);
  while (iVar4 != 0) {
    if (((ulonglong)*(uint *)(param_1 + 0x10) != 0) &&
       (lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) - 1, *(int *)(param_1 + 0x10) = (int)lVar3,
       lVar3 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    iVar5 = iVar4 << 2;
    do {
      iVar5 = iVar5 + -4;
      iVar4 = iVar4 + -1;
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 4));
      if (iVar1 != 0) {
        piVar2 = (int *)fn_825089A0();
        (**(code **)(*piVar2 + 0x28))(piVar2,iVar1);
      }
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    piVar2 = (int *)fn_825089A0();
    (**(code **)(*piVar2 + 0x28))(piVar2,iVar4);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

