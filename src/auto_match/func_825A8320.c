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
extern unsigned int *auStack_60;
extern int fn_8251FA58();
extern int fn_8253D5A0();
extern int fn_825B4620();
extern int fn_82609918();
extern int fn_82CE4118();
extern int fn_82D890C8();


void fn_825A8320(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_60 [96];
  
  uVar1 = *(uint *)(param_1 + 0x75c);
  iVar2 = *(int *)(param_1 + 0x4c);
  for (uVar11 = (ulonglong)*(uint *)(param_1 + 0x758); (uVar11 & 0xffffffff) < (ulonglong)uVar1;
      uVar11 = uVar11 + 0x3f0) {
    fn_825B4620(uVar11,iVar2);
  }
  piVar8 = *(int **)(param_1 + 0x794);
  piVar3 = *(int **)(param_1 + 0x798);
  do {
    if (piVar3 <= piVar8) {
      piVar3 = *(int **)(param_1 + 0x748);
      for (piVar8 = *(int **)(param_1 + 0x744); piVar8 < piVar3; piVar8 = piVar8 + 4) {
        if (piVar8[1] != 0) {
          if (*(int *)(piVar8[1] + 8) != 0) {
            fn_8253D5A0(iVar2 + 0x1f0,iVar2);
          }
          fn_82CE4118(piVar8[1]);
          piVar8[1] = 0;
        }
        if (*piVar8 != 0) {
          fn_8251FA58();
          *piVar8 = 0;
        }
      }
      return;
    }
    iVar4 = *piVar8;
    bVar6 = false;
    iVar9 = 0;
    iVar10 = *(int *)(iVar4 + 0xc);
    if (0 < iVar10) {
      iVar7 = 0;
      do {
        if (*(int *)(*(int *)(iVar7 + *(int *)(iVar4 + 8)) + 8) == 0) {
          bVar6 = true;
          break;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar9 < iVar10);
    }
    iVar9 = 0;
    if (0 < *(int *)(iVar4 + 0x18)) {
      iVar7 = 0;
      do {
        iVar5 = *(int *)(*(int *)(iVar7 + *(int *)(iVar4 + 0x14)) + 8);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) == 0)) {
          bVar6 = true;
          break;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar9 < *(int *)(iVar4 + 0x18));
    }
    if (bVar6) {
      iVar9 = 0;
      if (0 < iVar10) {
        iVar10 = 0;
        do {
          if (*(int *)(*(int *)(*(int *)(iVar4 + 8) + iVar10) + 8) != 0) {
            fn_8253D5A0(iVar2 + 0x1f0,iVar2);
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar9 < *(int *)(iVar4 + 0xc));
      }
      iVar10 = 0;
      if (0 < *(int *)(iVar4 + 0x18)) {
        iVar9 = 0;
        do {
          iVar7 = *(int *)(*(int *)(iVar9 + *(int *)(iVar4 + 0x14)) + 8);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 0x18) != 0)) {
            fn_82D890C8(auStack_60,*(undefined4 *)(iVar2 + 0x1f8));
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar10 < *(int *)(iVar4 + 0x18));
      }
    }
    else {
      fn_82609918(iVar4,iVar2 + 0x1f0,iVar2);
    }
    fn_82CE4118(*piVar8);
    piVar8 = piVar8 + 1;
  } while( true );
}

