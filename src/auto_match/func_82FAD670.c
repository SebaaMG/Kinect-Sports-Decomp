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


void fn_82FAD670(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_1 + 4);
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)0x0;
  do {
    while( true ) {
      piVar5 = piVar1;
      if (piVar5 == (int *)0x0) {
        return;
      }
      if (*(char *)(piVar5 + 4) == '\0') break;
      if ((((-1 < piVar5[3]) || (piVar5[1] == 0)) || (-1 < *(int *)(piVar5[1] + 0xc))) ||
         (cVar2 = (**(code **)(*piVar5 + 4))(piVar5), cVar2 == '\0')) {
        do {
          if ((*(char *)(piVar5 + 4) == '\0') &&
             (cVar2 = (**(code **)(*piVar5 + 4))(piVar5), cVar2 != '\0')) {
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar4) {
              *piVar4 = (int)piVar1;
            }
            else {
              piVar3[1] = (int)piVar1;
            }
            if (piVar5 == *(int **)(param_1 + 8)) {
              *(int **)(param_1 + 8) = piVar3;
            }
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
            (**(code **)(*piVar5 + 8))();
          }
          else {
            piVar1 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
          piVar5 = piVar1;
        } while (piVar1 != (int *)0x0);
        return;
      }
      if ((*(char *)(piVar5 + 4) != '\0') && (*(char *)(piVar5 + 0x13) == '\0')) goto LAB_82fad758;
      piVar1 = (int *)piVar5[1];
      if (piVar5 == (int *)*piVar4) {
        *piVar4 = (int)piVar1;
      }
      else {
        piVar3[1] = (int)piVar1;
      }
      if (piVar5 == *(int **)(param_1 + 8)) {
        *(int **)(param_1 + 8) = piVar3;
      }
LAB_82fad7a0:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      (**(code **)(*piVar5 + 8))();
    }
    cVar2 = (**(code **)(*piVar5 + 4))(piVar5);
    if (cVar2 != '\0') {
      piVar1 = (int *)piVar5[1];
      if (piVar5 == (int *)*piVar4) {
        *piVar4 = (int)piVar1;
      }
      else {
        piVar3[1] = (int)piVar1;
      }
      if (piVar5 == *(int **)(param_1 + 8)) {
        *(int **)(param_1 + 8) = piVar3;
      }
      goto LAB_82fad7a0;
    }
LAB_82fad758:
    piVar1 = (int *)piVar5[1];
    piVar3 = piVar5;
  } while( true );
}

