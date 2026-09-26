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
extern unsigned int *auStack_a0;
extern int fn_827C3A38();
extern int fn_827C3B98();
extern int fn_827C3CB8();
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int lbl_82017AE8;
extern unsigned int lbl_82017C28;
extern unsigned int lbl_82017C68;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8 fn_827C3D60(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  char cVar10;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint auStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar1 + 0x24) != 0)) ||
     (cVar10 = fn_827C3CB8(), cVar10 != '\0')) {
    if (*(char *)(iVar1 + 8) == '\0') {
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
      auStack_a0[1] = *(undefined4 *)(iVar1 + 0x18);
      iVar13 = 0;
      auStack_a0[2] = *(undefined4 *)(iVar1 + 0x1c);
      auStack_a0[3] = *(undefined4 *)(iVar1 + 0x20);
      uStack_90 = **(undefined4 **)(param_1 + 0x18);
      uStack_8c = (*(undefined4 **)(param_1 + 0x18))[1];
      iVar11 = *(int *)(iVar1 + 0xc);
      uVar12 = (ulonglong)*(uint *)(iVar1 + 0x10);
      if (0 < *(int *)(param_1 + 0x140)) {
        piVar14 = (int *)(param_1 + 0x144);
        piVar15 = (int *)(iVar1 + 0x70);
        iStack_80 = param_1;
        do {
          puVar3 = (undefined2 *)*param_2;
          iVar16 = piVar15[-10];
          iVar4 = *piVar15;
          if ((int)uVar12 < 8) {
            cVar10 = fn_827C3A38(&uStack_90,iVar11,uVar12,0);
            if (cVar10 == '\0') goto LAB_827c3d9c;
            uVar12 = (ulonglong)uStack_84;
            iVar11 = iStack_88;
            if (7 < (int)uStack_84) goto LAB_827c3e68;
            uVar8 = 1;
LAB_827c3e9c:
            uVar9 = fn_827C3B98(&uStack_90,iVar11,uVar12,iVar16,uVar8);
            if ((longlong)uVar9 < 0) goto LAB_827c3d9c;
            uVar12 = (ulonglong)uStack_84;
            iVar11 = iStack_88;
          }
          else {
LAB_827c3e68:
            uVar6 = iVar11 >> ((int)uVar12 - 8U & 0x3f) & 0xff;
            uVar17 = *(uint *)((uVar6 + 0x24) * 4 + iVar16);
            if (uVar17 == 0) {
              uVar8 = 9;
              goto LAB_827c3e9c;
            }
            uVar12 = uVar12 - uVar17;
            uVar9 = (ulonglong)*(byte *)(uVar6 + iVar16 + 0x490);
          }
          uVar17 = (uint)uVar9;
          if (uVar17 != 0) {
            if ((int)uVar12 < (int)uVar17) {
              cVar10 = fn_827C3A38(&uStack_90,iVar11,uVar12,uVar9);
              if (cVar10 == '\0') goto LAB_827c3d9c;
              uVar12 = (ulonglong)uStack_84;
              iVar11 = iStack_88;
            }
            uVar12 = uVar12 - uVar9;
            iVar16 = (int)((uVar9 & 0xffffffff) << 2);
            uVar9 = (ulonglong)(uint)(1 << (uVar17 & 0x3f)) - 1 &
                    (longlong)(iVar11 >> ((uint)uVar12 & 0x3f));
            if ((int)uVar9 < *(int *)(&lbl_82017C28 + iVar16)) {
              uVar9 = *(uint *)(&lbl_82017C68 + iVar16) + uVar9;
            }
          }
          if (*(char *)(iVar13 + iVar1 + 0x98) != '\0') {
            uVar17 = auStack_a0[*piVar14];
            auStack_a0[*piVar14] = (uint)(uVar17 + uVar9);
            *puVar3 = (short)(uVar17 + uVar9);
          }
          iVar16 = 1;
          if (*(char *)(iVar13 + iVar1 + 0xa2) == '\0') {
            do {
              if ((int)uVar12 < 8) {
                cVar10 = fn_827C3A38(&uStack_90,iVar11,uVar12,0);
                if (cVar10 == '\0') goto LAB_827c3d9c;
                uVar12 = (ulonglong)uStack_84;
                iVar11 = iStack_88;
                if (7 < (int)uStack_84) goto LAB_827c40a0;
                uVar8 = 1;
LAB_827c40d4:
                uVar9 = fn_827C3B98(&uStack_90,iVar11,uVar12,iVar4,uVar8);
                if ((int)uVar9 < 0) goto LAB_827c3d9c;
                uVar12 = (ulonglong)uStack_84;
                iVar11 = iStack_88;
              }
              else {
LAB_827c40a0:
                uVar6 = iVar11 >> ((int)uVar12 - 8U & 0x3f) & 0xff;
                uVar17 = *(uint *)((uVar6 + 0x24) * 4 + iVar4);
                if (uVar17 == 0) {
                  uVar8 = 9;
                  goto LAB_827c40d4;
                }
                uVar12 = uVar12 - uVar17;
                uVar9 = (ulonglong)*(byte *)(uVar6 + iVar4 + 0x490);
              }
              uVar7 = uVar9 & 0xf;
              iVar5 = (int)uVar9 >> 4;
              if (uVar7 == 0) {
                if (iVar5 != 0xf) break;
                iVar16 = iVar16 + 0xf;
              }
              else {
                iVar16 = iVar16 + iVar5;
                if ((int)uVar12 < (int)uVar7) {
                  cVar10 = fn_827C3A38(&uStack_90,iVar11,uVar12,uVar7);
                  if (cVar10 == '\0') goto LAB_827c3d9c;
                  uVar12 = (ulonglong)uStack_84;
                  iVar11 = iStack_88;
                }
                uVar12 = uVar12 - uVar7;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < 0x40);
          }
          else {
            do {
              if ((int)uVar12 < 8) {
                cVar10 = fn_827C3A38(&uStack_90,iVar11,uVar12,0);
                if (cVar10 == '\0') goto LAB_827c3d9c;
                uVar12 = (ulonglong)uStack_84;
                iVar11 = iStack_88;
                if (7 < (int)uStack_84) goto LAB_827c3f88;
                uVar8 = 1;
LAB_827c3fbc:
                uVar9 = fn_827C3B98(&uStack_90,iVar11,uVar12,iVar4,uVar8);
                if ((int)uVar9 < 0) goto LAB_827c3d9c;
                uVar12 = (ulonglong)uStack_84;
                iVar11 = iStack_88;
              }
              else {
LAB_827c3f88:
                uVar6 = iVar11 >> ((int)uVar12 - 8U & 0x3f) & 0xff;
                uVar17 = *(uint *)((uVar6 + 0x24) * 4 + iVar4);
                if (uVar17 == 0) {
                  uVar8 = 9;
                  goto LAB_827c3fbc;
                }
                uVar12 = uVar12 - uVar17;
                uVar9 = (ulonglong)*(byte *)(uVar6 + iVar4 + 0x490);
              }
              uVar7 = uVar9 & 0xf;
              iVar5 = (int)uVar9 >> 4;
              if (uVar7 == 0) {
                if (iVar5 != 0xf) break;
                iVar16 = iVar16 + 0xf;
              }
              else {
                iVar16 = iVar16 + iVar5;
                if ((int)uVar12 < (int)uVar7) {
                  cVar10 = fn_827C3A38(&uStack_90,iVar11,uVar12,uVar7);
                  if (cVar10 == '\0') goto LAB_827c3d9c;
                  uVar12 = (ulonglong)uStack_84;
                  iVar11 = iStack_88;
                }
                uVar12 = uVar12 - uVar7;
                iVar5 = (int)((uVar9 & 0xf) << 2);
                uVar17 = (1 << (int)uVar7) - 1U & iVar11 >> ((uint)uVar12 & 0x3f);
                if ((int)uVar17 < *(int *)(&lbl_82017C28 + iVar5)) {
                  uVar17 = *(int *)(&lbl_82017C68 + iVar5) + uVar17;
                }
                puVar3[*(int *)(&lbl_82017AE8 + iVar16 * 4)] = (short)uVar17;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < 0x40);
          }
          iVar13 = iVar13 + 1;
          param_2 = param_2 + 1;
          piVar15 = piVar15 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar13 < *(int *)(param_1 + 0x140));
      }
      **(undefined4 **)(param_1 + 0x18) = uStack_90;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uStack_8c;
      *(int *)(iVar1 + 0xc) = iVar11;
      *(int *)(iVar1 + 0x10) = (int)uVar12;
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(uint *)(iVar1 + 0x18) = auStack_a0[1];
      *(uint *)(iVar1 + 0x1c) = auStack_a0[2];
      *(uint *)(iVar1 + 0x20) = auStack_a0[3];
    }
    uVar8 = 1;
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  else {
LAB_827c3d9c:
    uVar8 = 0;
  }
  return uVar8;
}

