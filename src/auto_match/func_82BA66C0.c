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
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BAFE48();
extern int fn_82BBFDB0();
extern int fn_82BBFDD0();
extern int fn_82BC0A30();
extern int fn_82BC0A80();
extern int fn_82BC2958();
extern int fn_82BC3138();
extern int fn_82BC3428();
extern int fn_82BC3B08();
extern int fn_82BC55C8();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_820DEB14;


void fn_82BA66C0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar10;
  undefined4 *puVar8;
  undefined8 uVar7;
  int iVar9;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  char *pcStack_a4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(iVar1 + 8) != 0) {
    pcStack_a4 = "vfetch_map_list";
    do {
      piVar2 = *(int **)(iVar1 + 0x1c);
      piVar14 = (int *)0x0;
      piVar11 = (int *)0x0;
      if (piVar2[2] != 0) {
        do {
          piVar13 = piVar11;
          if ((piVar2[0x39] & 1U) != 0) {
            iVar9 = piVar2[0x15];
            cVar10 = (**(code **)(*piVar2 + 0x18))(piVar2);
            if (((cVar10 != '\0') &&
                (cVar10 = (**(code **)(*piVar2 + 0x1c))(piVar2), cVar10 != '\0')) &&
               ((iVar9 == 0x1e || (((iVar9 == 0xc || (iVar9 == 0xd)) || (iVar9 == 0xe)))))) {
              uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
              puVar8 = (undefined4 *)fn_82B7BD28(uVar3,0x18);
              piVar13 = puVar8 + 1;
              *puVar8 = uVar3;
              puVar8[5] = piVar11;
              puVar8[2] = piVar2;
              *(undefined1 *)(piVar2 + 0x2c) = 1;
              iVar4 = piVar2[0x21];
              fn_82BC3138(piVar2,&iStack_a8,&iStack_b0,&iStack_ac);
              puVar8[3] = iStack_b0;
              puVar8[4] = iStack_ac;
              if (8 < iStack_ac) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820def20,0xffffffff820deb50,0xce8);
              }
              piVar11 = piVar14;
              if (piVar14 == (int *)0x0) {
LAB_82ba6858:
                uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
                puVar8 = (undefined4 *)fn_82B7BD28(uVar3,0x34);
                *puVar8 = uVar3;
                piVar11 = puVar8 + 1;
                puVar8[1] = iStack_a8;
                puVar8[2] = iVar9;
                puVar8[3] = iVar4;
                puVar8[6] = iStack_b0;
                puVar8[0xc] = piVar14;
                puVar8[4] = piVar2;
                puVar8[5] = 1;
                puVar8[7] = iStack_b0 + iStack_ac;
                piVar14 = piVar11;
              }
              else {
                do {
                  if (((*piVar11 == iStack_a8) && (piVar11[1] == iVar9)) && (piVar11[2] == iVar4))
                  break;
                  piVar11 = (int *)piVar11[0xb];
                } while (piVar11 != (int *)0x0);
                if (piVar11 == (int *)0x0) goto LAB_82ba6858;
                if (iStack_b0 < piVar11[5]) {
                  piVar11[3] = (int)piVar2;
                  piVar11[5] = iStack_b0;
                }
                if (piVar11[6] < iStack_b0 + iStack_ac) {
                  piVar11[6] = iStack_b0 + iStack_ac;
                }
                piVar11[4] = piVar11[4] + 1;
              }
              *piVar13 = (int)piVar11;
            }
          }
          piVar2 = (int *)piVar2[2];
          piVar11 = piVar13;
        } while (piVar2[2] != 0);
        while (piVar14 != (int *)0x0) {
          if (piVar13 == (int *)0x0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,pcStack_a4,0xffffffff820deb50,0xd14);
          }
          uVar7 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0x1f,3);
          piVar2 = piVar14;
          piVar14 = (int *)0x0;
          while (piVar11 = piVar2, piVar11 != (int *)0x0) {
            piVar2 = (int *)piVar11[0xb];
            piVar11[0xb] = 0;
            if (piVar11[4] < 1) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820def30,0xffffffff820deb50,0xd1f);
            }
            iVar9 = piVar11[3];
            piVar11[7] = iVar9;
            uVar3 = *(undefined4 *)(iVar9 + 0x1c);
            uVar5 = *(undefined4 *)(iVar9 + 0x80);
            fn_82BC2958(iVar9,0,uVar7);
            *(undefined4 *)(piVar11[7] + 0x80) = lbl_820DEB14;
            fn_82BC0A30(uVar7,piVar11[7]);
            uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
            puVar8 = (undefined4 *)fn_82B7BD28(uVar6,0x3c4);
            *puVar8 = uVar6;
            if (puVar8 + 1 == (undefined4 *)0x0) {
              iVar9 = 0;
            }
            else {
              iVar9 = fn_82BC3B08(puVar8 + 1,0x80,*(undefined4 *)(param_1 + 0xc));
            }
            fn_82BC2958(iVar9,0,uVar3);
            *(undefined4 *)(iVar9 + 0x80) = uVar5;
            fn_82BC2958(iVar9,1,uVar7);
            fn_82BC0A30(uVar3,iVar9);
            fn_82BC0A80(uVar7,1,iVar9);
            fn_82BC55C8(iVar1,piVar11[7],iVar9);
            *(int *)(piVar11[7] + 0xb4) = iVar9;
            piVar11[8] = iVar9;
            piVar11[10] = 0;
            piVar11[9] = piVar11[5];
            *(undefined4 *)(piVar11[7] + 0xb8) = 0;
            if (8 < piVar11[6] - piVar11[5]) {
              piVar11[0xb] = (int)piVar14;
              piVar11[3] = 0;
              piVar11[4] = 0;
              piVar11[5] = piVar11[6] + 1;
              piVar11[6] = 0;
              piVar14 = piVar11;
            }
          }
          piVar2 = piVar13;
          piVar13 = (int *)0x0;
          while (piVar11 = piVar2, piVar11 != (int *)0x0) {
            iVar9 = *piVar11;
            piVar2 = (int *)piVar11[4];
            piVar11[4] = 0;
            iVar4 = *(int *)(iVar9 + 0x1c);
            iVar12 = (piVar11[2] - *(int *)(iVar9 + 0x24)) + piVar11[3];
            if (piVar11[1] == iVar4) {
              if (*(int *)(iVar9 + 0x28) < iVar12) {
                *(int *)(iVar9 + 0x28) = iVar12;
                *(int *)(iVar4 + 0xb8) = iVar12;
              }
            }
            else if (iVar12 < 9) {
              if (*(int *)(iVar9 + 0x28) < iVar12) {
                *(int *)(iVar9 + 0x28) = iVar12;
                *(int *)(iVar4 + 0xb8) = iVar12;
              }
              fn_82BBFDD0(piVar11[1]);
              fn_82BBFDB0(piVar11[1],*(undefined4 *)(iVar9 + 0x20));
              fn_82BC3428(piVar11[1],uVar7);
              fn_82BC0A80(uVar7,*(undefined4 *)(piVar11[1] + 0x14),piVar11[1]);
            }
            else {
              if (piVar11[2] < *(int *)(iVar9 + 0x14)) {
                *(int *)(iVar9 + 0xc) = piVar11[1];
                *(int *)(iVar9 + 0x14) = piVar11[2];
              }
              if (*(int *)(iVar9 + 0x18) < piVar11[2] + piVar11[3]) {
                *(int *)(iVar9 + 0x18) = piVar11[2] + piVar11[3];
              }
              *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
              piVar11[4] = (int)piVar13;
              piVar13 = piVar11;
            }
          }
        }
      }
      iVar1 = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != 0);
  }
  return;
}

