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
extern int fn_8242C410();
extern unsigned int lbl_821CC160;


undefined8 fn_82450348(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  
  dVar8 = (double)lbl_821CC160;
  piVar1 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) +
                    (*(int **)(param_1 + 0x40))[0x81] * 4);
  uVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
  lVar5 = 0;
  uVar7 = (ulonglong)**(uint **)(param_1 + 0x40);
  iVar4 = fn_8242C410(uVar7);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      piVar1 = *(int **)(**(int **)((int)uVar7 + 8) + (int)lVar6);
      uVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      iVar4 = (int)uVar3;
      if ((*(int *)(*(int *)(iVar4 + 0x14) + 0x1d0) == 0) &&
         (((param_2 == 0 || (*(int *)(iVar4 + 0x24) != 0)) &&
          (dVar8 < (double)**(float **)(iVar4 + 0x1a0))))) {
        uVar2 = uVar3;
        dVar8 = (double)**(float **)(iVar4 + 0x1a0);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 4;
      iVar4 = fn_8242C410(uVar7);
    } while ((int)lVar5 < iVar4);
  }
  return uVar2;
}

