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
extern int fn_822315A0();
extern unsigned int lbl_8218EC10;


void fn_82373B70(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  double dVar8;
  int aiStack_50 [20];
  
  piVar5 = *(int **)(param_1 + 0x184);
  if (piVar5 != *(int **)(param_1 + 0x188)) {
    dVar8 = (double)lbl_8218EC10;
    do {
      if ((*(int *)(*piVar5 + 0xd4) == 0) || (dVar8 <= (double)*(float *)(*piVar5 + 0xe0))) {
        piVar5 = piVar5 + 2;
      }
      else {
        piVar1 = *(int **)(param_1 + 0x188);
        piVar3 = piVar5;
        while (piVar6 = piVar3 + 2, piVar6 != piVar1) {
          iVar7 = 0;
          iVar4 = 0;
          if (aiStack_50 != piVar6) {
            iVar4 = piVar3[3];
            piVar3[3] = 0;
            iVar7 = *piVar6;
            *piVar6 = 0;
          }
          iVar2 = piVar3[1];
          piVar3[1] = iVar4;
          *piVar3 = iVar7;
          piVar3 = piVar6;
          if (iVar2 != 0) {
            fn_822315A0();
          }
        }
        iVar4 = *(int *)(param_1 + 0x188);
        for (iVar7 = iVar4 + -8; iVar7 != iVar4; iVar7 = iVar7 + 8) {
          if (*(int *)(iVar7 + 4) != 0) {
            fn_822315A0();
          }
        }
        *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -8;
      }
    } while (piVar5 != *(int **)(param_1 + 0x188));
  }
  return;
}

