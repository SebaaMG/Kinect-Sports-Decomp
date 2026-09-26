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
extern int fn_8302AE48();


undefined8 fn_82FF6828(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = *(int **)(param_1 + 4);
  if (piVar7 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = piVar7[1];
      uVar6 = (longlong)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 4) - 1;
      if (-1 < (longlong)uVar6) {
        lVar8 = (uVar6 & 0xfffffff) << 4;
        do {
          iVar3 = *(int *)((int)lVar8 + *(int *)(iVar1 + 0x10));
          for (piVar5 = *(int **)(param_1 + 4);
              (piVar5 != *(int **)(param_1 + 8) && (*piVar5 != *piVar7)); piVar5 = piVar5 + 2) {
          }
          iVar2 = *(int *)(-(uint)(*(int **)(param_1 + 8) != piVar5) & (uint)(piVar5 + 1));
          for (piVar5 = *(int **)(iVar2 + 0x10);
              (piVar5 != *(int **)(iVar2 + 0x14) && (*piVar5 != iVar3)); piVar5 = piVar5 + 4) {
          }
          piVar5 = (int *)(-(uint)(*(int **)(iVar2 + 0x14) != piVar5) & (uint)(piVar5 + 1));
          if (piVar5 != (int *)0x0) {
            piVar5 = (int *)*piVar5;
            if (*(int **)(iVar2 + 0xc) == piVar5) {
              *(undefined4 *)(iVar2 + 0xc) = 0;
            }
            fn_8302AE48(piVar5);
            (**(code **)(*piVar5 + 8))(piVar5);
            piVar5 = *(int **)(iVar2 + 0x14);
            piVar4 = *(int **)(iVar2 + 0x10);
            if (piVar4 != piVar5) {
              do {
                if (*piVar4 == iVar3) break;
                piVar4 = piVar4 + 4;
              } while (piVar4 != piVar5);
              if (piVar4 != piVar5) {
                if (piVar4 < piVar5 + -4) {
                  fn_82F69148(piVar4,piVar4 + 4);
                }
                *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -0x10;
              }
            }
          }
          uVar6 = uVar6 - 1;
          lVar8 = lVar8 + -0x10;
        } while (-1 < (longlong)uVar6);
      }
      piVar7 = piVar7 + 2;
    } while (piVar7 != *(int **)(param_1 + 8));
  }
  return 1;
}

