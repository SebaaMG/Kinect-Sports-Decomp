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
extern int fn_82522ED8();
extern int fn_825A24C0();
extern int fn_825F6940();
extern unsigned int lbl_8326B9FC;
extern unsigned int lbl_8326C018;


bool fn_825907D0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = param_1 + 0x85c;
  piVar4 = (int *)(*(int *)(param_1 + 0x88c) * 0xc + iVar6);
  iVar1 = 3;
  if ((piVar4[1] != 0) && (*(int *)(param_1 + 0x5c) == 0)) {
    fn_825F6940(piVar4[1],param_1);
  }
  iVar7 = *piVar4;
  if (iVar7 != 0) {
    piVar2 = *(int **)(iVar7 + 8);
    piVar3 = *(int **)(iVar7 + 4);
    if (piVar2 != piVar3) {
      piVar5 = piVar2 + -2;
      if (piVar2 + -2 < piVar3) {
LAB_825909c4:
        return iVar1 == 2;
      }
      iVar1 = 3;
LAB_82590850:
      if (iVar1 == 3) {
        for (iVar1 = *(int *)(param_1 + 0x304); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
          piVar2 = *(int **)(iVar1 + 8);
          if (*piVar2 == 0x45) goto LAB_82590880;
        }
        piVar2 = (int *)0x0;
LAB_82590880:
        do {
          iVar7 = 0;
          puVar8 = &lbl_8326C018;
          if (0 < lbl_8326B9FC) {
            do {
              iVar1 = (*(code *)*puVar8)(piVar5,param_1,piVar2 != (int *)0x0,0);
              if (iVar1 != 4) goto LAB_825908d8;
              iVar7 = iVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar7 < lbl_8326B9FC);
            iVar1 = 3;
LAB_825908d8:
            if (iVar1 != 3) goto LAB_825908fc;
          }
          *piVar5 = *(int *)*piVar5 + *piVar5;
        } while( true );
      }
      goto LAB_825909c4;
    }
  }
  return false;
LAB_825908fc:
  if (iVar1 == 2) {
    fn_825A24C0(*piVar4,piVar5);
    iVar7 = *(int *)(*piVar4 + 8);
    piVar5 = (int *)(iVar7 + -8);
    piVar3 = *(int **)(*piVar4 + 4);
    if ((int *)(iVar7 - 8U) < piVar3) {
      if (piVar4[2] == 0) goto LAB_825909bc;
      if (0 < *(int *)(param_1 + 0x88c)) {
        if (*(int *)(*(int *)(param_1 + 0x88c) * 0xc + iVar6) != 0) {
          fn_82522ED8();
          *(undefined4 *)(*(int *)(param_1 + 0x88c) * 0xc + iVar6) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x88c) * 0xc + iVar6;
        if (*(int *)(iVar1 + 4) != 0) {
          fn_82522ED8();
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        *(int *)(param_1 + 0x88c) = *(int *)(param_1 + 0x88c) + -1;
      }
      iVar1 = 1;
      goto LAB_82590994;
    }
  }
  else {
LAB_82590994:
    if (iVar1 != 1) goto LAB_825909bc;
    iVar7 = *(int *)(param_1 + 0x88c) * 0xc;
    iVar1 = *(int *)(iVar7 + iVar6);
    piVar4 = (int *)(iVar7 + iVar6);
    piVar3 = *(int **)(iVar1 + 4);
    piVar5 = (int *)(*(int *)(iVar1 + 8) + -8);
  }
  iVar1 = 3;
LAB_825909bc:
  if (piVar5 < piVar3) goto LAB_825909c4;
  goto LAB_82590850;
}

