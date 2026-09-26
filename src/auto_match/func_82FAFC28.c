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
extern int fn_82FB0110();


void fn_82FAFC28(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    ((int (*)())fn_82FAFC28)();
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  if (iVar2 != 0) {
    piVar8 = *(int **)(iVar2 + 4);
    piVar9 = (int *)(param_2 + 4);
    if (piVar8 != *(int **)(iVar2 + 8)) {
      do {
        piVar5 = (int *)*piVar9;
        if (piVar5 != *(int **)(param_2 + 8)) {
          do {
            if (*piVar5 == *piVar8) {
              if (1 < (uint)((*(int *)(param_2 + 8) - *piVar9) / 0x14)) {
                piVar7 = (int *)(*(int *)(param_2 + 8) + -0x18);
                piVar6 = piVar5 + -1;
                lVar10 = 5;
                do {
                  piVar7 = piVar7 + 1;
                  piVar6 = piVar6 + 1;
                  *piVar6 = *piVar7;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -0x14;
            }
            else {
              piVar5 = piVar5 + 5;
            }
          } while (piVar5 != *(int **)(param_2 + 8));
        }
        uVar1 = (*(int *)(param_2 + 8) - *piVar9) / 0x14;
        if (((uVar1 < *(uint *)(param_2 + 0xc)) ||
            (cVar4 = fn_82FB0110(piVar9,3), cVar4 != '\0')) &&
           (uVar1 < *(uint *)(param_2 + 0xc))) {
          iVar3 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar3 + 0x14;
          if (iVar3 != 0) {
            piVar5 = piVar8 + -1;
            piVar7 = (int *)(iVar3 + -4);
            lVar10 = 5;
            do {
              piVar5 = piVar5 + 1;
              piVar7 = piVar7 + 1;
              *piVar7 = *piVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        piVar8 = piVar8 + 5;
      } while (piVar8 != *(int **)(iVar2 + 8));
    }
  }
  return;
}

