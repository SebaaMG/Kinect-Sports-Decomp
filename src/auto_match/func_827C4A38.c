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
extern int fn_827C3A38();
extern int fn_827C3B98();
extern int fn_827C43E0();
extern unsigned int iStack_1a4;
extern unsigned int iStack_1b8;
extern unsigned int lbl_82017AE8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;


undefined8 fn_827C4A38(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  char cVar10;
  uint uVar9;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  int *piStack_1b0;
  uint uStack_1ac;
  int iStack_1a4;
  int aiStack_1a0 [104];
  
  uStack_1ac = -1 << (param_1[0x5e] & 0x3fU);
  iVar2 = param_1[0x66];
  iVar3 = param_1[0x5c];
  uVar6 = 1 << (param_1[0x5e] & 0x3fU);
  if (((param_1[0x3f] != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (cVar10 = fn_827C43E0(), cVar10 == '\0')) {
    return 0;
  }
  if (*(char *)(iVar2 + 8) == '\0') {
    iVar12 = 0;
    iVar4 = *param_2;
    iVar15 = param_1[0x5b];
    uStack_1c0 = *(undefined4 *)param_1[6];
    uStack_1bc = ((undefined4 *)param_1[6])[1];
    iVar13 = *(int *)(iVar2 + 0x14);
    iVar16 = *(int *)(iVar2 + 0xc);
    uVar20 = (ulonglong)*(uint *)(iVar2 + 0x10);
    iVar5 = *(int *)(iVar2 + 0x3c);
    piStack_1b0 = param_1;
    if (iVar13 == 0) {
      iVar14 = 0;
      if (iVar15 <= iVar3) {
        piVar19 = &iStack_1a4;
        do {
          if ((int)uVar20 < 8) {
            cVar10 = fn_827C3A38(&uStack_1c0,iVar16,uVar20,0);
            if (cVar10 == '\0') goto LAB_827c4e10;
            uVar20 = (ulonglong)uStack_1b4;
            iVar16 = iStack_1b8;
            if (7 < (int)uStack_1b4) goto LAB_827c4b34;
            uVar11 = 1;
LAB_827c4b68:
            uVar9 = fn_827C3B98(&uStack_1c0,iVar16,uVar20,iVar5,uVar11);
            if ((int)uVar9 < 0) goto LAB_827c4e10;
            uVar20 = (ulonglong)uStack_1b4;
            iVar16 = iStack_1b8;
          }
          else {
LAB_827c4b34:
            uVar7 = iVar16 >> ((int)uVar20 - 8U & 0x3f) & 0xff;
            uVar9 = *(uint *)((uVar7 + 0x24) * 4 + iVar5);
            if (uVar9 == 0) {
              uVar11 = 9;
              goto LAB_827c4b68;
            }
            uVar20 = uVar20 - uVar9;
            uVar9 = (uint)*(byte *)(uVar7 + iVar5 + 0x490);
          }
          uVar7 = (int)uVar9 >> 4;
          lVar17 = (longlong)(int)uVar7;
          if ((uVar9 & 0xf) == 0) {
            uVar9 = 0;
            if (uVar7 != 0xf) {
              iVar13 = 1 << (uVar7 & 0x3f);
              if (uVar7 != 0) {
                if ((int)uVar20 < (int)uVar7) {
                  cVar10 = fn_827C3A38(&uStack_1c0,iVar16,uVar20,lVar17);
                  if (cVar10 == '\0') goto LAB_827c4e10;
                  uVar20 = (ulonglong)uStack_1b4;
                  iVar16 = iStack_1b8;
                }
                uVar20 = uVar20 - lVar17;
                iVar13 = (iVar16 >> ((uint)uVar20 & 0x3f) & iVar13 - 1U) + iVar13;
              }
              iVar14 = 0;
              if (iVar13 != 0) goto LAB_827c4d38;
              break;
            }
          }
          else {
            if ((uVar9 & 0xf) != 1) {
              *(undefined4 *)(*param_1 + 0x14) = 0x76;
              (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
            }
            if ((int)uVar20 < 1) {
              cVar10 = fn_827C3A38(&uStack_1c0,iVar16,uVar20,1);
              if (cVar10 == '\0') goto LAB_827c4e10;
              uVar20 = (ulonglong)uStack_1b4;
              iVar16 = iStack_1b8;
            }
            uVar20 = uVar20 - 1;
            uVar9 = uStack_1ac;
            if ((iVar16 >> ((uint)uVar20 & 0x3f) & 1U) != 0) {
              uVar9 = uVar6;
            }
          }
          piVar18 = (int *)(&lbl_82017AE8 + iVar15 * 4);
          do {
            iVar13 = *piVar18 * 2;
            if (*(short *)(iVar13 + iVar4) == 0) {
              lVar17 = lVar17 + -1;
              if (lVar17 < 0) break;
            }
            else {
              if ((int)uVar20 < 1) {
                cVar10 = fn_827C3A38(&uStack_1c0,iVar16,uVar20,1);
                if (cVar10 == '\0') goto LAB_827c4e10;
                uVar20 = (ulonglong)uStack_1b4;
                iVar16 = iStack_1b8;
              }
              uVar20 = uVar20 - 1;
              if (((iVar16 >> ((uint)uVar20 & 0x3f) & 1U) != 0) &&
                 (sVar1 = *(short *)(iVar13 + iVar4), ((int)sVar1 & uVar6) == 0)) {
                sVar8 = (short)uVar6;
                if (sVar1 < 0) {
                  sVar8 = (short)uStack_1ac;
                }
                *(short *)(iVar13 + iVar4) = sVar1 + sVar8;
              }
            }
            iVar15 = iVar15 + 1;
            piVar18 = piVar18 + 1;
          } while (iVar15 <= iVar3);
          if (uVar9 != 0) {
            iVar12 = iVar12 + 1;
            iVar13 = *(int *)(&lbl_82017AE8 + iVar15 * 4);
            piVar19 = piVar19 + 1;
            *piVar19 = iVar13;
            *(short *)(iVar13 * 2 + iVar4) = (short)uVar9;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 <= iVar3);
      }
    }
    else {
LAB_827c4d38:
      if (iVar15 <= iVar3) {
        piVar19 = (int *)(&lbl_82017AE8 + iVar15 * 4);
        do {
          iVar5 = *piVar19 * 2;
          if (*(short *)(iVar5 + iVar4) != 0) {
            if ((int)uVar20 < 1) {
              cVar10 = fn_827C3A38(&uStack_1c0,iVar16,uVar20,1);
              if (cVar10 == '\0') {
LAB_827c4e10:
                if (iVar12 < 1) {
                  return 0;
                }
                piVar19 = aiStack_1a0 + iVar12;
                do {
                  piVar19 = piVar19 + -1;
                  *(undefined2 *)(*piVar19 * 2 + iVar4) = 0;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                return 0;
              }
              uVar20 = (ulonglong)uStack_1b4;
              iVar16 = iStack_1b8;
            }
            uVar20 = uVar20 - 1;
            if (((iVar16 >> ((uint)uVar20 & 0x3f) & 1U) != 0) &&
               (sVar1 = *(short *)(iVar5 + iVar4), ((int)sVar1 & uVar6) == 0)) {
              sVar8 = (short)uVar6;
              if (sVar1 < 0) {
                sVar8 = (short)uStack_1ac;
              }
              *(short *)(iVar5 + iVar4) = sVar1 + sVar8;
            }
          }
          iVar15 = iVar15 + 1;
          piVar19 = piVar19 + 1;
        } while (iVar15 <= iVar3);
      }
      iVar14 = iVar13 + -1;
    }
    *(undefined4 *)param_1[6] = uStack_1c0;
    *(undefined4 *)(param_1[6] + 4) = uStack_1bc;
    *(int *)(iVar2 + 0xc) = iVar16;
    *(int *)(iVar2 + 0x10) = (int)uVar20;
    *(int *)(iVar2 + 0x14) = iVar14;
  }
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  return 1;
}

