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


void fn_825D3468(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  iVar8 = *(int *)(param_2 + 300);
  do {
    if (iVar8 == 0) {
      piVar7 = (int *)(param_2 + 4);
      lVar6 = 0x24;
      do {
        iVar8 = *piVar7;
        if (iVar8 != 0) {
          do {
            piVar9 = (int *)(iVar8 + -0x10);
            if (iVar8 == 0) {
              piVar9 = (int *)0x0;
            }
            iVar3 = (**(code **)(*piVar9 + 4))(param_1,piVar9);
            *(undefined1 *)(param_4 + 0x48 + (int)piVar9) = 1;
            iVar8 = *(int *)(iVar8 + 4);
            if (iVar3 != 0) {
              piVar5 = piVar9 + 4;
              if (piVar9[4] != 0) {
                *(int *)(piVar9[4] + 4) = piVar9[5];
              }
              if ((int *)piVar9[5] != (int *)0x0) {
                *(int *)piVar9[5] = *piVar5;
              }
              *piVar5 = 0;
              piVar9[5] = 0;
              puVar2 = *(undefined4 **)(param_2 + 300);
              *(int **)(param_2 + 300) = piVar5;
              *piVar5 = param_2 + 0x128;
              piVar9[5] = (int)puVar2;
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = piVar5;
              }
              piVar9[0x11] = 3;
            }
          } while (iVar8 != 0);
        }
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + 2;
      } while (lVar6 != 0);
      iVar8 = *(int *)(param_2 + 0x124);
      if (iVar8 != 0) {
        do {
          piVar7 = (int *)(iVar8 + -0x10);
          if (iVar8 == 0) {
            piVar7 = (int *)0x0;
          }
          iVar4 = (**(code **)(*piVar7 + 4))(param_1,piVar7);
          *(undefined1 *)(param_4 + 0x48 + (int)piVar7) = 1;
          iVar8 = *(int *)(iVar8 + 4);
          piVar9 = piVar7 + 4;
          iVar3 = piVar7[4];
          if (iVar4 == 0) {
            iVar4 = piVar7[0xe];
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = piVar7[5];
            }
            if ((int *)piVar7[5] != (int *)0x0) {
              *(int *)piVar7[5] = *piVar9;
            }
            piVar7[5] = 0;
            *piVar9 = 0;
            iVar3 = iVar4 * 8 + param_2;
            puVar2 = *(undefined4 **)(iVar3 + 4);
            *(int **)(iVar3 + 4) = piVar9;
            *piVar9 = iVar3;
            piVar7[5] = (int)puVar2;
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = piVar9;
            }
          }
          else {
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = piVar7[5];
            }
            if ((int *)piVar7[5] != (int *)0x0) {
              *(int *)piVar7[5] = *piVar9;
            }
            piVar7[5] = 0;
            *piVar9 = 0;
            puVar2 = *(undefined4 **)(param_2 + 300);
            *(int **)(param_2 + 300) = piVar9;
            *piVar9 = param_2 + 0x128;
            piVar7[5] = (int)puVar2;
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = piVar9;
            }
            piVar7[0x11] = 3;
          }
        } while (iVar8 != 0);
      }
      return;
    }
    puVar2 = (undefined4 *)(iVar8 + -0x10);
    if (iVar8 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    iVar3 = puVar2[0x11];
    if (iVar3 < 1) {
LAB_825d34c8:
      bVar1 = false;
    }
    else {
      if (iVar3 != 1) {
        puVar2[0x11] = iVar3 + -1;
        goto LAB_825d34c8;
      }
      bVar1 = true;
    }
    iVar8 = *(int *)(iVar8 + 4);
    if (bVar1) {
      (**(code **)*puVar2)(puVar2,1);
    }
  } while( true );
}

