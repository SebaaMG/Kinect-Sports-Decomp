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
extern int fn_822ABA88();


void fn_82396F50(int param_1)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  uint *puVar7;
  
  piVar5 = *(int **)(param_1 + 0x20);
  if (piVar5 != *(int **)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      lVar6 = 0;
      puVar7 = *(uint **)*piVar5;
      piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar4);
      if (puVar7 != (uint *)((int *)*piVar5)[1]) {
        do {
          uVar3 = (ulonglong)*puVar7;
          piVar2 = (int *)fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),lVar6);
          if ((ulonglong)(uint)piVar2[9] != (uVar3 & 0xffffffff)) {
            piVar2[9] = (int)uVar3;
            *(uint *)(*(int *)(piVar2[5] + 0x8c0) + 0x90) = (uint)((uVar3 & 0xffffffff) != 0);
            (**(code **)(*piVar2 + 0x24))(piVar2,uVar3);
          }
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + 1;
        } while (puVar7 != *(uint **)(*piVar5 + 4));
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (piVar5 != *(int **)(param_1 + 0x24));
  }
  return;
}

