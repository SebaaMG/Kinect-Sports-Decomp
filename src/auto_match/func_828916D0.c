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
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_8223C478();
extern int fn_8240D928();
extern int fn_8287C340();
extern int fn_8287C5A0();
extern int fn_8288B2D8();
extern int fn_8288B588();
extern int fn_82897620();
extern int fn_82897B18();
extern int fn_82897BA8();
extern int fn_82897BD0();
extern int fn_82897BF8();
extern int fn_82897C00();
extern int fn_828B2E68();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F0();
extern int fn_828B55F8();
extern int fn_828B5600();
extern int fn_828B56B8();
extern int fn_828B57B0();
extern int fn_828E9DB8();
extern unsigned int iStack_b4;
extern unsigned int iStack_bc;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


undefined8 fn_828916D0(int param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar11;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar12;
  char cVar19;
  int iVar13;
  int iVar14;
  ulonglong uVar10;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  bool bVar26;
  uint uStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [160];
  
  iVar11 = (**(code **)(*param_3 + 8))(param_3);
  iVar13 = *(int *)(iVar11 + 0x10);
  iStack_bc = iVar13;
  lVar5 = fn_8240D928(*(undefined4 *)(param_1 + 0x48c));
  if (*(char *)((int)lVar5 + iVar11 + 0x34) == '\0') {
    return 0;
  }
  iVar14 = (int)((lVar5 + 5U & 0x3fffffff) << 2);
  uVar1 = *(uint *)(iVar14 + iVar11);
  iStack_b4 = iVar14;
  if ((ulonglong)uVar1 != 0) {
    iVar13 = (int)((lVar5 + 9U & 0xffffffff) << 2);
    *(int *)(iVar13 + iVar11) = *(int *)(iVar13 + iVar11) + 1;
    fn_8288B588(iVar11,(ulonglong)uVar1 - 1,lVar5);
    return 0;
  }
  param_3 = param_3 + 5;
  fn_828B5580(auStack_b0,param_3);
  uVar6 = fn_828B55F8(auStack_b0);
  fn_828B55B0(auStack_b0);
  if (*(int *)(param_1 + 0x480) == 0) {
LAB_828917e8:
    fn_828B56B8(param_2,uVar6,param_1 + 0x494);
  }
  else {
    bVar26 = uVar6 != *(uint *)(param_1 + 0x484);
    fn_8223C478(param_1 + 0x494,1,0);
    fn_828E9DB8(param_1 + 0x494,bVar26,1);
    if (bVar26) goto LAB_828917e8;
  }
  iVar23 = param_1 + 0x494;
  *(int *)(param_1 + 0x484) = (int)uVar6;
  fn_828B5580(auStack_a8,param_3);
  uVar7 = fn_828B55F0(auStack_a8);
  fn_828B55B0(auStack_a8);
  if (*(int *)(param_1 + 0x480) != 0) {
    bVar26 = uVar7 != *(uint *)(param_1 + 0x488);
    fn_8223C478(iVar23,1,0);
    fn_828E9DB8(iVar23,bVar26,1);
    if (!bVar26) goto LAB_82891888;
  }
  fn_8223C478(iVar23,2,0);
  fn_828E9DB8(iVar23,uVar7,2);
LAB_82891888:
  *(int *)(param_1 + 0x488) = (int)uVar7;
  uVar8 = fn_828B57B0(param_2,uVar6);
  fn_828B5580(auStack_a0,param_3);
  uVar9 = fn_828B5600(auStack_a0);
  fn_8223C478(iVar23,uVar8,0);
  fn_828E9DB8(iVar23,uVar9,uVar8);
  fn_828B55B0(auStack_a0);
  uVar6 = 0xffffffffffffffff;
  iVar4 = (int)((lVar5 + 9U & 0xffffffff) << 2);
  uStack_c0 = 0xffffffff;
  uVar7 = 0;
  uVar1 = *(uint *)(iVar4 + iVar11);
  if (*(int *)(iVar13 + 8) != 0) {
    do {
      piVar12 = (int *)fn_8288B2D8(iVar13,uVar7);
      cVar19 = fn_82897BA8();
      if ((cVar19 != '\0') && (cVar19 = fn_828B2E68(piVar12), cVar19 != '\0')) {
        bVar26 = false;
        iVar13 = fn_82897620(iVar11,uVar7);
        if (*(int **)(iVar13 + 0x20) == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (**(code **)(**(int **)(iVar13 + 0x20) + 4))();
        }
        iVar13 = fn_8240D928(*(undefined4 *)(param_1 + 0x48c));
        uVar22 = (ulonglong)*(uint *)((iVar13 + 3) * 4 + iVar14);
        uVar25 = (-(ulonglong)(uVar22 != 3) & (ulonglong)uVar1) + uVar22;
        if (uVar25 != 0) {
          bVar3 = false;
          cVar19 = fn_82897BF8(piVar12);
          if ((cVar19 != '\0') &&
             (uVar10 = fn_82897C00(piVar12), (uVar10 & 0xffffffff) <= (uVar25 & 0xffffffff))) {
            bVar3 = true;
            bVar26 = (int)uVar25 ==
                     (int)((uVar25 & 0xffffffff) / (uVar10 & 0xffffffff)) * (int)uVar10;
          }
          if ((!bVar3) && (cVar19 = fn_8287C340(uVar25), cVar19 != '\0')) {
            bVar26 = true;
          }
        }
        fn_8223C478(iVar23,1,0);
        fn_828E9DB8(iVar23,bVar26,1);
        for (piVar18 = piVar12; iVar13 = iStack_bc, piVar18 != (int *)0x0;
            piVar18 = (int *)fn_82897BD0(piVar18)) {
          uVar8 = fn_82897B18(piVar18);
          iVar13 = fn_82897620(iVar11,uVar8);
          if (uVar22 != 0) {
            iVar24 = 1;
            if ((ulonglong)uVar1 != 0) {
              iVar24 = uVar1 + 1;
            }
            if (*(int **)(iVar13 + 0x20) == (int *)0x0) {
              iVar15 = 0;
            }
            else {
              iVar15 = (**(code **)(**(int **)(iVar13 + 0x20) + 4))();
            }
            iVar16 = fn_8240D928(*(undefined4 *)(param_1 + 0x48c));
            iVar16 = (iVar16 + 3) * 4;
            *(int *)(iVar16 + iVar15) = *(int *)(iVar16 + iVar15) + iVar24;
          }
          iVar24 = fn_8240D928(*(undefined4 *)(param_1 + 0x48c));
          uVar2 = *(uint *)((iVar24 + 3) * 4 + iVar14);
          uVar25 = (ulonglong)uVar2;
          if (uVar25 != 0) {
            bVar3 = false;
            cVar19 = fn_82897BF8(piVar12);
            if ((cVar19 != '\0') &&
               (uVar10 = fn_82897C00(piVar12), (uVar10 & 0xffffffff) <= uVar25)) {
              bVar3 = true;
              uVar6 = uVar10 - (uVar25 - (longlong)(int)(uVar25 / (uVar10 & 0xffffffff)) *
                                         (longlong)(int)uVar10);
              uStack_c0 = (uint)uVar6;
            }
            if (!bVar3) {
              iVar24 = fn_8287C5A0(uVar25);
              uStack_b8 = iVar24 - uVar2;
              puVar21 = &uStack_b8;
              if ((uVar6 & 0xffffffff) <= (ulonglong)uStack_b8) {
                puVar21 = &uStack_c0;
              }
              uStack_c0 = *puVar21;
              uVar6 = (ulonglong)uStack_c0;
            }
          }
          if (bVar26) {
            (**(code **)(*piVar18 + 4))(piVar18,param_2,iVar23,iVar13 + 4);
            if (*(int **)(iVar13 + 0x20) == (int *)0x0) {
              piVar17 = (int *)0x0;
            }
            else {
              piVar17 = (int *)(**(code **)(**(int **)(iVar13 + 0x20) + 4))();
            }
            iVar24 = *piVar17;
            uVar8 = fn_8240D928(*(undefined4 *)(param_1 + 0x48c));
            (**(code **)(iVar24 + 0x28))(piVar17,uVar8,iVar13 + 4);
          }
        }
      }
      uVar7 = uVar7 + 1;
      iVar14 = iStack_b4;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 8));
  }
  *(undefined1 *)(param_1 + 0x490) = 1;
  iVar13 = 0;
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  *(undefined4 *)(iVar4 + iVar11) = 0;
  if ((int)lVar5 != -1) {
    *(int *)(iVar14 + iVar11) = (int)uVar6;
    return 1;
  }
  puVar20 = (undefined4 *)(iVar11 + 0x14);
  lVar5 = 4;
  do {
    *puVar20 = (int)uVar6;
    if ((uVar6 & 0xffffffff) == 0) {
      *(undefined1 *)(iVar13 + iVar11 + 0x34) = 1;
    }
    iVar13 = iVar13 + 1;
    puVar20 = puVar20 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 1;
}

