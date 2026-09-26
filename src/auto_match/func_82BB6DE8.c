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
extern unsigned int *auStack_c0;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA03B8();
extern int fn_82BAF3D8();
extern int fn_82BB5E00();
extern int fn_82BB6C20();
extern int fn_82BBFD48();
extern int fn_82BBFDF0();
extern int fn_82BBFE50();
extern int fn_82BC0088();
extern int fn_82BC0340();
extern int fn_82BC0400();
extern int fn_82BC04C0();
extern int fn_82BC05A8();
extern int fn_82BD3228();
extern int fn_82BD3260();
extern int fn_82BD32C0();
extern int fn_82BD32F8();
extern int fn_82BD3338();
extern unsigned int iStack_b8;
extern unsigned int lbl_820E0214;
extern unsigned int lbl_820E7F9C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_e4;


void fn_82BB6DE8(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar13;
  int iVar3;
  undefined1 uVar14;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  char *pcVar23;
  double dVar24;
  uint uStack_e4;
  undefined1 auStack_c0 [8];
  int iStack_b8;
  
  bVar2 = false;
  uVar15 = *(uint *)(*param_1 + 0x858);
  uVar21 = 0;
  param_1[4] = param_2;
  uStack_e4 = 0;
  uVar15 = -(uint)((uVar15 >> 9 & 1) != 0) & 0x7fffffff;
  fn_82BBFDF0(auStack_c0);
  piVar6 = *(int **)(param_1[4] + 0x1c);
  if (piVar6[2] != 0) {
    dVar24 = (double)lbl_821AAD20;
    do {
      if ((piVar6[0x39] & 1U) != 0) {
        piVar6[0x39] = piVar6[0x39] & 0xffffefff;
        cVar13 = (**(code **)(*piVar6 + 0x24))(piVar6);
        if ((cVar13 == '\0') && (cVar13 = (**(code **)(*piVar6 + 0x28))(piVar6), cVar13 == '\0')) {
          iVar3 = (**(code **)(*piVar6 + 0x2c))(piVar6);
          if (iVar3 == 0) {
            cVar13 = fn_82BD3228(piVar6);
            if (((cVar13 != '\0') || (cVar13 = fn_82BD32F8(piVar6), cVar13 != '\0')) ||
               (cVar13 = fn_82BD32C0(piVar6), cVar13 != '\0')) {
              bVar2 = true;
            }
            piVar6[0xdf] = (int)uVar21;
            uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
            puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x48);
            puVar19 = puVar5 + 1;
            *puVar5 = uVar9;
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = (undefined4 *)0x0;
            }
            else {
              puVar5[5] = (float)dVar24;
              puVar5[0xb] = piVar6;
              puVar5[2] = 0;
              puVar5[3] = 0;
              *puVar19 = &lbl_820E0214;
              puVar5[8] = 0xffffffff;
              puVar5[9] = 0;
              puVar5[10] = 0;
              puVar5[0xc] = (int)uVar21;
              puVar5[0xd] = 0;
              puVar5[0xe] = 0;
              *(undefined1 *)(puVar5 + 0xf) = 0;
              puVar5[0x10] = 0;
              puVar5[0x11] = 0;
              puVar5[4] = 0;
              puVar5[6] = 0;
              puVar5[7] = 0;
            }
            uVar14 = fn_82BB5E00(piVar6);
            *(undefined1 *)(puVar19 + 0xe) = uVar14;
            uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
            puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x14);
            puVar10 = puVar5 + 1;
            *puVar5 = uVar9;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              fn_82BA03B8(puVar10,*(undefined4 *)(*param_1 + 0x5b0));
            }
            puVar19[0xd] = puVar10;
            uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
            puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x14);
            puVar10 = puVar5 + 1;
            *puVar5 = uVar9;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              fn_82BA03B8(puVar10,*(undefined4 *)(*param_1 + 0x5b0));
            }
            puVar19[0xc] = puVar10;
            lVar17 = 1;
            if (0 < piVar6[5]) {
              piVar8 = piVar6 + 0x3b;
              do {
                pcVar23 = "Assertion failed: %s (%s:%u)";
                if (*piVar8 == 0) {
                  fn_82AB15D0(0,pcVar23,"inst->GetParm(j)",
                                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                    ,0x389);
                }
                piVar11 = (int *)*piVar8;
                uVar18 = (**(code **)(*piVar11 + 0x2c))(piVar11);
                if (((uVar18 & 0xffffffff) == 0) && (piVar11[0xed] == param_1[4])) {
                  if ((int)uVar21 <= piVar11[0xdf]) {
                    fn_82AB15D0(uVar18,pcVar23,0xffffffff820e04f8,
                                      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                      ,0x392);
                  }
                  if ((uint)piVar11[0xdf] < *(uint *)(param_1[6] + 4)) {
                    piVar12 = (int *)(*(int *)(param_1[6] + 8) + piVar11[0xdf] * 4);
                  }
                  else {
                    piVar12 = (int *)fn_82BC0088();
                  }
                  iVar3 = *piVar12;
                  if (*(int **)(iVar3 + 0x28) != piVar11) {
                    fn_82AB15D0(0,pcVar23,0xffffffff820e051c,
                                      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                      ,0x394);
                  }
                }
                else {
                  iVar3 = fn_82BB6C20(param_1,piVar11);
                }
                uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
                puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
                *puVar5 = uVar9;
                puVar5[1] = iVar3;
                puVar5[2] = puVar19;
                puVar5[3] = 0;
                uVar9 = fn_82BD3338(piVar11,piVar6,0,lVar17,0);
                puVar5[4] = uVar9;
                cVar13 = (**(code **)(*piVar6 + 0x34))(piVar6);
                iVar16 = (int)lVar17;
                if ((cVar13 == '\0') &&
                   (iVar4 = (**(code **)(*piVar6 + 4))(piVar6), iVar16 <= iVar4)) {
                  cVar13 = (**(code **)(*piVar11 + 0x48))(piVar11);
                  piVar12 = piVar11;
                  if (cVar13 != '\0') {
                    piVar12 = (int *)piVar11[0x3b];
                  }
                  uVar14 = fn_82BD3260(piVar12);
                  *(undefined1 *)(puVar5 + 5) = uVar14;
                }
                else {
                  *(undefined1 *)(puVar5 + 5) = 0;
                }
                puVar10 = (undefined4 *)
                          fn_82BC0088(*(int *)(iVar3 + 0x30),
                                            *(undefined4 *)(*(int *)(iVar3 + 0x30) + 4));
                *puVar10 = puVar5 + 1;
                puVar10 = (undefined4 *)
                          fn_82BC0088(puVar19[0xd],*(undefined4 *)(puVar19[0xd] + 4));
                *puVar10 = puVar5 + 1;
                cVar13 = (**(code **)(*piVar6 + 0x48))(piVar6);
                if (((cVar13 != '\0') && (((uint)piVar6[0x39] >> 9 & 1) != 0)) &&
                   (iVar16 == piVar6[5])) {
                  if (iVar16 < 2) {
                    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e0538,
                                      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                      ,0x3b0);
                  }
                  iVar16 = piVar6[0x3b];
                  if ((int)uVar21 <= *(int *)(iVar16 + 0x37c)) {
                    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e0540,
                                      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                      ,0x3b3);
                  }
                  if (*(uint *)(iVar16 + 0x37c) < *(uint *)(param_1[6] + 4)) {
                    piVar12 = (int *)(*(int *)(param_1[6] + 8) + *(uint *)(iVar16 + 0x37c) * 4);
                  }
                  else {
                    piVar12 = (int *)fn_82BC0088();
                  }
                  iVar4 = *piVar12;
                  if (*(int *)(iVar4 + 0x28) != iVar16) {
                    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e0564,
                                      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                      ,0x3b5);
                  }
                  uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
                  puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
                  *puVar5 = uVar9;
                  puVar5[1] = iVar3;
                  puVar5[2] = iVar4;
                  puVar5[3] = 4;
                  uVar9 = fn_82BD3338(piVar11,iVar16,0,0,4);
                  puVar5[4] = uVar9;
                  puVar10 = (undefined4 *)
                            fn_82BC0088(*(int *)(iVar3 + 0x30),
                                              *(undefined4 *)(*(int *)(iVar3 + 0x30) + 4));
                  *puVar10 = puVar5 + 1;
                  puVar10 = (undefined4 *)
                            fn_82BC0088(*(int *)(iVar4 + 0x34),
                                              *(undefined4 *)(*(int *)(iVar4 + 0x34) + 4));
                  *puVar10 = puVar5 + 1;
                  uVar21 = (ulonglong)uStack_e4;
                }
                lVar17 = lVar17 + 1;
                piVar8 = piVar8 + 1;
              } while ((int)lVar17 <= piVar6[5]);
            }
            cVar13 = (**(code **)(*piVar6 + 0x38))(piVar6);
            if (cVar13 != '\0') {
              fn_82BBFE50(auStack_c0,puVar19);
            }
            if ((uint)uVar21 == uVar15) {
              uVar21 = uVar21 - 1;
              if (-1 < (longlong)uVar21) {
                lVar17 = (uVar21 & 0x3fffffff) << 2;
                do {
                  iVar3 = param_1[6];
                  if ((uVar21 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 4)) {
                    piVar8 = (int *)(*(int *)(iVar3 + 8) + (int)lVar17);
                  }
                  else {
                    piVar8 = (int *)fn_82BC0088(iVar3,uVar21);
                  }
                  iVar3 = *piVar8;
                  iVar16 = *(int *)(iVar3 + 0x28);
                  if ((*(uint *)(iVar16 + 0xe4) >> 1 & 1) == 0) {
                    uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
                    puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
                    *puVar5 = uVar9;
                    puVar5[1] = iVar3;
                    puVar5[2] = puVar19;
                    puVar5[3] = 1;
                    uVar9 = fn_82BD3338(iVar16,piVar6,0,0,1);
                    puVar5[4] = uVar9;
                    *(undefined1 *)(puVar5 + 5) = 0;
                    puVar10 = (undefined4 *)
                              fn_82BC0088(*(int *)(iVar3 + 0x30),
                                                *(undefined4 *)(*(int *)(iVar3 + 0x30) + 4));
                    *puVar10 = puVar5 + 1;
                    puVar10 = (undefined4 *)
                              fn_82BC0088(puVar19[0xd],*(undefined4 *)(puVar19[0xd] + 4));
                    *puVar10 = puVar5 + 1;
                  }
                  uVar21 = uVar21 - 1;
                  lVar17 = lVar17 + -4;
                } while (-1 < (longlong)uVar21);
              }
            }
            else if ((int)uVar15 < (int)(uint)uVar21) {
              if (uStack_e4 - 1 < *(uint *)(param_1[6] + 4)) {
                piVar8 = (int *)((uStack_e4 - 1) * 4 + *(int *)(param_1[6] + 8));
              }
              else {
                piVar8 = (int *)fn_82BC0088();
              }
              iVar3 = *piVar8;
              piVar8 = *(int **)(iVar3 + 0x28);
              cVar13 = (**(code **)(*piVar8 + 0x38))(piVar8);
              if (cVar13 == '\0') {
                uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
                puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
                *puVar5 = uVar9;
                puVar5[1] = iVar3;
                puVar5[2] = puVar19;
                puVar5[3] = 1;
                uVar9 = fn_82BD3338(piVar8,piVar6,0,0,1);
                puVar5[4] = uVar9;
                *(undefined1 *)(puVar5 + 5) = 0;
                puVar10 = (undefined4 *)
                          fn_82BC0088(*(int *)(iVar3 + 0x30),
                                            *(undefined4 *)(*(int *)(iVar3 + 0x30) + 4));
                *puVar10 = puVar5 + 1;
                puVar10 = (undefined4 *)
                          fn_82BC0088(puVar19[0xd],*(undefined4 *)(puVar19[0xd] + 4));
                *puVar10 = puVar5 + 1;
              }
            }
            puVar5 = (undefined4 *)fn_82BC0088(param_1[6],*(undefined4 *)(param_1[6] + 4));
            uStack_e4 = uStack_e4 + 1;
            *puVar5 = puVar19;
            uVar21 = (ulonglong)uStack_e4;
          }
          else {
            cVar13 = fn_82BB5E00();
            if (cVar13 != '\0') {
              fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","!inst->DefIsLocalTemp()",
                                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                ,0x372);
            }
            if (((piVar6[4] == 0) || (((uint)piVar6[0x39] >> 1 & 1) != 0)) ||
               (bVar1 = true, (&lbl_820E7F9C)[piVar6[0x14] * 0xc] == '\0')) {
              bVar1 = false;
            }
            if ((bVar1) && (((uint)piVar6[0x39] >> 6 & 1) == 0)) {
              iVar3 = piVar6[0x14];
              iVar16 = *(int *)(*param_1 + 0x5f4) + 1;
              *(int *)(*param_1 + 0x5f4) = iVar16;
              piVar6[0xe] = iVar16;
              piVar6[0x14] = iVar3;
            }
          }
        }
      }
      piVar6 = (int *)piVar6[2];
    } while (piVar6[2] != 0);
  }
  if (uVar21 != *(uint *)(param_1[6] + 4)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e04d4,
                      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                      ,0x3f2);
  }
  if (bVar2) {
    uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
    puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x1c);
    puVar19 = puVar5 + 1;
    *puVar5 = uVar9;
    if (puVar19 == (undefined4 *)0x0) {
      puVar19 = (undefined4 *)0x0;
    }
    else {
      fn_82BAF3D8(puVar19,*(undefined4 *)(*param_1 + 0x5b0),0xffffffff82bb5470,0xffffffff82bb54a0,
                    0x10);
    }
    uVar18 = uVar21 - 1;
    iVar3 = 0;
    if (-1 < (longlong)uVar18) {
      lVar17 = (uVar18 & 0x3fffffff) << 2;
      iVar16 = 0;
      while( true ) {
        iVar4 = param_1[6];
        if ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(iVar4 + 4)) {
          piVar6 = (int *)(*(int *)(iVar4 + 8) + (int)lVar17);
        }
        else {
          piVar6 = (int *)fn_82BC0088(iVar4,uVar18);
        }
        iVar4 = *piVar6;
        piVar6 = *(int **)(iVar4 + 0x28);
        cVar13 = fn_82BD3228(piVar6);
        if (cVar13 != '\0') {
          iVar7 = fn_82BC0340(puVar19,piVar6);
          if (iVar7 != 0) {
            if ((int)uVar21 <= *(int *)(iVar7 + 0x37c)) {
              fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e0494,
                                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                ,0x424);
            }
            if (*(uint *)(iVar7 + 0x37c) < *(uint *)(param_1[6] + 4)) {
              piVar8 = (int *)(*(int *)(param_1[6] + 8) + *(uint *)(iVar7 + 0x37c) * 4);
            }
            else {
              piVar8 = (int *)fn_82BC0088();
            }
            iVar22 = *piVar8;
            if (*(int *)(iVar22 + 0x28) != iVar7) {
              fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e04b8,
                                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                ,0x426);
            }
            uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
            puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
            *puVar5 = uVar9;
            puVar5[1] = iVar4;
            puVar5[2] = iVar22;
            puVar5[3] = 1;
            uVar9 = fn_82BD3338(piVar6,iVar7,0,0,1);
            puVar5[4] = uVar9;
            *(undefined1 *)(puVar5 + 5) = 0;
            puVar10 = (undefined4 *)
                      fn_82BC0088(*(int *)(iVar4 + 0x30),
                                        *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
            *puVar10 = puVar5 + 1;
            puVar10 = (undefined4 *)
                      fn_82BC0088(*(int *)(iVar22 + 0x34),
                                        *(undefined4 *)(*(int *)(iVar22 + 0x34) + 4));
            *puVar10 = puVar5 + 1;
            fn_82BC04C0(puVar19,iVar7);
          }
          fn_82BC0400(puVar19,piVar6);
        }
        cVar13 = fn_82BD32C0(piVar6);
        iVar7 = iVar3;
        if ((cVar13 != '\0') && (iVar7 = iVar4, iVar3 != 0)) {
          uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
          puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
          *puVar5 = uVar9;
          puVar5[1] = iVar4;
          puVar5[2] = iVar3;
          puVar5[3] = 3;
          uVar9 = fn_82BD3338(piVar6,*(undefined4 *)(iVar3 + 0x28),0,0,3);
          puVar5[4] = uVar9;
          *(undefined1 *)(puVar5 + 5) = 0;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar4 + 0x30),
                                      *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
          *puVar10 = puVar5 + 1;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar3 + 0x34),
                                      *(undefined4 *)(*(int *)(iVar3 + 0x34) + 4));
          *puVar10 = puVar5 + 1;
        }
        iVar3 = iVar7;
        cVar13 = fn_82BD32F8(piVar6);
        iVar7 = iVar16;
        if ((cVar13 != '\0') && (iVar7 = iVar4, iVar16 != 0)) {
          uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
          puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
          *puVar5 = uVar9;
          puVar5[1] = iVar4;
          puVar5[2] = iVar16;
          puVar5[3] = 3;
          uVar9 = fn_82BD3338(piVar6,*(undefined4 *)(iVar16 + 0x28),0,0,3);
          puVar5[4] = uVar9;
          *(undefined1 *)(puVar5 + 5) = 0;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar4 + 0x30),
                                      *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
          *puVar10 = puVar5 + 1;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar16 + 0x34),
                                      *(undefined4 *)(*(int *)(iVar16 + 0x34) + 4));
          *puVar10 = puVar5 + 1;
        }
        lVar20 = 1;
        if (0 < piVar6[5]) {
          piVar8 = piVar6 + 0x3b;
          do {
            cVar13 = fn_82BD3228(*piVar8);
            if (((cVar13 != '\0') &&
                (piVar11 = (int *)fn_82BC0340(puVar19,*piVar8), piVar11 != (int *)0x0)) &&
               (piVar11 != piVar6)) {
              if ((int)uStack_e4 <= piVar11[0xdf]) {
                fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e0494,
                                  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                  ,0x45c);
              }
              if ((uint)piVar11[0xdf] < *(uint *)(param_1[6] + 4)) {
                piVar12 = (int *)(*(int *)(param_1[6] + 8) + piVar11[0xdf] * 4);
              }
              else {
                piVar12 = (int *)fn_82BC0088();
              }
              iVar16 = *piVar12;
              if (*(int **)(iVar16 + 0x28) != piVar11) {
                fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",0xffffffff820e04b8,
                                  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
                                  ,0x45e);
              }
              uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
              puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
              *puVar5 = uVar9;
              puVar5[1] = iVar4;
              puVar5[2] = iVar16;
              puVar5[3] = 2;
              uVar9 = fn_82BD3338(piVar6,piVar11,lVar20,0,2);
              puVar5[4] = uVar9;
              *(undefined1 *)(puVar5 + 5) = 0;
              puVar10 = (undefined4 *)
                        fn_82BC0088(*(int *)(iVar4 + 0x30),
                                          *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
              *puVar10 = puVar5 + 1;
              puVar10 = (undefined4 *)
                        fn_82BC0088(*(int *)(iVar16 + 0x34),
                                          *(undefined4 *)(*(int *)(iVar16 + 0x34) + 4));
              *puVar10 = puVar5 + 1;
            }
            lVar20 = lVar20 + 1;
            piVar8 = piVar8 + 1;
          } while ((int)lVar20 <= piVar6[5]);
        }
        cVar13 = (**(code **)(*piVar6 + 0x18))(piVar6);
        if ((cVar13 != '\0') && (iVar7 != 0)) {
          uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
          puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
          *puVar5 = uVar9;
          puVar5[3] = 3;
          puVar5[1] = iVar4;
          puVar5[2] = iVar7;
          uVar9 = fn_82BD3338(piVar6,*(undefined4 *)(iVar7 + 0x28),0,0,3);
          puVar5[4] = uVar9;
          *(undefined1 *)(puVar5 + 5) = 0;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar4 + 0x30),
                                      *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
          *puVar10 = puVar5 + 1;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar7 + 0x34),
                                      *(undefined4 *)(*(int *)(iVar7 + 0x34) + 4));
          *puVar10 = puVar5 + 1;
        }
        cVar13 = (**(code **)(*piVar6 + 0x14))(piVar6);
        if ((cVar13 != '\0') && (iVar3 != 0)) {
          uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
          puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
          *puVar5 = uVar9;
          puVar5[1] = iVar4;
          puVar5[2] = iVar3;
          puVar5[3] = 3;
          uVar9 = fn_82BD3338(piVar6,*(undefined4 *)(iVar3 + 0x28),0,0,3);
          puVar5[4] = uVar9;
          *(undefined1 *)(puVar5 + 5) = 0;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar4 + 0x30),
                                      *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
          *puVar10 = puVar5 + 1;
          puVar10 = (undefined4 *)
                    fn_82BC0088(*(int *)(iVar3 + 0x34),
                                      *(undefined4 *)(*(int *)(iVar3 + 0x34) + 4));
          *puVar10 = puVar5 + 1;
        }
        cVar13 = fn_82BD3260(piVar6);
        if ((cVar13 != '\0') && (cVar13 = fn_82BBFD48(auStack_c0), cVar13 == '\0')) {
          piVar8 = (int *)(iStack_b8 + 8);
          iVar16 = *piVar8;
          iVar22 = iStack_b8;
          while (iVar16 != 0) {
            uVar9 = *(undefined4 *)(*param_1 + 0x5b0);
            puVar5 = (undefined4 *)fn_82B7BD28(uVar9,0x18);
            *puVar5 = uVar9;
            puVar5[1] = iVar4;
            puVar5[2] = iVar22;
            puVar5[3] = 3;
            uVar9 = fn_82BD3338(piVar6,*(undefined4 *)(iVar22 + 0x28),0,0,3);
            puVar5[4] = uVar9;
            *(undefined1 *)(puVar5 + 5) = 0;
            puVar10 = (undefined4 *)
                      fn_82BC0088(*(int *)(iVar4 + 0x30),
                                        *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4));
            *puVar10 = puVar5 + 1;
            puVar10 = (undefined4 *)
                      fn_82BC0088(*(int *)(iVar22 + 0x34),
                                        *(undefined4 *)(*(int *)(iVar22 + 0x34) + 4));
            *puVar10 = puVar5 + 1;
            iVar22 = *piVar8;
            piVar8 = (int *)(iVar22 + 8);
            iVar16 = *(int *)(iVar22 + 8);
          }
        }
        uVar18 = uVar18 - 1;
        lVar17 = lVar17 + -4;
        if ((longlong)uVar18 < 0) break;
        uVar21 = (ulonglong)uStack_e4;
        iVar16 = iVar7;
      }
    }
    if (puVar19 != (undefined4 *)0x0) {
      fn_82BC05A8(puVar19);
      fn_82B7BEB0(puVar19[-1],puVar19 + -1);
    }
  }
  return;
}

