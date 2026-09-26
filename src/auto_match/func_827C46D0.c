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
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int lbl_82017AE8;
extern unsigned int lbl_82017CA8;
extern unsigned int lbl_82017CE8;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8 fn_827C46D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  char cVar11;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  
  iVar1 = *(int *)(param_1 + 0x198);
  iVar2 = *(int *)(param_1 + 0x170);
  uVar3 = *(uint *)(param_1 + 0x178);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (cVar11 = fn_827C43E0(), cVar11 != '\0')) {
    if (*(char *)(iVar1 + 8) == '\0') {
      if (*(int *)(iVar1 + 0x14) == 0) {
        uVar16 = *(uint *)(param_1 + 0x16c);
        uVar15 = (ulonglong)uVar16;
        iVar4 = *param_2;
        uStack_90 = **(undefined4 **)(param_1 + 0x18);
        uStack_8c = (*(undefined4 **)(param_1 + 0x18))[1];
        iVar12 = *(int *)(iVar1 + 0xc);
        uVar13 = (ulonglong)*(uint *)(iVar1 + 0x10);
        iVar5 = *(int *)(iVar1 + 0x3c);
        iVar14 = 0;
        iStack_80 = param_1;
        while ((int)uVar16 <= iVar2) {
          if ((int)uVar13 < 8) {
            cVar11 = fn_827C3A38(&uStack_90,iVar12,uVar13,0);
            if (cVar11 == '\0') goto LAB_827c4714;
            uVar13 = (ulonglong)uStack_84;
            iVar12 = iStack_88;
            if (7 < (int)uStack_84) goto LAB_827c47b8;
            uVar9 = 1;
LAB_827c47ec:
            uVar10 = fn_827C3B98(&uStack_90,iVar12,uVar13,iVar5,uVar9);
            if ((int)uVar10 < 0) goto LAB_827c4714;
            uVar13 = (ulonglong)uStack_84;
            iVar12 = iStack_88;
          }
          else {
LAB_827c47b8:
            uVar7 = iVar12 >> ((int)uVar13 - 8U & 0x3f) & 0xff;
            uVar16 = *(uint *)((uVar7 + 0x24) * 4 + iVar5);
            if (uVar16 == 0) {
              uVar9 = 9;
              goto LAB_827c47ec;
            }
            uVar13 = uVar13 - uVar16;
            uVar10 = (ulonglong)*(byte *)(uVar7 + iVar5 + 0x490);
          }
          uVar8 = uVar10 & 0xf;
          uVar16 = (int)uVar10 >> 4;
          lVar17 = (longlong)(int)uVar16;
          if (uVar8 == 0) {
            if (uVar16 != 0xf) {
              iVar14 = 1 << (uVar16 & 0x3f);
              if (uVar16 != 0) {
                if ((int)uVar13 < (int)uVar16) {
                  cVar11 = fn_827C3A38(&uStack_90,iVar12,uVar13,lVar17);
                  if (cVar11 == '\0') goto LAB_827c4714;
                  uVar13 = (ulonglong)uStack_84;
                  iVar12 = iStack_88;
                }
                uVar13 = uVar13 - lVar17;
                iVar14 = (iVar12 >> ((uint)uVar13 & 0x3f) & iVar14 - 1U) + iVar14;
              }
              iVar14 = iVar14 + -1;
              break;
            }
            uVar15 = uVar15 + 0xf;
          }
          else {
            uVar15 = lVar17 + uVar15;
            if ((int)uVar13 < (int)uVar8) {
              cVar11 = fn_827C3A38(&uStack_90,iVar12,uVar13,uVar8);
              if (cVar11 == '\0') goto LAB_827c4714;
              uVar13 = (ulonglong)uStack_84;
              iVar12 = iStack_88;
            }
            uVar13 = uVar13 - uVar8;
            iVar6 = (int)((uVar10 & 0xf) << 2);
            uVar16 = (1 << (int)uVar8) - 1U & iVar12 >> ((uint)uVar13 & 0x3f);
            if ((int)uVar16 < *(int *)(&lbl_82017CA8 + iVar6)) {
              uVar16 = *(int *)(&lbl_82017CE8 + iVar6) + uVar16;
            }
            *(short *)(*(int *)(&lbl_82017AE8 + (int)((uVar15 & 0xffffffff) << 2)) * 2 + iVar4) =
                 (short)(uVar16 << (uVar3 & 0x3f));
          }
          uVar15 = uVar15 + 1;
          uVar16 = (uint)uVar15;
        }
        **(undefined4 **)(param_1 + 0x18) = uStack_90;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uStack_8c;
        *(int *)(iVar1 + 0xc) = iVar12;
        *(int *)(iVar1 + 0x10) = (int)uVar13;
      }
      else {
        iVar14 = *(int *)(iVar1 + 0x14) + -1;
      }
      *(int *)(iVar1 + 0x14) = iVar14;
    }
    uVar9 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
LAB_827c4714:
    uVar9 = 0;
  }
  return uVar9;
}

