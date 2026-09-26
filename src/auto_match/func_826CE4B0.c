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
extern int fn_8267C498();
extern int fn_826997B0();
extern int fn_826BD928();


void fn_826CE4B0(int param_1,ulonglong param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x1b4);
  if ((iVar3 != 0) && (uVar4 = 0, *(int *)(iVar3 + 0xc) != 0)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(iVar3 + 8);
      iVar2 = *(int *)(iVar3 + iVar6);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      iVar3 = *(int *)(iVar3 + iVar6);
      if ((ulonglong)*(uint *)(iVar3 + 0x10) == (param_2 & 0xffffffff)) {
        (**(code **)(**(int **)(iVar3 + 8) + 0xc))();
        fn_826997B0((ulonglong)*(uint *)(param_1 + 0x1b4) + 8,uVar4);
      }
      else {
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 4;
      }
      fn_8267C498(iVar3);
      iVar3 = *(int *)(param_1 + 0x1b4);
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 0xc));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar3 = 0;
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0xa8) + iVar3);
      if ((*(byte *)(iVar6 + 0x66) & 0x80) != 0) {
        iVar2 = (**(code **)(*(int *)(iVar6 + 0x68) + 8))(iVar6 + 0x68);
        if (iVar2 == 2) {
          uVar1 = fn_826BD928(iVar6 + 0x68);
          fn_826CE4B0(uVar1,param_2);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xac));
  }
  return;
}

