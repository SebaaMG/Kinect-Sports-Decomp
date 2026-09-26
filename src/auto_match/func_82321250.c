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
extern int fn_8223AAC0();
extern int fn_8228E658();
extern int fn_823210A8();
extern int fn_82F63108();


void fn_82321250(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar7 = (int *)*param_1;
  if (piVar7 != (int *)param_1[1]) {
    piVar6 = piVar7 + 2;
    do {
      iVar1 = piVar6[-1];
      if ((iVar1 == 0) || (bVar4 = false, *(int *)(iVar1 + 4) == 0)) {
        bVar4 = true;
      }
      if (bVar4) {
        piVar3 = (int *)param_1[1];
        if (piVar6 != piVar3) {
          piVar10 = piVar6;
          do {
            fn_8228E658(((int)piVar7 - (int)piVar6) + (int)piVar10,piVar10);
            piVar10 = piVar10 + 2;
          } while (piVar10 != piVar3);
        }
        fn_823210A8((ulonglong)(uint)param_1[1] - 8);
        param_1[1] = param_1[1] + -8;
      }
      else {
        iVar2 = *piVar7;
        iVar9 = 0;
        iVar8 = 0;
        if (iVar1 != 0) {
          cVar5 = fn_8223AAC0(iVar1);
          if (cVar5 != '\0') {
            iVar9 = iVar2;
            iVar8 = iVar1;
          }
        }
        piVar3 = *(int **)(iVar9 + 0x10);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(code **)(*piVar3 + 4))(piVar3,param_2,*param_3);
        if (iVar8 != 0) {
          fn_822315A0(iVar8);
        }
        piVar7 = piVar7 + 2;
        piVar6 = piVar6 + 2;
      }
    } while (piVar7 != (int *)param_1[1]);
  }
  return;
}

