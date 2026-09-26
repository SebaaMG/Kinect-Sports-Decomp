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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_8251FA58();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_8259A070();
extern int fn_8259C040();
extern int fn_825BD990();
extern int fn_825BDA18();
extern int fn_8265BC60();
extern int fn_8265C9E0();
extern int fn_827D5070();
extern int fn_827D50B8();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9720();
extern int fn_82816E40();
extern int fn_82816E90();
extern int fn_82816F98();
extern int fn_82A1E810();
extern unsigned int iStack_9c;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195CE8;
extern unsigned int lbl_82195CEC;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fn_825BD488(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar5;
  ulonglong uVar3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar4;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  double dVar12;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_90 [144];
  
  if (*(int *)(param_1 + 0x1e8) == 0) {
    if (*(char *)(param_1 + 0x214) == '\0') {
      uVar3 = fn_827D50B8(*(undefined4 *)(param_1 + 0x50));
      iVar5 = (int)uVar3;
      if (iVar5 == 0x3e5) {
        return uVar3;
      }
      if (iVar5 != 0x3e4) {
        if (iVar5 == 0) goto LAB_825bd538;
        iVar5 = fn_827D50B8(*(undefined4 *)(param_1 + 0x48));
        if ((iVar5 == 0) || (uVar3 = fn_827D50B8(*(undefined4 *)(param_1 + 0x48)), uVar3 == 0))
        goto LAB_825bd754;
        goto LAB_825bd738;
      }
LAB_825bd754:
      iVar5 = (int)uVar3;
      if (iVar5 == 0x3e5) {
        return uVar3;
      }
      if (iVar5 == 0x3e4) {
        return uVar3;
      }
      if (iVar5 == 0) {
LAB_825bd76c:
        if (*(int *)(*(int *)(param_1 + 0x8c) + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82522D98(0x148);
        }
        if (*(int *)(param_1 + 0x1e8) == 0) {
          iVar5 = fn_825BD990(param_1);
          if (iVar5 == 0) {
            return 0xd;
          }
          fn_82A1E810(*(undefined4 *)(param_1 + 0x1d8));
LAB_825bd4ec:
          fn_825BDA18(param_1);
          return 0;
        }
        goto LAB_825bd4fc;
      }
    }
    else {
LAB_825bd538:
      if ((*(char *)(param_1 + 0x214) == '\0') &&
         (uVar3 = fn_827D50B8(*(undefined4 *)(param_1 + 0x48)), uVar3 != 0)) {
LAB_825bd738:
        iVar5 = fn_827D50B8(*(undefined4 *)(param_1 + 0x40));
        if (iVar5 != 0) {
          uVar3 = fn_827D50B8(*(undefined4 *)(param_1 + 0x40));
        }
        goto LAB_825bd754;
      }
      if (*(char *)(param_1 + 0x214) == '\0') {
        uVar7 = fn_827D5070(*(undefined4 *)(param_1 + 0x48));
        *(undefined4 *)(param_1 + 0x88) = uVar7;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x210);
        puVar11 = (undefined4 *)(param_1 + 0x210);
        iVar5 = fn_82816E40(uVar7);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_8259A070(puVar11,&uStack_a0,auStack_a8,auStack_b0,puVar11,0,
                                    param_1 + 0x90);
        }
        *(undefined4 *)(param_1 + 0x88) = uVar6;
        fn_8251FA58(uVar7);
        *puVar11 = 0;
      }
      puVar10 = (uint *)(param_1 + 0x8c);
      uVar4 = fn_82816E90(*(undefined4 *)(param_1 + 0x88));
      fn_82816F98(*(undefined4 *)(param_1 + 0x88),uVar4,puVar10);
      dVar12 = (double)fn_8265BC60(0xffffffff821c8d08);
      fVar1 = **(float **)(param_1 + 0x8c);
      if ((((float)(dVar12 - (double)lbl_82193CC0) <= fVar1) &&
          (fVar1 <= (float)(dVar12 + (double)lbl_82193CC0))) ||
         ((lbl_82195CE8 <= fVar1 && (fVar1 <= lbl_82195CEC)))) {
        uVar9 = 0;
        if ((*(float **)(param_1 + 0x8c))[5] != 0.0) {
          iVar5 = 0;
          do {
            fn_825200F0(auStack_90,*(int *)(*puVar10 + 0x10) + iVar5);
            fn_827D9720(auStack_90,(ulonglong)*puVar10 + 8);
            iVar8 = fn_8265C9E0(0x20);
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              iVar2 = *(int *)(*puVar10 + 0x10);
              fn_827D9630(iVar8,auStack_90);
              *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar2 + iVar5 + 4);
            }
            uStack_a0 = fn_827D96A0(iVar8);
            iStack_9c = iVar8;
            fn_8259C040(auStack_a8,param_1 + 0x5c,&uStack_a0);
            uVar9 = uVar9 + 1;
            iVar5 = iVar5 + 8;
          } while (uVar9 < *(uint *)(*puVar10 + 0x14));
        }
        goto LAB_825bd76c;
      }
      uVar3 = 0xb;
    }
    fn_82A1E810(*(undefined4 *)(param_1 + 0x1d8));
    if ((int)uVar3 == 0) {
      iVar5 = fn_825BD990(param_1);
      if (iVar5 == 0) {
        uVar3 = 0xd;
      }
      else {
        fn_825BDA18(param_1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0x1ec)) {
      if ((ulonglong)*(uint *)(param_1 + 0x1f0) != 0) {
        return (ulonglong)*(uint *)(param_1 + 0x1f0);
      }
      fn_82A1E810(*(undefined4 *)(param_1 + 0x1d8));
      if (*(int *)(param_1 + 0x218) == 0) {
        return 0;
      }
      iVar5 = fn_825BD990(param_1);
      if (iVar5 == 0) {
        return 0xd;
      }
      goto LAB_825bd4ec;
    }
LAB_825bd4fc:
    uVar3 = 0x3e5;
  }
  return uVar3;
}

