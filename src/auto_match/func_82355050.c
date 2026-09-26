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
extern unsigned int *auStack_b0;
extern unsigned int fStack_68;
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_82356BF0();
extern int fn_82357010();
extern int fn_8265C9E0();
extern int fn_82F64988();
extern unsigned int iStack_c0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_70;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


void fn_82355050(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  int iStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [64];
  undefined4 uStack_70;
  float fStack_68;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(undefined4 **)(param_1 + 0x298) = puVar3;
  lVar6 = 0;
  iVar4 = fn_8225F160();
  piVar1 = *(int **)(param_1 + 0x1c);
  if (*(int *)(iVar4 + 8) == 2) {
    uVar9 = 0;
    piVar1 = *(int **)*piVar1;
    iVar4 = *piVar1;
    if (piVar1[1] - iVar4 >> 2 != 0) {
      iVar7 = 0;
      dVar12 = (double)lbl_821CC160;
      do {
        uVar11 = 0;
        if (*(int *)(*(int *)(iVar7 + iVar4) + 8) != 0) {
          do {
            iVar4 = fn_822ABA88(*(undefined4 *)(iVar7 + iVar4),uVar11);
            if (*(int *)(iVar4 + 0x70) != 0) {
              uStack_70 = 0;
              fn_82F64988(auStack_b0,0x20,iVar4 + 0x30);
              uStack_b4 = *(undefined4 *)(iVar4 + 0x74);
              fStack_68 = (float)dVar12;
              uStack_b8 = (undefined4)uVar11;
              iStack_c0 = 0;
              uStack_bc = (uint)uVar9;
              fn_82356BF0(piVar1,lVar6,uVar9,&iStack_c0);
              *(undefined4 *)(param_1 + 0x29c) = 2;
              fn_82357010(*(undefined4 *)(param_1 + 0x298),&iStack_c0);
              lVar6 = lVar6 + 1;
            }
            iVar4 = *piVar1;
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(iVar7 + iVar4) + 8));
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 4;
      } while ((uVar9 & 0xffffffff) < (ulonglong)(uint)(piVar1[1] - iVar4 >> 2));
    }
  }
  else {
    iVar4 = 0;
    if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
      iVar7 = 0;
      dVar12 = (double)lbl_821CC160;
      do {
        uVar10 = 0;
        piVar1 = *(int **)(**(int **)(param_1 + 0x1c) + iVar7);
        iVar5 = *piVar1;
        if (piVar1[1] - iVar5 >> 2 != 0) {
          iVar8 = 0;
          do {
            iVar2 = *(int *)(iVar8 + iVar5);
            uVar9 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              do {
                iVar5 = fn_822ABA88(iVar2,uVar9);
                if (*(int *)(iVar5 + 0x70) != 0) {
                  fn_82F64988(auStack_b0,0x20,iVar5 + 0x30);
                  uStack_b4 = *(undefined4 *)(iVar5 + 0x74);
                  fStack_68 = (float)dVar12;
                  uStack_b8 = (undefined4)uVar9;
                  uStack_70 = 0;
                  iStack_c0 = iVar4;
                  uStack_bc = uVar10;
                  fn_82356BF0(piVar1,lVar6,0,&iStack_c0);
                  *(undefined4 *)(param_1 + 0x29c) = 2;
                  fn_82357010(*(undefined4 *)(param_1 + 0x298),&iStack_c0);
                  lVar6 = lVar6 + 1;
                }
                iVar5 = *piVar1;
                uVar9 = uVar9 + 1;
                iVar2 = *(int *)(iVar8 + iVar5);
              } while ((uVar9 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 8));
            }
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar10 < (uint)(piVar1[1] - iVar5 >> 2));
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar4 < (*(int **)(param_1 + 0x1c))[1] - **(int **)(param_1 + 0x1c) >> 2);
    }
  }
  return;
}

