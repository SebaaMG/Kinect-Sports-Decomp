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
extern int fn_82F63CA0();


void fn_82456508(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  piVar8 = *(int **)(param_1 + 0xc);
  if (piVar8 != *(int **)(param_1 + 0x10)) {
    piVar7 = piVar8 + 2;
    do {
      iVar1 = piVar7[-1];
      if ((iVar1 == 0) || (bVar5 = false, *(int *)(iVar1 + 4) == 0)) {
        bVar5 = true;
      }
      if (bVar5) {
        piVar4 = *(int **)(param_1 + 0x10);
        if (piVar7 != piVar4) {
          piVar12 = piVar7;
          do {
            fn_8228E658(((int)piVar8 - (int)piVar7) + (int)piVar12,piVar12);
            piVar12 = piVar12 + 2;
          } while (piVar12 != piVar4);
        }
        fn_823210A8((ulonglong)*(uint *)(param_1 + 0x10) - 8);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -8;
      }
      else {
        iVar2 = *piVar8;
        iVar10 = 0;
        iVar9 = 0;
        if (iVar1 != 0) {
          cVar6 = fn_8223AAC0(iVar1);
          if (cVar6 != '\0') {
            iVar10 = iVar2;
            iVar9 = iVar1;
          }
        }
        puVar3 = *(undefined4 **)(param_1 + 0x20);
        for (puVar11 = *(undefined4 **)(param_1 + 0x1c); puVar11 != puVar3; puVar11 = puVar11 + 1) {
          piVar4 = *(int **)(iVar10 + 0x10);
          if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          (**(code **)(*piVar4 + 4))(piVar4,*puVar11);
        }
        piVar8 = piVar8 + 2;
        piVar7 = piVar7 + 2;
        if (iVar9 != 0) {
          fn_822315A0(iVar9);
        }
      }
    } while (piVar8 != *(int **)(param_1 + 0x10));
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x20),0);
    *(int *)(param_1 + 0x20) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

