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


void fn_82DA35A0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x2c)) {
    iVar5 = 0;
    do {
      iVar7 = 0;
      iVar2 = *(int *)(*(int *)(iVar1 + 0x28) + iVar5);
      if (0 < *(int *)(iVar2 + 0x3c)) {
        iVar6 = 0;
        do {
          piVar3 = *(int **)(*(int *)(iVar2 + 0x38) + iVar6);
          (**(code **)(*piVar3 + 0xc))(piVar3,(ulonglong)*(uint *)(param_1 + 0xc) + 0x1d0);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar7 < *(int *)(iVar2 + 0x3c));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(iVar1 + 0x2c));
  }
  return;
}

