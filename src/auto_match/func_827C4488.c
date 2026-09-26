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
extern unsigned int *auStack_84;
extern int fn_827C3A38();
extern int fn_827C3B98();
extern int fn_827C43E0();
extern unsigned int iStack_90;
extern unsigned int iStack_98;
extern unsigned int lbl_82017CA8;
extern unsigned int lbl_82017CE8;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_827C4488(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  char cVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  uint uStack_94;
  int iStack_90;
  undefined4 auStack_84 [2];
  int aiStack_7c [31];
  
  iVar1 = *(int *)(param_1 + 0x198);
  uVar2 = *(uint *)(param_1 + 0x178);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (cVar8 = fn_827C43E0(), cVar8 != '\0')) {
    if (*(char *)(iVar1 + 8) == '\0') {
      puVar11 = auStack_84;
      puVar12 = (undefined4 *)(iVar1 + 0x10);
      uStack_a0 = **(undefined4 **)(param_1 + 0x18);
      lVar17 = 5;
      uStack_9c = (*(undefined4 **)(param_1 + 0x18))[1];
      iVar9 = *(int *)(iVar1 + 0xc);
      uVar10 = (ulonglong)*(uint *)(iVar1 + 0x10);
      do {
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar12;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      iVar14 = 0;
      if (0 < *(int *)(param_1 + 0x140)) {
        piVar15 = (int *)(param_1 + 0x144);
        iStack_90 = param_1;
        do {
          iVar3 = *piVar15;
          puVar4 = (undefined2 *)*param_2;
          iVar13 = *(int *)((*(int *)(*(int *)((iVar3 + 0x4a) * 4 + param_1) + 0x14) + 0xb) * 4 +
                           iVar1);
          if ((int)uVar10 < 8) {
            cVar8 = fn_827C3A38(&uStack_a0,iVar9,uVar10,0);
            if (cVar8 == '\0') goto LAB_827c44c8;
            uVar10 = (ulonglong)uStack_94;
            iVar9 = iStack_98;
            if (7 < (int)uStack_94) goto LAB_827c4594;
            uVar6 = 1;
LAB_827c45c8:
            uVar7 = fn_827C3B98(&uStack_a0,iVar9,uVar10,iVar13,uVar6);
            if ((longlong)uVar7 < 0) goto LAB_827c44c8;
            uVar10 = (ulonglong)uStack_94;
            iVar9 = iStack_98;
          }
          else {
LAB_827c4594:
            uVar5 = iVar9 >> ((int)uVar10 - 8U & 0x3f) & 0xff;
            uVar16 = *(uint *)((uVar5 + 0x24) * 4 + iVar13);
            if (uVar16 == 0) {
              uVar6 = 9;
              goto LAB_827c45c8;
            }
            uVar10 = uVar10 - uVar16;
            uVar7 = (ulonglong)*(byte *)(uVar5 + iVar13 + 0x490);
          }
          uVar16 = (uint)uVar7;
          if (uVar16 != 0) {
            if ((int)uVar10 < (int)uVar16) {
              cVar8 = fn_827C3A38(&uStack_a0,iVar9,uVar10,uVar7);
              if (cVar8 == '\0') goto LAB_827c44c8;
              uVar10 = (ulonglong)uStack_94;
              iVar9 = iStack_98;
            }
            uVar10 = uVar10 - uVar7;
            iVar13 = (int)((uVar7 & 0xffffffff) << 2);
            uVar7 = (ulonglong)(uint)(1 << (uVar16 & 0x3f)) - 1 &
                    (longlong)(iVar9 >> ((uint)uVar10 & 0x3f));
            if ((int)uVar7 < *(int *)(&lbl_82017CA8 + iVar13)) {
              uVar7 = *(uint *)(&lbl_82017CE8 + iVar13) + uVar7;
            }
          }
          iVar14 = iVar14 + 1;
          param_2 = param_2 + 1;
          piVar15 = piVar15 + 1;
          iVar13 = aiStack_7c[iVar3] + (int)uVar7;
          aiStack_7c[iVar3] = iVar13;
          *puVar4 = (short)(iVar13 << (uVar2 & 0x3f));
        } while (iVar14 < *(int *)(param_1 + 0x140));
      }
      puVar12 = auStack_84;
      puVar11 = (undefined4 *)(iVar1 + 0x10);
      lVar17 = 5;
      **(undefined4 **)(param_1 + 0x18) = uStack_a0;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uStack_9c;
      *(int *)(iVar1 + 0xc) = iVar9;
      *(int *)(iVar1 + 0x10) = (int)uVar10;
      do {
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar12;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    uVar6 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
LAB_827c44c8:
    uVar6 = 0;
  }
  return uVar6;
}

