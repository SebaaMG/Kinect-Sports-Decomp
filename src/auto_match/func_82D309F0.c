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
extern int fn_82D2E4C0();
extern int fn_82D30978();


void fn_82D309F0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  
  piVar10 = *(int **)(param_1 + 0x24c);
  if (piVar10 == (int *)0x0) {
    return;
  }
  uVar6 = (ulonglong)(uint)param_2[1];
  uVar1 = piVar10[1];
  iVar2 = *(int *)((int)((uVar6 + 2 & 0xffffffff) << 2) + *param_2);
  iVar3 = *(int *)((int)(((-(ulonglong)(uVar6 != 2) & uVar6 + 1) + 2 & 0xffffffff) << 2) + *param_2)
  ;
  iVar4 = 0;
  trapWord(6,(ulonglong)uVar1,0);
  uVar7 = *(int *)(iVar2 + 0xc) * 0x3442a5 + *(int *)(iVar2 + 8) * 0x21528000 ^
          *(int *)(iVar3 + 0xc) * 0x1958e9 + *(int *)(iVar3 + 8) * -0x538b8000;
  piVar10 = (int *)((uVar7 - (uVar7 / uVar1) * uVar1) * 0xc + *piVar10);
  iVar9 = piVar10[1];
  if (0 < iVar9) {
    piVar10 = (int *)*piVar10;
    piVar8 = piVar10;
    do {
      if ((*piVar8 == iVar2) && (piVar8[1] == iVar3)) {
        if ((iVar4 != -1) && (piVar10 = piVar10 + iVar4 * 3, piVar10 != (int *)0x0)) {
          fn_82D2E4C0(param_1 + 0x250,piVar10[2]);
          iVar4 = 0;
          piVar10 = *(int **)(param_1 + 0x24c);
          uVar1 = piVar10[1];
          uVar7 = (*(int *)(iVar3 + 8) * 0x8000 + *(int *)(iVar3 + 0xc)) * 0x1958e9 ^
                  (*(int *)(iVar2 + 8) * 0x8000 + *(int *)(iVar2 + 0xc)) * 0x3442a5;
          trapWord(6,(ulonglong)uVar1,0);
          piVar10[3] = piVar10[3] + -1;
          piVar10 = (int *)((uVar7 - (uVar7 / uVar1) * uVar1) * 0xc + *piVar10);
          iVar9 = piVar10[1];
          if (0 < iVar9) {
            piVar8 = (int *)*piVar10;
            piVar5 = piVar8;
            goto LAB_82d30b9c;
          }
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 3;
    } while (iVar4 < iVar9);
  }
  goto LAB_82d30c58;
  while( true ) {
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 3;
    if (iVar9 <= iVar4) break;
LAB_82d30b9c:
    if ((*piVar5 == iVar2) && (piVar5[1] == iVar3)) {
      if (-1 < iVar4) {
        iVar4 = 0;
        piVar5 = piVar8;
        if (iVar9 < 1) goto LAB_82d30c08;
        goto LAB_82d30be0;
      }
      break;
    }
  }
  goto LAB_82d30c58;
  while( true ) {
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 3;
    if (iVar9 <= iVar4) break;
LAB_82d30be0:
    if ((*piVar5 == iVar2) && (piVar5[1] == iVar3)) goto LAB_82d30c0c;
  }
LAB_82d30c08:
  iVar4 = -1;
LAB_82d30c0c:
  iVar9 = iVar9 + -1;
  piVar10[1] = iVar9;
  if (iVar9 != iVar4) {
    piVar10 = piVar8 + iVar4 * 3;
    iVar9 = iVar9 * 0xc - (int)piVar10;
    lVar11 = 3;
    do {
      *piVar10 = *(int *)((int)piVar8 + iVar9 + (int)piVar10);
      piVar10 = piVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
LAB_82d30c58:
  if (*(int *)(*(int *)(param_1 + 0x24c) + 0xc) == 0) {
    fn_82D30978(param_1);
  }
  return;
}

