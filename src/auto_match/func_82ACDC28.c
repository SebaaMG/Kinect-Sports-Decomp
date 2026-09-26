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
extern int fn_82A1F2F8();
extern int fn_82AA6330();
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABDBE8();
extern int fn_82ABDF50();
extern int fn_82ABE190();
extern int fn_82ABE250();
extern int fn_82ABE8C8();
extern int fn_82AC6740();
extern int fn_82AC86B0();
extern int fn_82ACA718();
extern int fn_82ACA920();
extern int fn_82ACAAC8();
extern int fn_82ACB0F8();
extern int fn_82ACB180();
extern int fn_82ACB310();
extern int fn_82ACB458();
extern int fn_82ACB4F0();
extern int fn_82ACB660();
extern int fn_82ACB8B8();
extern int fn_82ACB930();
extern int fn_82ACBEF0();
extern int fn_82ACBF60();
extern int fn_82ACC088();
extern int fn_82ACC188();
extern int fn_82ACCAC0();
extern int fn_82ACCBB8();
extern int fn_82ACD5F8();
extern int fn_82ACD6E8();
extern int fn_82ACD8D8();
extern int fn_82ACD9F0();
extern int fn_82ACDAB8();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD6090();
extern int fn_82B81C88();
extern int fn_82B841E8();
extern int fn_82B894C8();
extern int fn_82F691F0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_100;
extern unsigned int iStack_108;
extern unsigned int iStack_b8;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_a6;
extern unsigned int uStack_a7;
extern unsigned int uStack_b4;


undefined8 fn_82ACDC28(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  char cVar17;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  char cVar18;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int *piVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  uint *puVar29;
  ulonglong uVar30;
  uint *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  char cVar35;
  undefined8 uVar36;
  int iStack0000001c;
  char acStack_110 [4];
  uint uStack_10c;
  int iStack_108;
  uint uStack_104;
  int iStack_100;
  int aiStack_f0 [14];
  int iStack_b8;
  uint uStack_b4;
  char cStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  
  iStack0000001c = param_2;
  fn_82ACB458(param_1,param_2,0);
  fn_82ACB4F0(param_1,param_2,0);
  fn_82ACCAC0(param_1,param_2,param_3);
  for (uVar8 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                        0x14); ((uVar8 & 1) == 0 && (uVar8 != 0));
      uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28)) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) & 0xfbffffff;
  }
  puVar31 = (uint *)(param_2 + 0x18);
  uVar8 = *(uint *)(param_3 + 0x10);
  if (((*(uint *)(param_2 + 0x1c) & 1) != 0) ||
     (iVar7 = (*puVar31 & 0xfffffffe) - 0x28, uVar30 = (ulonglong)uVar8, iVar7 == 0)) {
    return 0;
  }
  do {
    *(undefined4 *)(iVar7 + 0x20) = 0;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfbffffff;
    *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) & 0x81ffffff;
    *(uint *)(iVar7 + 0x14) = *(uint *)(iVar7 + 0x14) & 0x1ffffff;
    iVar4 = fn_82B81C88(param_1,iVar7);
    *(uint *)(iVar7 + 0x10) = (iVar4 + 1U & 7) << 0x15 | *(uint *)(iVar7 + 0x10) & 0xff1fffff;
    fn_82ACCBB8(param_1,iVar7,param_2,param_3,0);
    if (uVar30 < *(uint *)(param_3 + 0x10)) {
      uVar30 = (ulonglong)*(uint *)(param_3 + 0x10);
    }
    if (((*(uint *)(iVar7 + 8) >> 0x17 & 1) != 0) && ((*(uint *)(iVar7 + 8) & 0x3f80) != 0x3700)) {
      fn_82ACB660(param_1,iVar7);
    }
  } while (((*(uint *)(iVar7 + 0x24) & 1) == 0) &&
          (iVar7 = (*(uint *)(iVar7 + 0x24) & 0xfffffffe) - 0x28, iVar7 != 0));
  if (uVar8 == uVar30) {
    return 0;
  }
  puVar5 = (uint *)fn_82ABE250(param_1,8,0x2c);
  puVar28 = puVar5 + 1;
  puVar5[1] = (uint)puVar5 | 1;
  *puVar5 = (uint)puVar28 | 1;
  for (uVar8 = *(uint *)(param_2 + 0x14); ((uVar8 & 1) == 0 && (uVar8 != 0));
      uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28)) {
    if ((*(uint *)(uVar8 + 8) >> 0x17 & 1) != 0) {
      for (puVar20 = *(uint **)(uVar8 + 4);
          (puVar20 != (uint *)0x0 && ((*puVar20 & 0xe000000) == 0)); puVar20 = (uint *)puVar20[2]) {
      }
      if (((ulonglong)(*puVar20 >> 0x11) & 0xff) == uVar30) {
        return 0;
      }
    }
  }
  for (uVar8 = *(uint *)(param_2 + 0x1c); ((uVar8 & 1) == 0 && (uVar8 != 0));
      uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28)) {
    if ((*(uint *)(uVar8 + 0x14) & 0x1e000) == 0) {
      if ((*(uint *)(uVar8 + 8) >> 0x17 & 1) != 0) {
        for (puVar20 = *(uint **)(uVar8 + 4);
            (puVar20 != (uint *)0x0 && ((*puVar20 & 0xe000000) == 0)); puVar20 = (uint *)puVar20[2])
        {
        }
        if (((ulonglong)(*puVar20 >> 0x11) & 0xff) == uVar30) {
          return 0;
        }
      }
    }
    else if (((ulonglong)(*(uint *)(uVar8 + 0x14) >> 0x11) & 0xff) == uVar30) {
      uVar34 = 0x1fff;
      iVar7 = *(int *)(uVar8 + 4);
      *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) | 0x4000000;
      *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 0x4000000;
      for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
        iVar4 = *(int *)(iVar7 + 0x10);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_2)) &&
           ((*(uint *)(iVar4 + 8) & 0x3f80) != 0x3800)) {
          *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x4000000;
          cVar18 = fn_82ABE190(iVar7);
          if (cVar18 != '\0') {
            uVar9 = *(uint *)(iVar4 + 0x14) & 0x1fff;
            *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x4000000;
            if (uVar9 < uVar34) {
              uVar34 = uVar9;
            }
          }
        }
      }
      uVar9 = *(uint *)(uVar8 + 0x14);
      if ((*puVar28 & 1) == 0) {
        uVar6 = *puVar5 & 0xfffffffe;
        iVar7 = uVar6 - 4;
        if ((iVar7 == 0) || (*(uint *)(uVar6 + 8) < *(int *)(uVar6 + 4) + 1U)) goto LAB_82acdf74;
      }
      else {
LAB_82acdf74:
        iVar7 = fn_82AD6090(puVar5,1);
      }
      iVar4 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar4 + 1;
      *(uint *)((iVar4 + 4) * 4 + iVar7) = uVar9 & 0x1fff;
      if ((*puVar28 & 1) == 0) {
        uVar9 = *puVar5 & 0xfffffffe;
        iVar7 = uVar9 - 4;
        if ((iVar7 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82acdfc8;
      }
      else {
LAB_82acdfc8:
        iVar7 = fn_82AD6090(puVar5,1);
      }
      iVar4 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar4 + 1;
      *(uint *)((iVar4 + 4) * 4 + iVar7) = uVar34;
    }
  }
  if ((*puVar28 & 1) != 0) {
    return 0;
  }
  if (*puVar28 == 0) {
    return 0;
  }
  uVar8 = 0x1fff;
  uVar34 = 0x1fff;
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar9 = *puVar31;
    do {
      uVar9 = uVar9 & 0xfffffffe;
      if (uVar9 == 0x28) break;
      uVar6 = *(uint *)(uVar9 - 0x14) & 0x1fff;
      if (uVar8 < uVar6) {
LAB_82ace150:
        iVar7 = *(int *)(uVar9 - 0x24);
        iVar4 = iVar7;
LAB_82ace158:
        if (iVar4 != 0) {
          iVar11 = *(int *)(iVar4 + 0x10);
          if ((((iVar11 == 0) || (cVar18 = fn_82ABE190(iVar4), cVar18 == '\0')) ||
              (*(int *)(iVar11 + 0x1c) != param_2)) ||
             (((*(uint *)(iVar11 + 8) & 0x3f80) == 0x3800 ||
              (uVar34 <= (*(uint *)(iVar11 + 0x14) & 0x1fff))))) goto LAB_82ace1a8;
          uVar6 = *(uint *)(uVar9 - 0x18);
          *(uint *)(uVar9 - 0x20) = *(uint *)(uVar9 - 0x20) | 0x4000000;
          *(uint *)(uVar9 - 0x18) = uVar6 | 0x4000000;
          for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
            iVar4 = *(int *)(iVar7 + 0x10);
            if (((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_2)) &&
               ((*(uint *)(iVar4 + 8) & 0x3f80) != 0x3800)) {
              *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x4000000;
              cVar18 = fn_82ABE190(iVar7);
              if (cVar18 != '\0') {
                *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x4000000;
              }
            }
          }
        }
        goto LAB_82ace224;
      }
      do {
        if (((*puVar28 & 1) != 0) || (*puVar28 == 0)) break;
        puVar20 = (uint *)(*puVar5 & 0xfffffffe);
        puVar19 = puVar20 + -1;
        uVar34 = puVar20[1] - 1;
        uVar8 = puVar19[puVar20[1] + 3];
        puVar20[1] = uVar34;
        if (uVar34 == 0) {
          *(uint *)(*puVar20 & 0xfffffffe) = *puVar19;
          *(uint *)(*puVar19 & 0xfffffffe) = *puVar20;
          fn_82AA6648(puVar5,puVar19,((ulonglong)puVar20[2] + 4 & 0x3fffffff) << 2);
        }
        if ((*puVar28 & 1) == 0) {
          puVar20 = (uint *)((*puVar5 & 0xfffffffe) - 4);
        }
        else {
          puVar20 = (uint *)0x0;
        }
        uVar6 = puVar20[2] - 1;
        uVar34 = puVar20[puVar20[2] + 3];
        puVar20[2] = uVar6;
        if (uVar6 == 0) {
          *(uint *)(puVar20[1] & 0xfffffffe) = *puVar20;
          *(uint *)(*puVar20 & 0xfffffffe) = puVar20[1];
          fn_82AA6648(puVar5,puVar20,((ulonglong)puVar20[3] + 4 & 0x3fffffff) << 2);
        }
        uVar6 = *(uint *)(uVar9 - 0x14) & 0x1fff;
      } while (uVar6 <= uVar8);
      if (uVar8 < uVar6) goto LAB_82ace150;
LAB_82ace224:
      uVar9 = *(uint *)(uVar9 - 4);
    } while ((uVar9 & 1) == 0);
  }
  do {
    bVar2 = false;
    for (piVar24 = *(int **)(param_2 + 0x1c); (((uint)piVar24 & 1) == 0 && (piVar24 != (int *)0x0));
        piVar24 = *(int **)(((uint)piVar24 & 0xfffffffe) + 0x28)) {
      if (((uint)piVar24[2] >> 0x1a & 1) == 0) {
        for (iVar7 = *piVar24; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
          if ((*(uint *)(*(int *)(iVar7 + 0xc) + 8) >> 0x1a & 1) != 0) {
            bVar2 = true;
            piVar24[2] = piVar24[2] | 0x4000000;
            break;
          }
        }
      }
    }
    if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
      uVar8 = *puVar31;
      do {
        uVar8 = uVar8 & 0xfffffffe;
        if (uVar8 == 0x28) break;
        if ((*(uint *)(uVar8 - 0x20) >> 0x1a & 1) == 0) {
          for (iVar7 = *(int *)(uVar8 - 0x24); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
            iVar4 = *(int *)(iVar7 + 0x10);
            if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_2)) &&
                ((*(uint *)(iVar4 + 8) & 0x3f80) != 0x3800)) &&
               ((*(uint *)(iVar4 + 8) >> 0x1a & 1) != 0)) {
              bVar2 = true;
              *(uint *)(uVar8 - 0x20) = *(uint *)(uVar8 - 0x20) | 0x4000000;
              break;
            }
          }
        }
        uVar8 = *(uint *)(uVar8 - 4);
      } while ((uVar8 & 1) == 0);
    }
  } while (bVar2);
  uVar33 = 1;
  uVar8 = 0;
  iVar4 = 0;
  iVar11 = 0;
  uVar32 = 0;
  iVar7 = param_2;
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar34 = *puVar31;
    do {
      uVar34 = uVar34 & 0xfffffffe;
      iVar12 = uVar34 - 0x28;
      if (iVar12 == 0) break;
      uVar9 = *(uint *)(uVar34 - 0x20);
      if ((uVar9 >> 0x1a & 1) != 0) {
        uStack_10c = 0;
        acStack_110[0] = '\0';
        uVar6 = fn_82ACAAC8(param_1,iVar12,uVar33,&uStack_10c,uVar30,acStack_110);
        cVar18 = acStack_110[0];
        cVar35 = acStack_110[0];
        if (((acStack_110[0] == '\0') && ((*(uint *)(uVar34 - 0x14) & 0x1e000) != 0)) &&
           (((ulonglong)(*(uint *)(uVar34 - 0x14) >> 0x11) & 0xff) == uVar30)) {
          cVar35 = '\x01';
        }
        cVar17 = cVar35;
        if (cVar35 == '\0') {
          for (puVar28 = *(uint **)(uVar34 - 0x24); puVar28 != (uint *)0x0;
              puVar28 = (uint *)puVar28[2]) {
            piVar24 = (int *)puVar28[4];
            if (((piVar24 != (int *)0x0) && ((*puVar28 & 0xe000000) != 0)) &&
               ((piVar24[7] == iStack0000001c && ((piVar24[2] & 0x3f80U) != 0x3800)))) {
              for (iVar7 = *piVar24; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
                cVar17 = fn_82ABE190(iVar7);
                if ((((cVar17 != '\0') && (*(int *)(*(int *)(iVar7 + 0xc) + 0x1c) == iStack0000001c)
                     ) && (uVar25 = *(uint *)(*(int *)(iVar7 + 0xc) + 0x14), (uVar25 & 0x1e000) != 0
                          )) && (((ulonglong)(uVar25 >> 0x11) & 0xff) == uVar30)) {
                  cVar35 = '\x01';
                  break;
                }
              }
              cVar17 = cVar35;
              if (cVar35 != '\0') break;
            }
          }
        }
        uVar25 = uStack_10c;
        if ((cVar17 == '\0') &&
           ((uVar30 >> 2 <= (uVar32 & 0xffffffff) ||
            ((uStack_10c != 0 &&
             (((int)uVar8 < (int)uVar6 ||
              (uVar22 = (-uVar30 & 0xffffffff) << 2, uVar8 = (uint)uVar22 | (uint)-uVar30 >> 0x1e,
              (int)uVar6 < (int)(((int)uVar8 >> 3) + (uint)((int)uVar8 < 0 && (uVar22 & 4) != 0)))))
             ))))) {
          cVar35 = '\x01';
        }
        iVar7 = fn_82AC86B0(iVar12);
        if (((cVar35 == '\0') && (iVar11 != 0)) && ((iVar7 != 0 && (iVar11 != iVar7)))) {
          cVar35 = '\x01';
        }
        if (cVar35 == '\0') {
          uVar22 = 0;
          for (puVar28 = *(uint **)(uVar34 - 0x24); puVar28 != (uint *)0x0;
              puVar28 = (uint *)puVar28[2]) {
            uVar8 = puVar28[4];
            uVar23 = uVar22;
            if ((((((uVar8 != 0) && ((*puVar28 & 0xe000000) != 0)) &&
                  (*(int *)(uVar8 + 0x1c) == iStack0000001c)) &&
                 (((*(uint *)(uVar8 + 8) & 0x3f80) != 0x3800 &&
                  (uVar27 = ((ulonglong)(*(uint *)(uVar8 + 0x14) >> 5) |
                            (ulonglong)*(uint *)(uVar8 + 0x10) & 0xfffffffff8000000) >> 0x14 & 0x7ff
                  , uVar27 != (uVar33 & 0xffffffff))))) && (uVar23 = uVar27, uVar22 != 0)) &&
               (uVar23 = uVar22, uVar22 != uVar27)) {
              cVar35 = '\x01';
              break;
            }
            uVar22 = uVar23;
          }
        }
        if (cVar35 == '\0') {
          uVar8 = uVar9 >> 7 & 0x7f;
          if (uVar8 == 3) {
            cVar17 = fn_82ABDBE8(*(undefined4 *)(uVar34 + 4),*(undefined4 *)(uVar34 + 8));
            if (cVar17 != '\0') goto LAB_82ace5d8;
          }
          else if (uVar8 == 0x25) {
            if (((**(uint **)(uVar34 + 4) >> 2 ^ **(uint **)(uVar34 + 4)) & 0x60) == 0)
            goto LAB_82ace5d8;
          }
          else if (uVar8 == 0x6e) {
LAB_82ace5d8:
            cVar35 = '\x01';
            cVar18 = '\x01';
          }
        }
        if ((*(uint *)(param_1 + 0x34) & 0x40) != 0) {
          cVar35 = '\x01';
          cVar18 = '\x01';
        }
        uVar8 = uVar6;
        if ((iVar4 != 0) && (cVar35 != '\0')) {
          if (0x7fe < (uVar33 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xe39);
          }
          uVar33 = uVar33 + 1;
          iVar4 = 0;
          uVar32 = 0;
          uVar8 = uVar25;
          iVar11 = iVar7;
        }
        uVar9 = *(uint *)(uVar34 - 0x14);
        *(uint *)(uVar34 - 0x18) =
             (uint)((uVar33 & 0xffffffff) << 0x14) & 0x78000000 |
             *(uint *)(uVar34 - 0x18) & 0x87ffffff;
        *(uint *)(uVar34 - 0x14) = (uint)((uVar33 & 0xffffffff) << 0x19) | uVar9 & 0x1ffffff;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x20) = iVar12;
        }
        uVar32 = uVar32 + 1;
        if (iVar11 == 0) {
          iVar11 = iVar7;
        }
        iVar7 = iStack0000001c;
        iVar4 = iVar12;
        if (cVar18 != '\0') {
          if (0x7fe < (uVar33 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xe39);
          }
          uVar33 = uVar33 + 1;
          iVar4 = 0;
          uVar32 = 0;
          uVar8 = 0;
          iVar11 = 0;
        }
      }
      uVar34 = *(uint *)(uVar34 - 4);
    } while ((uVar34 & 1) == 0);
  }
  uVar32 = (uVar33 & 0x3fffffff) << 2;
  iVar11 = param_1 + 0x3cc;
  iVar4 = (int)uVar32;
  if (uVar32 < 0x85) {
    uVar8 = *(uint *)(param_1 + 0x45c);
    if ((((ulonglong)*(uint *)(param_1 + 0x458) - (ulonglong)uVar8) + 0x1000 & 0xffffffff) < uVar32)
    {
      iVar12 = (int)(((uVar33 & 0x3fffffff) - 1 & 0xffffffff) << 2);
      puVar15 = *(undefined4 **)(iVar12 + iVar11);
      if (puVar15 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar12 + iVar11) = *puVar15;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar15,0,uVar32);
      }
      uVar8 = fn_82ABDF50(iVar11,uVar32);
    }
    else {
      *(uint *)(param_1 + 0x45c) = uVar8 + iVar4;
    }
  }
  else {
    uVar8 = fn_82ABE8C8(iVar11,uVar32);
  }
  *(uint *)(param_1 + 0x2d4) = uVar8;
  if (uVar32 < 0x85) {
    uVar8 = *(uint *)(param_1 + 0x45c);
    if ((((ulonglong)*(uint *)(param_1 + 0x458) - (ulonglong)uVar8) + 0x1000 & 0xffffffff) < uVar32)
    {
      iVar12 = (int)(((uVar33 & 0x3fffffff) - 1 & 0xffffffff) << 2);
      puVar15 = *(undefined4 **)(iVar12 + iVar11);
      if (puVar15 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar12 + iVar11) = *puVar15;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar15,0,uVar32);
      }
      uVar8 = fn_82ABDF50(iVar11,uVar32);
    }
    else {
      *(uint *)(param_1 + 0x45c) = uVar8 + iVar4;
    }
  }
  else {
    uVar8 = fn_82ABE8C8(iVar11,uVar32);
  }
  *(uint *)(param_1 + 0x2d0) = uVar8;
  if (uVar32 < 0x85) {
    uVar8 = *(uint *)(param_1 + 0x45c);
    if ((((ulonglong)*(uint *)(param_1 + 0x458) - (ulonglong)uVar8) + 0x1000 & 0xffffffff) < uVar32)
    {
      iVar4 = (int)(((uVar33 & 0x3fffffff) - 1 & 0xffffffff) << 2);
      puVar15 = *(undefined4 **)(iVar4 + iVar11);
      if (puVar15 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar4 + iVar11) = *puVar15;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar15,0,uVar32);
      }
      uVar8 = fn_82ABDF50(iVar11,uVar32);
    }
    else {
      *(uint *)(param_1 + 0x45c) = uVar8 + iVar4;
    }
  }
  else {
    uVar8 = fn_82ABE8C8(iVar11,uVar32);
  }
  *(uint *)(param_1 + 0x2d8) = uVar8;
  uVar32 = 0;
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar8 = *puVar31;
    do {
      uVar8 = uVar8 & 0xfffffffe;
      iVar4 = uVar8 - 0x28;
      if (iVar4 == 0) break;
      if (((*(uint *)(uVar8 - 0x20) >> 0x1a & 1) != 0) &&
         (uVar33 = ((ulonglong)(*(uint *)(uVar8 - 0x14) >> 5) |
                   (ulonglong)*(uint *)(uVar8 - 0x18) & 0xfffffffff8000000) >> 0x14 & 0x7ff,
         uVar33 != uVar32)) {
        iVar11 = (int)uVar33 * 4;
        uStack_10c = 0;
        acStack_110[0] = '\0';
        *(int *)(iVar11 + *(int *)(param_1 + 0x2d0) + -4) = iVar4;
        iVar11 = iVar11 + *(int *)(param_1 + 0x2d8);
        iVar4 = fn_82ACAAC8(param_1,iVar4,uVar33,&uStack_10c,uVar30,acStack_110);
        *(int *)(iVar11 + -4) = iVar4 + *(int *)(iVar11 + -4);
        uVar32 = uVar33;
      }
      uVar8 = *(uint *)(uVar8 - 4);
    } while ((uVar8 & 1) == 0);
  }
  for (piVar24 = *(int **)(param_2 + 0x1c); (((uint)piVar24 & 1) == 0 && (piVar24 != (int *)0x0));
      piVar24 = *(int **)(((uint)piVar24 & 0xfffffffe) + 0x28)) {
    uVar8 = piVar24[2];
    if ((uVar8 >> 0x1a & 1) != 0) {
      if ((uVar8 >> 6 & 1) == 0) {
        uVar8 = uVar8 >> 7 & 0x7f;
        if ((uVar8 < 0x20) || (bVar2 = true, 0x52 < uVar8)) {
          bVar2 = false;
        }
        if (!bVar2) goto LAB_82aced74;
      }
      puVar5 = (uint *)(piVar24 + 1);
      bVar2 = true;
      for (puVar28 = (uint *)piVar24[1]; puVar20 = puVar5, puVar28 != (uint *)0x0;
          puVar28 = (uint *)puVar28[2]) {
        uVar8 = puVar28[4];
        if (uVar8 != 0) {
          uVar34 = *puVar28;
          if (((uVar34 & 0x40000000) == 0) || (bVar3 = true, (uVar34 & 0xe000000) != 0)) {
            bVar3 = false;
          }
          if (((bVar3) && ((uVar34 & 0x1ffe000) == 0)) &&
             (uVar32 = ((ulonglong)(*(uint *)(uVar8 + 0x14) >> 5) |
                       (ulonglong)*(uint *)(uVar8 + 0x10) & 0xfffffffff8000000) >> 0x14 & 0x7ff,
             uVar32 != (((ulonglong)((uint)piVar24[5] >> 5) |
                        (ulonglong)(uint)piVar24[4] & 0xfffffffff8000000) >> 0x14 & 0x7ff))) {
            for (piVar16 = *(int **)((int)(uVar32 << 2) + *(int *)(param_1 + 0x2d0) + -4);
                piVar16 != (int *)0x0; piVar16 = (int *)piVar16[8]) {
              for (puVar19 = (uint *)*piVar16; puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[1])
              {
                uVar8 = *puVar19;
                if (((uVar8 & 0x40000000) == 0) || (bVar3 = true, (uVar8 & 0xe000000) != 0)) {
                  bVar3 = false;
                }
                if (((bVar3) && ((uVar8 & 0x1ffe000) == 0xc000)) &&
                   ((((ulonglong)(*(uint *)(puVar19[3] + 0x14) >> 5) |
                     (ulonglong)*(uint *)(puVar19[3] + 0x10) & 0xfffffffff8000000) >> 0x14 & 0x7ff)
                    != uVar32)) {
                  bVar2 = false;
                  goto LAB_82acea50;
                }
              }
            }
          }
        }
      }
LAB_82acea50:
      puVar20 = (uint *)*puVar20;
      if (puVar20 != (uint *)0x0) {
        uVar8 = puVar20[4];
        if (uVar8 == 0) {
LAB_82aceb08:
          puVar20 = puVar20 + 2;
        }
        else {
          uVar34 = *puVar20;
          if (((uVar34 & 0x40000000) == 0) || (bVar3 = true, (uVar34 & 0xe000000) != 0)) {
            bVar3 = false;
          }
          if (((((!bVar3) || (uVar34 = uVar34 >> 0xd & 0xfff, 6 < uVar34)) || (uVar34 == 8)) ||
              ((uVar34 == 5 || (uVar34 == 4)))) ||
             (uVar32 = ((ulonglong)(*(uint *)(uVar8 + 0x14) >> 5) |
                       (ulonglong)*(uint *)(uVar8 + 0x10) & 0xfffffffff8000000) >> 0x14 & 0x7ff,
             uVar32 == (((ulonglong)((uint)piVar24[5] >> 5) |
                        (ulonglong)(uint)piVar24[4] & 0xfffffffff8000000) >> 0x14 & 0x7ff)))
          goto LAB_82aceb08;
          if (uVar34 == 0) {
            if (bVar2) goto LAB_82aceb10;
            goto LAB_82aceb08;
          }
          if (3 < uVar34) {
            if (uVar34 != 6) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            goto LAB_82aceb08;
          }
LAB_82aceb10:
          iVar4 = piVar24[0xb];
          iVar11 = *(int *)(iVar4 + 0xc);
          if ((*(uint *)(iVar11 + 8) >> 0x17 & 1) != 0) {
            iVar4 = fn_82ACA920(param_1,iVar4,iVar11);
            fn_82B894C8(param_1,iVar7,(uint)piVar24 & 0xfffffffc,iVar4);
            iVar12 = *(int *)(iVar4 + 0xc);
            *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 8) | 0x4000000;
            uVar9 = piVar24[5];
            *(uint *)(iVar12 + 0x10) =
                 piVar24[4] & 0x78000000U | *(uint *)(iVar12 + 0x10) & 0x87ffffff;
            *(uint *)(iVar12 + 0x14) = uVar9 & 0xfe000000 | *(uint *)(iVar12 + 0x14) & 0x1ffffff;
            *(int *)(iVar12 + 0x20) = piVar24[8];
            piVar24[8] = iVar12;
            if ((*(uint *)(iVar11 + 8) & 0x3f80) != 0x3700) {
              fn_82ACB660(param_1,iVar11);
            }
          }
          uVar9 = fn_82B841E8(param_1,iVar7,0,(uint)piVar24[2] >> 7 & 0x7f,1,0);
          uVar10 = fn_82AD1978(uVar9,iVar4);
          *(undefined4 *)(uVar9 + 0x2c) = uVar10;
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x1000000;
          for (puVar28 = (uint *)*piVar24; uVar6 = uVar8, puVar28 != (uint *)0x0;
              puVar28 = (uint *)puVar28[1]) {
            if ((*puVar28 & 0xe000000) == 0) {
              fn_82AD1978(uVar9,puVar28);
            }
          }
          while (uVar21 = uVar6, uVar25 = *(uint *)((uVar8 & 0xfffffffe) + 0x24), (uVar25 & 1) == 0)
          {
            uVar25 = uVar25 & 0xfffffffe;
            uVar8 = uVar25 - 0x28;
            if ((uVar8 == 0) ||
               ((uVar6 = uVar21, (*(uint *)(uVar25 - 0x20) >> 0x1a & 1) != 0 &&
                (uVar6 = uVar8,
                (((ulonglong)(*(uint *)(uVar25 - 0x14) >> 5) |
                 (ulonglong)*(uint *)(uVar25 - 0x18) & 0xfffffffff8000000) >> 0x14 & 0x7ff) !=
                uVar32)))) break;
          }
          uVar8 = uVar9 & 0xfffffffe;
          puVar28 = (uint *)((uVar21 & 0xfffffffe) + 0x24);
          *(uint *)(uVar8 + 0x24) = *puVar28;
          *(uint *)(*puVar28 & 0xfffffffe) = uVar8;
          *(uint *)(uVar8 + 0x28) = uVar21 & 0xfffffffe;
          *puVar28 = uVar8 + 0x28;
          *(uint *)(uVar9 + 0x14) = (uint)(uVar32 << 0x19) | *(uint *)(uVar9 + 0x14) & 0x1ffffff;
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x4000000;
          *(uint *)(uVar9 + 0x10) =
               (uint)(uVar32 << 0x14) & 0x78000000 | *(uint *)(uVar9 + 0x10) & 0x87ffffff;
          *(uint *)(uVar21 + 0x20) = uVar9;
          puVar28 = puVar5;
          while (puVar19 = (uint *)*puVar28, puVar20 = puVar5, puVar19 != (uint *)0x0) {
            uVar8 = puVar19[4];
            if (uVar8 != 0) {
              uVar6 = *puVar19;
              if (((uVar6 & 0x40000000) == 0) || (bVar3 = true, (uVar6 & 0xe000000) != 0)) {
                bVar3 = false;
              }
              if (((bVar3) && ((uVar6 >> 0xd & 0xfff) == uVar34)) &&
                 ((((ulonglong)(*(uint *)(uVar8 + 0x14) >> 5) |
                   (ulonglong)*(uint *)(uVar8 + 0x10) & 0xfffffffff8000000) >> 0x14 & 0x7ff) ==
                  uVar32)) {
                puVar26 = (uint *)(puVar19[3] + 4);
                for (puVar20 = (uint *)*puVar26; puVar20 != puVar19; puVar20 = (uint *)puVar20[2]) {
                  puVar26 = puVar20 + 2;
                }
                *puVar26 = puVar19[2];
                puVar19[2] = *(uint *)(uVar9 + 4);
                *(uint **)(uVar9 + 4) = puVar19;
                puVar19[3] = uVar9;
              }
            }
            if ((uint *)*puVar28 == puVar19) {
              puVar28 = puVar19 + 2;
            }
          }
        }
        goto LAB_82acea50;
      }
    }
LAB_82aced74:;}
  fn_82ACB4F0(param_1,iVar7,0);
  uVar8 = *(uint *)(param_2 + 0x1c);
  if ((uVar8 & 1) == 0) {
joined_r0x82acedb4:
    if (uVar8 != 0) {
      if (((*(uint *)(uVar8 + 8) >> 0x1a & 1) != 0) && ((*(uint *)(uVar8 + 8) >> 0x17 & 1) == 0)) {
        piVar24 = (int *)(uVar8 + 4);
        for (puVar28 = *(uint **)(uVar8 + 4); puVar28 != (uint *)0x0; puVar28 = (uint *)puVar28[2])
        {
          uVar34 = puVar28[4];
          if (((uVar34 != 0) && ((*puVar28 & 0xe000000) != 0)) &&
             ((*(uint *)(uVar34 + 8) & 0x3f80) == 0x3700)) goto LAB_82acee14;
        }
      }
      goto LAB_82acee7c;
    }
  }
LAB_82acee98:
  uVar8 = *(uint *)(param_2 + 0x1c);
  if ((uVar8 & 1) == 0) {
    uVar34 = (*puVar31 & 0xfffffffe) - 0x28;
  }
  else {
    uVar34 = 0;
  }
  uVar9 = *(uint *)(uVar34 + 8) >> 7 & 0x7f;
  if (((uVar9 == 0x56) || (uVar9 == 0x57)) ||
     (((uVar9 == 0x59 || ((uVar9 == 0x5a || (uVar9 == 0x54)))) || (bVar2 = false, uVar9 == 0x55))))
  {
    bVar2 = true;
  }
  if ((((bVar2) || (cVar18 = fn_82ABDA10(uVar34), cVar18 != '\0')) && ((uVar8 & 1) == 0)) &&
     (uVar8 != 0)) {
    while (uVar8 != uVar34) {
      cVar18 = fn_82AC6740(uVar8);
      if (cVar18 != '\0') {
        fn_82AD1A40(uVar34,uVar8,param_1);
      }
      uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28);
      if (((uVar8 & 1) != 0) || (uVar8 == 0)) break;
    }
  }
  fn_82ACB458(param_1,iVar7,0);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  puVar5 = (uint *)fn_82ABE250(param_1,8,0x35);
  puVar28 = puVar5 + 1;
  puVar5[1] = (uint)puVar5 | 1;
  *puVar5 = (uint)puVar28 | 1;
  iVar4 = fn_82ACBEF0(param_1);
  if ((puVar5[1] & 1) == 0) {
    uVar8 = *puVar5 & 0xfffffffe;
    iVar11 = uVar8 - 4;
    if ((iVar11 == 0) || (*(uint *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U)) goto LAB_82acefdc;
  }
  else {
LAB_82acefdc:
    iVar11 = fn_82AD6090(puVar5,1);
  }
  iVar12 = *(int *)(iVar11 + 8);
  uVar32 = 0;
  *(int *)(iVar11 + 8) = iVar12 + 1;
  *(int *)((iVar12 + 4) * 4 + iVar11) = iVar4;
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar8 = *puVar31;
    puVar20 = (uint *)0x0;
    do {
      while( true ) {
        puVar26 = (uint *)(uVar8 & 0xfffffffe);
        puVar19 = puVar26 + -10;
        if (puVar19 == (uint *)0x0) goto LAB_82acf130;
        if ((puVar26[-8] >> 0x1a & 1) != 0) {
          uVar33 = ((ulonglong)(puVar26[-5] >> 5) | (ulonglong)puVar26[-6] & 0xfffffffff8000000) >>
                   0x14 & 0x7ff;
          if ((uVar33 != uVar32) &&
             (cVar18 = fn_82ACA718(puVar19), uVar32 = uVar33, cVar18 != '\0')) {
            fn_82ACDAB8(param_1,*(undefined4 *)(iVar4 + 4),puVar19);
          }
          *(uint *)((*puVar26 & 0xfffffffe) + 0x24) = puVar26[-1];
          *(uint *)(puVar26[-1] & 0xfffffffe) = *puVar26;
        }
        if (puVar20 != (uint *)0x0) break;
        if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
          puVar29 = (uint *)((*puVar31 & 0xfffffffe) - 0x28);
        }
        else {
          puVar29 = (uint *)0x0;
        }
        if (puVar19 == puVar29) {
LAB_82acf0c4:
          uVar8 = puVar26[-1];
          puVar20 = puVar19;
          if ((uVar8 & 1) != 0) goto LAB_82acf130;
        }
        else {
          if ((*(uint *)(param_2 + 0x1c) & 1) != 0) goto LAB_82acf130;
          uVar8 = *puVar31;
        }
      }
      uVar8 = puVar20[9];
      if ((uVar8 & 1) == 0) {
        puVar29 = (uint *)((uVar8 & 0xfffffffe) - 0x28);
      }
      else {
        puVar29 = (uint *)0x0;
      }
      if (puVar19 == puVar29) goto LAB_82acf0c4;
    } while ((uVar8 & 1) == 0);
  }
LAB_82acf130:
  fn_82ACB310(param_3);
  fn_82ACCAC0(param_1,iVar7,param_3);
  fn_82ACD5F8(aiStack_f0,iVar7,puVar31,param_3,uVar30,param_1);
  *(uint *)(iVar4 + 0xc) = uStack_b4;
  if (uStack_b4 == 0) {
    uVar8 = *(uint *)(aiStack_f0[0] + 4);
  }
  else {
    uVar8 = *(uint *)((uStack_b4 & 0xfffffffe) + 0x28);
  }
  *(uint *)(iVar4 + 0x10) = -(uint)((uVar8 & 1) == 0) & uVar8;
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iStack_b8 + 0x10);
  iVar11 = fn_82A1F2F8();
LAB_82acf1b0:
  do {
    do {
      while( true ) {
        do {
          if ((((*puVar28 & 1) != 0) || (*puVar28 == 0)) ||
             (uVar8 = fn_82A1F2F8(), iVar11 + 10000U <= uVar8)) {
            uVar8 = *(uint *)(param_1 + 0x318);
            if (uVar8 == 0) {
              uVar8 = 0x20;
            }
            if (uVar8 <= uVar30) {
              if (((*(uint *)(param_1 + 0x34) & 0x600) == 0) &&
                 ((*(uint *)(param_1 + 0x2c) & 0x400000) != 0)) {
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x401;
                fn_82AA6330(param_1);
              }
              if ((*(uint *)(param_1 + 0x34) & 0x40) == 0) {
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40;
                fn_82AA6330(param_1);
              }
              if (*(int *)(param_1 + 0x318) == 0) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0xded);
              }
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdbe);
            }
            uStack_a7 = 0;
            uStack_a6 = 1;
            fn_82ACD8D8(aiStack_f0,iVar4);
            iVar11 = fn_82ACBEF0(param_1);
            *(uint *)(iVar11 + 0xc) = uStack_b4;
            if (uStack_b4 == 0) {
              uVar8 = *(uint *)(aiStack_f0[0] + 4);
            }
            else {
              uVar8 = *(uint *)((uStack_b4 & 0xfffffffe) + 0x28);
            }
            iStack_100 = 0;
            *(uint *)(iVar11 + 0x10) = -(uint)((uVar8 & 1) == 0) & uVar8;
            *(undefined4 *)(iVar11 + 0x14) = *(undefined4 *)(iStack_b8 + 0x10);
            iStack_108 = *(int *)(iVar4 + 4);
            uStack_104 = -(uint)((*(uint *)(iStack_108 + 4) & 1) == 0) & *(uint *)(iStack_108 + 4);
            goto LAB_82acf6cc;
          }
          if ((*puVar28 & 1) == 0) {
            iVar12 = (*puVar5 & 0xfffffffe) - 4;
          }
          else {
            iVar12 = 0;
          }
          piVar24 = *(int **)((*(int *)(iVar12 + 8) + 3) * 4 + iVar12);
          uVar8 = piVar24[1];
          uVar34 = piVar24[2];
          while( true ) {
            uVar9 = -(uint)((*(uint *)(uVar8 + 4) & 1) == 0) & *(uint *)(uVar8 + 4);
            if (uVar34 < *(uint *)(uVar9 + 8)) break;
            uVar8 = uVar9 & 0xfffffffe;
            uVar34 = uVar34 - *(uint *)(uVar9 + 8);
          }
          piVar16 = *(int **)((uVar34 + 4) * 4 + uVar9);
          fn_82ACD8D8(aiStack_f0,piVar24);
        } while (cStack_a8 != '\0');
        if ((((uint)piVar16[4] >> 0x19 & 1) == 0) && (*piVar24 == 0)) break;
        iVar12 = piVar24[2];
        iVar14 = 0;
        piVar24[2] = iVar12 + 1;
        for (uVar8 = *(uint *)(piVar24[1] + 4); ((uVar8 & 1) == 0 && (uVar8 != 0));
            uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 4)) {
          iVar14 = *(int *)(uVar8 + 8) + iVar14;
        }
        if (iVar12 + 1 == iVar14) {
          cVar18 = fn_82ACC088(param_1,piVar24,iVar7);
          if (cVar18 == '\0') {
            cStack_a8 = '\x01';
            uStack_a7 = 1;
          }
          if ((*puVar28 & 1) == 0) {
            puVar31 = (uint *)((*puVar5 & 0xfffffffe) - 4);
          }
          else {
            puVar31 = (uint *)0x0;
          }
          uVar8 = puVar31[2];
          puVar31[2] = (uint)((ulonglong)uVar8 - 1);
          if ((ulonglong)uVar8 - 1 == 0) {
            *(uint *)(puVar31[1] & 0xfffffffe) = *puVar31;
            *(uint *)(*puVar31 & 0xfffffffe) = puVar31[1];
            fn_82AA6648(puVar5,puVar31,((ulonglong)puVar31[3] + 4 & 0x3fffffff) << 2);
          }
        }
        else {
          *piVar24 = 0;
        }
      }
      *piVar24 = 2;
      cVar18 = fn_82ACD6E8(aiStack_f0,piVar16,2);
    } while (cVar18 == '\0');
    iVar12 = fn_82ACBEF0(param_1);
    *(uint *)(iVar12 + 0xc) = uStack_b4;
    if (uStack_b4 == 0) {
      uVar8 = *(uint *)(aiStack_f0[0] + 4);
    }
    else {
      uVar8 = *(uint *)((uStack_b4 & 0xfffffffe) + 0x28);
    }
    uVar34 = 0;
    *(uint *)(iVar12 + 0x10) = -(uint)((uVar8 & 1) == 0) & uVar8;
    *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(iStack_b8 + 0x10);
    for (uVar8 = *(uint *)(piVar24[1] + 4); ((uVar8 & 1) == 0 && (uVar8 != 0));
        uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 4)) {
      uVar34 = *(int *)(uVar8 + 8) + uVar34;
    }
    uVar8 = 0;
    if (uVar34 != 0) {
      do {
        if (uVar8 != piVar24[2]) {
          uVar6 = -(uint)((*(uint *)(piVar24[1] + 4) & 1) == 0) & *(uint *)(piVar24[1] + 4);
          uVar9 = *(uint *)(uVar6 + 8);
          uVar25 = uVar8;
          if (uVar9 <= uVar8) {
            do {
              uVar25 = uVar25 - uVar9;
              uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4);
              uVar6 = -(uint)((uVar6 & 1) == 0) & uVar6;
              uVar9 = *(uint *)(uVar6 + 8);
            } while (uVar9 <= uVar25);
          }
          iVar14 = *(int *)((uVar25 + 4) * 4 + uVar6);
          if ((*(uint *)(iVar14 + 0x10) >> 0x19 & 1) == 0) {
            puVar31 = *(uint **)(iVar12 + 4);
            if ((puVar31[1] & 1) == 0) {
              uVar9 = *puVar31 & 0xfffffffe;
              iVar13 = uVar9 - 4;
              if ((iVar13 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U))
              goto LAB_82acf3d0;
            }
            else {
LAB_82acf3d0:
              iVar13 = fn_82AD6090(puVar31,1);
            }
            iVar1 = *(int *)(iVar13 + 8);
            *(int *)(iVar13 + 8) = iVar1 + 1;
            *(int *)((iVar1 + 4) * 4 + iVar13) = iVar14;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar34);
    }
    do {
      for (iVar14 = *piVar16; iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
        iVar13 = *(int *)(iVar14 + 0xc);
        if (((*(uint *)(iVar13 + 8) >> 0x1a & 1) != 0) &&
           ((*(uint *)(iVar13 + 0x10) >> 0x19 & 1) == 0)) {
          uVar10 = *(undefined4 *)
                    ((*(uint *)(iVar13 + 0x10) >> 0x14 & 0x780 | *(uint *)(iVar13 + 0x14) >> 0x19) *
                     4 + *(int *)(param_1 + 0x2d0) + -4);
          cVar18 = fn_82ACA718(uVar10);
          if (cVar18 != '\0') {
            fn_82ACDAB8(param_1,*(undefined4 *)(iVar12 + 4),uVar10);
          }
        }
      }
      piVar16 = (int *)piVar16[8];
    } while (piVar16 != (int *)0x0);
    uVar8 = *(uint *)(*(int *)(iVar12 + 4) + 4);
    if (((uVar8 & 1) == 0) && (uVar8 != 0)) {
      cVar18 = fn_82ACC188(param_1,iVar12);
      if (cVar18 == '\0') {
        if ((*puVar28 & 1) == 0) {
          uVar8 = *puVar5 & 0xfffffffe;
          iVar14 = uVar8 - 4;
          if ((iVar14 == 0) || (*(uint *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U)) goto LAB_82acf520;
        }
        else {
LAB_82acf520:
          iVar14 = fn_82AD6090(puVar5,1);
        }
        iVar13 = *(int *)(iVar14 + 8);
        *(int *)(iVar14 + 8) = iVar13 + 1;
        *(int *)((iVar13 + 4) * 4 + iVar14) = iVar12;
      }
      else {
        fn_82ACBF60(param_1);
      }
      goto LAB_82acf1b0;
    }
    fn_82ACBF60(param_1,iVar12);
    cVar18 = fn_82ACD9F0(aiStack_f0);
  } while (cVar18 == '\0');
  uVar36 = 1;
LAB_82acf4b8:
  fn_82ACB4F0(param_1,iVar7,1);
  return uVar36;
LAB_82ace1a8:
  iVar4 = *(int *)(iVar4 + 8);
  goto LAB_82ace158;
LAB_82acee14:
  while (iVar4 = *piVar24, iVar4 != 0) {
    uVar9 = *(uint *)(iVar4 + 0x10);
    if ((((uVar9 != 0) && (cVar18 = fn_82ABE190(iVar4), cVar18 != '\0')) && (uVar9 != uVar34)) &&
       (cVar18 = fn_82ACB0F8(uVar9,uVar34), cVar18 != '\0')) {
      fn_82AD1A40(uVar34,uVar9,param_1);
    }
    if (*piVar24 == iVar4) {
      piVar24 = (int *)(iVar4 + 8);
    }
  }
LAB_82acee7c:
  uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28);
  if ((uVar8 & 1) != 0) goto LAB_82acee98;
  goto joined_r0x82acedb4;
LAB_82acf6cc:
  if ((uStack_104 == 0) || (bVar2 = false, iStack_100 == *(int *)(uStack_104 + 8))) {
    bVar2 = true;
  }
  if (bVar2) goto LAB_82acf760;
  puVar15 = (undefined4 *)fn_82ACB180(&iStack_108);
  puVar31 = *(uint **)(iVar11 + 4);
  uVar10 = *puVar15;
  if ((puVar31[1] & 1) == 0) {
    uVar8 = *puVar31 & 0xfffffffe;
    iVar4 = uVar8 - 4;
    if ((iVar4 == 0) || (*(uint *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U)) goto LAB_82acf734;
  }
  else {
LAB_82acf734:
    iVar4 = fn_82AD6090(puVar31,1);
  }
  iVar12 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar12 + 1;
  *(undefined4 *)((iVar12 + 4) * 4 + iVar4) = uVar10;
  goto LAB_82acf6cc;
LAB_82acf760:
  while( true ) {
    iVar4 = *(int *)(iVar11 + 4);
    if (((*(uint *)(iVar4 + 4) & 1) != 0) || (*(uint *)(iVar4 + 4) == 0)) break;
    iStack_100 = 0;
    uStack_104 = -(uint)((*(uint *)(iVar4 + 4) & 1) == 0) & *(uint *)(iVar4 + 4);
    piVar24 = (int *)0x0;
    iStack_108 = iVar4;
LAB_82acf7a0:
    if ((uStack_104 == 0) || (bVar2 = false, iStack_100 == *(int *)(uStack_104 + 8))) {
      bVar2 = true;
    }
    if (!bVar2) {
      piVar16 = (int *)fn_82ACB180(&iStack_108);
      piVar16 = (int *)*piVar16;
      if ((piVar24 != (int *)0x0) && ((piVar24[5] & 0x1fffU) <= (piVar16[5] & 0x1fffU)))
      goto code_r0x82acf7f8;
      goto LAB_82acf824;
    }
    fn_82ACB930(iVar4,piVar24);
    cVar18 = fn_82ACD6E8(aiStack_f0,piVar24,1);
    if (cVar18 == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    for (; piVar24 != (int *)0x0; piVar24 = (int *)piVar24[8]) {
      for (iVar4 = *piVar24; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        iVar12 = *(int *)(iVar4 + 0xc);
        if (((*(uint *)(iVar12 + 8) >> 0x1a & 1) != 0) &&
           ((*(uint *)(iVar12 + 0x10) >> 0x19 & 1) == 0)) {
          uVar10 = *(undefined4 *)
                    ((*(uint *)(iVar12 + 0x10) >> 0x14 & 0x780 | *(uint *)(iVar12 + 0x14) >> 0x19) *
                     4 + *(int *)(param_1 + 0x2d0) + -4);
          cVar18 = fn_82ACA718(uVar10);
          if (cVar18 != '\0') {
            puVar31 = *(uint **)(iVar11 + 4);
            cVar18 = fn_82ACB8B8(puVar31,uVar10);
            if (cVar18 == '\0') {
              if ((puVar31[1] & 1) == 0) {
                uVar8 = *puVar31 & 0xfffffffe;
                iVar12 = uVar8 - 4;
                if ((iVar12 == 0) || (*(uint *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U))
                goto LAB_82acf8fc;
              }
              else {
LAB_82acf8fc:
                iVar12 = fn_82AD6090(puVar31,1);
              }
              iVar14 = *(int *)(iVar12 + 8);
              *(int *)(iVar12 + 8) = iVar14 + 1;
              *(undefined4 *)((iVar14 + 4) * 4 + iVar12) = uVar10;
            }
          }
        }
      }
    }
  }
  cVar18 = fn_82ACD9F0(aiStack_f0);
  if (cVar18 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar36 = 0;
  goto LAB_82acf4b8;
code_r0x82acf7f8:
  if ((piVar16[5] & 0x1fffU) == (piVar24[5] & 0x1fffU)) {
    uVar8 = (uint)piVar16[2] >> 7 & 0x7f;
    if ((uVar8 < 0x20) || (bVar2 = true, 0x52 < uVar8)) {
      bVar2 = false;
    }
    if (bVar2) {
LAB_82acf824:
      piVar24 = piVar16;
    }
  }
  goto LAB_82acf7a0;
}

