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
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826F1238(int param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uStack_50;
  uint uStack_4c;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar5 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    iVar6 = 0;
    do {
      if (uVar1 <= uVar5) {
        return;
      }
      if (uVar5 < 0x10) {
        iVar3 = iVar6 + param_1 + 0x24 + 0x10;
        piVar4 = (int *)(iVar6 + param_1 + 0x24 + 0x10);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x28) + iVar6 + -0xc0;
        piVar4 = (int *)(*(int *)(param_1 + 0x28) + iVar6 + -0xc0);
      }
      if (*piVar4 == 0) {
        uVar7 = (ulonglong)*(byte *)(iVar3 + 8);
        if ((param_3 & 0xffffffff) < (ulonglong)*(byte *)(iVar3 + 8)) {
          uVar7 = param_3;
        }
        uVar2 = *(undefined4 *)(iVar3 + 4);
LAB_826f130c:
        fn_82F68CC0(param_2,uVar2,uVar7);
        param_2 = uVar7 + param_2;
        param_3 = param_3 - uVar7;
      }
      else if ((*piVar4 == 2) && (*(int **)(iVar3 + 4) != (int *)0x0)) {
        (**(code **)(**(int **)(iVar3 + 4) + 0x10))(&uStack_50);
        uVar7 = (ulonglong)uStack_4c;
        uVar2 = uStack_50;
        if ((param_3 & 0xffffffff) < (ulonglong)uStack_4c) {
          uVar7 = param_3;
        }
        goto LAB_826f130c;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while ((param_3 & 0xffffffff) != 0);
  }
  return;
}

