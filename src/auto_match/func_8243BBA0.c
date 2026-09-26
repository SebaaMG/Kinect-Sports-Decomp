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
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_82439ED0();
extern int fn_8243E578();
extern int fn_824B7300();
extern int fn_824B7500();
extern int fn_824B8548();
extern int fn_824B9228();
extern int fn_828EA5F8();
extern int fn_828EA608();
extern int fn_828EA610();
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int lbl_83265988;


void fn_8243BBA0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar5;
  char cVar11;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar4;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined4 uVar22;
  longlong lVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  int iStack_c0;
  int iStack_b4;
  uint auStack_b0 [44];
  
  iStack_b4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
  if (0 < *(int *)(*(int *)(iVar5 + 0x174) + 0xbc)) {
    iStack_c0 = 0;
    do {
      piVar3 = *(int **)(**(int **)(iVar5 + 8) + iStack_c0);
      iVar5 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
      if ((((*(int *)(iVar5 + 0x74) != 0) && (*(int *)(iVar5 + 0x24) != 0)) &&
          (iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0x34), iVar5 != 0)) &&
         (((cVar11 = fn_828EA610(iVar5), cVar11 == '\0' &&
           (cVar11 = fn_828EA5F8(iVar5), cVar11 != '\0')) &&
          (cVar11 = fn_828EA608(iVar5), iVar7 = lbl_83265988, cVar11 != '\0')))) {
        if (iVar5 == lbl_83265988) {
          iVar8 = *(int *)(param_1 + 0x40);
          uVar14 = 1;
          auStack_b0[0] = 0;
          auStack_b0[2] = 2;
          uVar25 = 0;
          auStack_b0[1] = 1;
          uVar16 = 1;
          auStack_b0[3] = 3;
          uVar15 = (ulonglong)*(uint *)(iVar8 + 0x1d8);
          uVar1 = *(uint *)(*(int *)(*(uint *)(iVar8 + 0x1d8) + 0x174) + 0xbc);
          uVar12 = (ulonglong)uVar1;
          if (1 < (int)uVar1) {
            iVar9 = 4;
            do {
              piVar3 = *(int **)(**(int **)((int)uVar15 + 8) + iVar9);
              iVar6 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
              if (*(int *)(*(int *)(iVar6 + 0x24) + 0x34) == iVar7) {
                iVar7 = (int)((uVar16 & 0xffffffff) << 2);
                auStack_b0[0] = *(uint *)((int)auStack_b0 + iVar7);
                *(undefined4 *)((int)auStack_b0 + iVar7) = 0;
                uVar14 = (ulonglong)auStack_b0[1];
                uVar25 = auStack_b0[0];
                break;
              }
              uVar16 = uVar16 + 1;
              iVar9 = iVar9 + 4;
            } while ((int)uVar16 < (int)uVar12);
          }
          if ((uint)(*(int *)(iVar8 + 0x1c8) - *(int *)(iVar8 + 0x1c4) >> 2) < 2) {
            iVar7 = *(int *)(**(int **)(iVar8 + 0x1c4) + 0x40);
            iVar8 = iVar7 + 0x120;
            fn_8243E578(iVar8,uVar25);
            fn_8243E578(iVar8,uVar14);
            fn_8243E578(iVar8,auStack_b0[2]);
            fn_8243E578(iVar8,auStack_b0[3]);
            fn_824B7300(iVar5,*(undefined4 *)(iVar7 + 0x114));
          }
          else {
            iVar7 = fn_82439ED0(param_1,5);
            lVar13 = (ulonglong)*(uint *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,1,lVar13);
            lVar23 = (ulonglong)*(uint *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,2);
            lVar21 = (ulonglong)*(uint *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,4);
            lVar19 = (ulonglong)*(uint *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,3);
            lVar17 = (ulonglong)*(uint *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_8243E578(iVar8 + 0x1f0,uVar25);
            iVar8 = fn_8243E578(iVar8 + 0x1f0,uVar14);
            iVar9 = fn_8243E578(lVar13,uVar25);
            iVar6 = fn_8243E578(lVar13,uVar14);
            iVar10 = fn_8243E578(lVar19,uVar25);
            fn_8243E578(lVar19,uVar14);
            fn_8243E578(lVar21,uVar25);
            fn_8243E578(lVar21,uVar14);
            fn_8243E578(lVar23,uVar25);
            fn_8243E578(lVar23,uVar14);
            fn_8243E578(lVar17,uVar25);
            fn_8243E578(lVar17,uVar14);
            if (iVar10 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined4 *)(iVar10 + 0x48);
            }
            if (iVar6 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(undefined4 *)(iVar6 + 0x48);
            }
            if (iVar9 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = *(undefined4 *)(iVar9 + 0x48);
            }
            if (iVar8 == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = *(undefined4 *)(iVar8 + 0x44);
            }
            if (iVar7 == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = *(undefined4 *)(iVar7 + 0x44);
            }
            uVar2 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0x174) + 0xbc);
            iVar7 = fn_8225F160();
            fn_824B7500(iVar5,*(undefined4 *)(iVar7 + 0x14),uVar2,uVar26,uVar24,uVar22,uVar20,
                              uVar18);
          }
        }
        iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c8);
        iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c4);
        iVar9 = fn_8225F160();
        uVar18 = *(undefined4 *)(iVar9 + 0x14);
        uVar4 = fn_824B8548();
        fn_824B9228(uVar4,iVar5,uVar18,(iVar7 - iVar8 & 0xfffffffcU) == 4);
      }
      iStack_c0 = iStack_c0 + 4;
      iStack_b4 = iStack_b4 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
    } while (iStack_b4 < *(int *)(*(int *)(iVar5 + 0x174) + 0xbc));
  }
  return;
}

