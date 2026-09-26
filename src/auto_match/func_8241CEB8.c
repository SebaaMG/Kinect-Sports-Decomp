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
extern unsigned int lbl_821B9BC8;


int * fn_8241CEB8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  for (piVar6 = *(int **)(param_1 + 0x3f8); piVar6 != *(int **)(param_1 + 0x3fc);
      piVar6 = piVar6 + 6) {
    if ((*piVar6 != param_2) || (bVar4 = true, piVar6[3] != param_3)) {
      bVar4 = false;
    }
    if (bVar4) break;
  }
  if (piVar6 != *(int **)(param_1 + 0x3fc)) {
    piVar1 = *(int **)(param_1 + 0x3fc);
    piVar5 = piVar6 + 6;
    if (piVar5 != piVar1) {
      piVar7 = piVar6 + -1;
      do {
        iVar8 = *piVar5;
        piVar5 = piVar5 + 6;
        piVar7[1] = iVar8;
        piVar7[3] = piVar7[9];
        piVar7[4] = piVar7[10];
        piVar7[5] = piVar7[0xb];
        piVar3 = piVar7 + 0xc;
        piVar7 = piVar7 + 6;
        *piVar7 = *piVar3;
      } while (piVar5 != piVar1);
    }
    iVar2 = *(int *)(param_1 + 0x3fc);
    for (iVar8 = iVar2 + -0x18; iVar8 != iVar2; iVar8 = iVar8 + 0x18) {
      *(undefined ***)(iVar8 + 4) = &lbl_821B9BC8;
    }
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) + -0x18;
    return piVar6 + 1;
  }
  return (int *)0x0;
}

