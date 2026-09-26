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
extern int fn_823B6790();
extern int fn_828AAF70();


void fn_823B68A8(int param_1)

{
  int iVar2;
  int *piVar3;
  char cVar6;
  int iVar4;
  longlong lVar1;
  undefined4 uVar5;
  
  iVar2 = fn_823B6790();
  if (iVar2 != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar3 = (int *)0x0;
    }
    iVar2 = (**(code **)(*piVar3 + 8))();
    cVar6 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x3c))();
    if ((cVar6 == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
      piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar3 = (int *)0x0;
      }
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = (**(code **)(*piVar3 + 8))();
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x1ec) + 0x3c))();
      if (iVar4 == iVar2 + 1) {
        piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar3 = (int *)0x0;
        }
        iVar2 = (**(code **)(*piVar3 + 8))();
        (**(code **)(*(int *)(iVar2 + 0x198) + 0x3c))();
        piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar3 = (int *)0x0;
        }
        lVar1 = (**(code **)(*piVar3 + 8))();
        fn_828AAF70(lVar1 + 0x198,1);
        piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar3 = (int *)0x0;
        }
        iVar2 = (**(code **)(*piVar3 + 8))();
        uVar5 = (**(code **)(*(int *)(iVar2 + 0x1ec) + 0x3c))();
        *(undefined4 *)(param_1 + 0x54) = uVar5;
      }
    }
  }
  return;
}

