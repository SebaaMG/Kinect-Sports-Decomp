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
extern int fn_82C565B0();
extern int fn_82C65818();
extern int fn_82C658A8();
extern int fn_82C68D68();
extern int fn_82C69268();
extern int fn_82C9D0C8();
extern int fn_82CA6210();
extern int fn_82CA6690();
extern int fn_82CA6740();
extern int fn_82CB1DF0();
extern int fn_82CB2F60();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_820FC6B0;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82C5F038(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar8;
  undefined8 uVar7;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  char *pcVar23;
  uint *puVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  bool bVar27;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  
  uStack_c8 = *(uint *)(param_1 + 0xe0);
  uVar15 = *(int *)(param_1 + 0x88) + 1;
  uStack_c4 = *(int *)(param_1 + 0xecc) + *(uint *)(param_1 + 0xdc);
  iStack_c0 = *(int *)(param_1 + 0xed0) + uStack_c8;
  iStack_bc = *(int *)(param_1 + 0xed4) + uStack_c8;
  uVar14 = (ulonglong)*(uint *)(param_1 + 0xec4) + (ulonglong)uStack_c8;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)*(uint *)(param_1 + 0xec0);
  uStack_c8 = uStack_c8 + *(int *)(param_1 + 0xec8);
  puVar24 = *(uint **)(param_1 + 0x110);
  pcVar23 = *(char **)(param_1 + 0x10c);
  puVar19 = *(undefined2 **)(param_1 + 0x768);
  uVar18 = (ulonglong)*(uint *)(param_1 + 0x76c);
  uStack_b0 = (uint)uVar22;
  uStack_b4 = (uint)uVar14;
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x88);
  if ((*(int *)(param_1 + 0x3cb0) == 3) || (3 < *(int *)(param_1 + 0x3cb0))) {
    uVar5 = *(uint *)(param_1 + 0x7f8);
    iVar12 = (*(int *)(param_1 + 0xb94) + 0x2df) * 4;
    *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(iVar12 + param_1);
    *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(iVar12 + param_1);
    *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(iVar12 + param_1);
    uVar9 = *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
    *(undefined4 *)(param_1 + 0xb78) = uVar9;
    *(undefined4 *)(param_1 + 0xb74) = uVar9;
    *(undefined4 *)(param_1 + 0xb70) = uVar9;
    *(undefined4 *)(param_1 + 0x830) =
         *(undefined4 *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
    *(undefined4 *)(param_1 + 0x834) =
         *(undefined4 *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
    *(undefined4 *)(param_1 + 0x7c4) =
         *(undefined4 *)((int)(((ulonglong)uVar5 + 0x1f8 & 0xffffffff) << 2) + param_1);
    *(undefined4 *)(param_1 + 0x7bc) =
         *(undefined4 *)((int)(((ulonglong)uVar5 + 0xfd & 0xffffffff) << 3) + param_1);
    *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(uVar5 * 8 + param_1 + 0x7ec);
  }
  else {
    *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb84);
    *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_1 + 0xb90);
  }
  fn_82C565B0(param_1,*(undefined4 *)(param_1 + 0xf8));
  iVar12 = *(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x13c);
  uStack_b8 = 0;
  uVar26 = 0;
  *(int *)(param_1 + 0x134) = iVar12;
  *(int *)(param_1 + 0x138) = -iVar12;
  if (*(int *)(param_1 + 0x8c) != 0) {
    lVar16 = 0;
    do {
      if (*(int *)(param_1 + 0x3cac) == 0) {
        return 1;
      }
      lVar6 = fn_82CA6740(uVar26);
      bVar27 = lVar6 != 0;
      *(int *)(param_1 + 0x158) = -*(int *)(param_1 + 0x158);
      if ((uVar26 & 1) == 0) {
        puVar19 = *(undefined2 **)(param_1 + 0x768);
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x76c);
        pcVar23 = *(char **)(param_1 + 0x10c);
      }
      if ((*(int *)(param_1 + 0x3cb0) == 0) && ((uVar26 & 0xffffffff) != 0)) {
        bVar27 = true;
      }
      lVar6 = 0;
      uVar20 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        lVar17 = 0;
        iVar12 = (int)uVar14;
        puVar25 = (undefined1 *)((int)puVar24 + 0xf);
        lVar21 = uStack_c8 - uVar14;
        uVar26 = uVar14;
        do {
          if ((*(int *)(param_1 + 0x3cb0) == 0) && (iVar8 = fn_82C65818(param_1), iVar8 != 0)) {
            uVar7 = fn_82C658A8(param_1,param_1 + 0xf8);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            uVar15 = 0;
          }
          uVar15 = uVar15 + 1;
          uVar9 = fn_82CA6690(param_1,lVar6,bVar27,pcVar23);
          *(undefined4 *)(param_1 + 0x148) = uVar9;
          uVar7 = (**(code **)(param_1 + 0xc28))(param_1,puVar24);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          if ((*puVar24 & 0x80000000) == 0) {
            iVar8 = (int)uVar20;
            if ((*puVar24 & 0x20000) == 0x20000) {
              iVar4 = *(int *)(param_1 + 0x3cb0);
              if ((iVar4 < 4) && (iVar4 != 3)) {
                if ((iVar4 == 2) || (iVar4 == 1)) {
                  uVar7 = fn_82C69268(param_1,pcVar23,puVar24,iVar8 == 0,
                                            *(int *)(param_1 + 0x94) == iVar8,bVar27 == false);
                  goto LAB_82c5f3e8;
                }
                if (iVar4 == 0) {
                  if ((bVar27 == false) || (uVar7 = 0, uVar15 < *(int *)(param_1 + 0x88) + 1U)) {
                    uVar7 = 1;
                  }
                  if (((uVar20 & 0xffffffff) == 0) || (uVar10 = 0, uVar15 == 1)) {
                    uVar10 = 1;
                  }
                  uVar7 = fn_82C69268(param_1,pcVar23,puVar24,uVar10,
                                            *(int *)(param_1 + 0x94) == iVar8,uVar7);
                  goto LAB_82c5f3e8;
                }
              }
              else {
                uVar7 = fn_82CA6210(param_1,pcVar23,puVar24,iVar8 == 0,
                                          *(int *)(param_1 + 0x94) == iVar8,bVar27 == false,
                                          *(undefined4 *)(param_1 + 0x7c4),
                                          *(undefined4 *)(param_1 + 0x7bc));
LAB_82c5f3e8:
                if ((int)uVar7 != 0) {
                  return uVar7;
                }
              }
              if ((*pcVar23 != '\0') || (iVar8 = 1, pcVar23[1] != '\0')) {
                iVar8 = 0;
              }
              uVar5 = *puVar24;
              uVar13 = iVar8 << 0x1d | uVar5 & 0xdfffffff;
              *puVar24 = uVar13;
              if (((uVar5 & 0x40000000) != 0) && (iVar8 != 0)) {
                *puVar24 = uVar13 | 0x80000000;
                goto LAB_82c5f43c;
              }
              uVar7 = (**(code **)(param_1 + 0xc18))
                                (param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,*pcVar23 + lVar17,
                                 pcVar23[1] + lVar16,*(char *)(*pcVar23 + lbl_820FC6B0) + lVar6);
            }
            else {
              pcVar23[1] = '\0';
              *pcVar23 = '\0';
              if (*(int *)(param_1 + 0x3cb0) < 4) {
                uVar1 = *puVar25;
                uVar2 = puVar25[4];
                uVar3 = puVar25[1];
                puVar25[4] = puVar25[-1];
                puVar25[-1] = uVar2;
                *puVar25 = puVar25[3];
                puVar25[3] = uVar1;
                puVar25[1] = puVar25[2];
                puVar25[2] = uVar3;
                if ((((uVar20 & 0xffffffff) == 0) || ((*(uint *)(puVar25 + -0x27) & 0x20000) != 0))
                   || (uVar7 = 1, uVar15 < 2)) {
                  uVar7 = 0;
                }
                uVar7 = fn_82C68D68(param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,puVar19,
                                          uVar18,uVar7);
              }
              else if (*(int *)(param_1 + 0x194) == 0) {
                uVar1 = *puVar25;
                uVar2 = puVar25[4];
                uVar3 = puVar25[1];
                puVar25[4] = puVar25[-1];
                puVar25[-1] = uVar2;
                *puVar25 = puVar25[3];
                puVar25[3] = uVar1;
                puVar25[1] = puVar25[2];
                puVar25[2] = uVar3;
                if ((uVar20 == 0) || (uVar7 = 1, (*(uint *)(puVar25 + -0x27) & 0x20000) != 0)) {
                  uVar7 = 0;
                }
                uVar7 = fn_82CB1DF0(param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,puVar19,uVar18
                                        ,uVar7);
              }
              else {
                uVar1 = puVar25[1];
                uVar2 = puVar25[-1];
                uVar3 = puVar25[3];
                puVar25[3] = *puVar25;
                puVar25[1] = puVar25[2];
                puVar25[2] = uVar1;
                puVar25[-1] = puVar25[4];
                puVar25[4] = uVar2;
                *puVar25 = uVar3;
                uVar7 = fn_82CB2F60(param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,puVar19,uVar18
                                       );
                uVar14 = (ulonglong)uStack_b4;
              }
            }
            if ((int)uVar7 != 0) {
              return uVar7;
            }
          }
          else {
LAB_82c5f43c:
            pcVar23[1] = '\0';
            *pcVar23 = '\0';
            lVar11 = (uint)(iStack_c0 - iVar12) + uVar26;
            (**(code **)(param_1 + 0xc54))
                      (uVar22,uVar26,lVar21 + uVar26,lVar6 + (ulonglong)uStack_c4,lVar11,
                       lVar11 + (ulonglong)(uint)(iStack_bc - iStack_c0),
                       *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
          }
          if ((*puVar24 & 0x20000) == 0x20000) {
            puVar19[0x50] = 0;
            puVar19[0x40] = 0;
            *puVar19 = 0;
          }
          uVar20 = uVar20 + 1;
          puVar24 = puVar24 + 6;
          puVar25 = puVar25 + 0x18;
          pcVar23 = pcVar23 + 2;
          uVar22 = uVar22 + 0x10;
          uVar26 = uVar26 + 8;
          puVar19 = puVar19 + 0x60;
          uVar18 = uVar18 + 0x90;
          lVar6 = lVar6 + 0x10;
          lVar17 = lVar17 + 0x20;
        } while ((uVar20 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x88));
        uVar22 = (ulonglong)uStack_b0;
        uVar26 = (ulonglong)uStack_b8;
      }
      uVar5 = *(uint *)(param_1 + 0xe8);
      uVar26 = uVar26 + 1;
      uVar14 = uVar5 + uVar14;
      uVar22 = *(uint *)(param_1 + 0xe4) + uVar22;
      uStack_c8 = uVar5 + uStack_c8;
      uStack_c4 = *(uint *)(param_1 + 0xe4) + uStack_c4;
      iStack_c0 = uVar5 + iStack_c0;
      iStack_bc = uVar5 + iStack_bc;
      uStack_b8 = (uint)uVar26;
      uStack_b4 = (uint)uVar14;
      lVar16 = lVar16 + 0x20;
      uStack_b0 = (uint)uVar22;
    } while ((uVar26 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0xf6c) != 0) {
    fn_82C9D0C8(param_1,(ulonglong)*(uint *)(param_1 + 0xdc) +
                            (ulonglong)*(uint *)(param_1 + 0xec0),
                    (ulonglong)*(uint *)(param_1 + 0xec4) + (ulonglong)*(uint *)(param_1 + 0xe0),
                    (ulonglong)*(uint *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xec8),0,0
                    ,1,*(undefined4 *)(param_1 + 0x88));
  }
  return 0;
}

