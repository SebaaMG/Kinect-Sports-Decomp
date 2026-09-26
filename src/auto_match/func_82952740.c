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
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_8a0;
extern unsigned int *auStack_8b0;
extern int fn_82952048();
extern int fn_82952090();
extern int fn_829520D8();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82963FA8();
extern int fn_829640A0();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82964868();
extern int fn_82975B00();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;
extern unsigned int uStack_8b4;
extern unsigned int uStack_8b8;
extern unsigned int uStack_8bc;
extern unsigned int uStack_8c0;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82952740(int param_1,int param_2,ulonglong param_3,uint *param_4,int param_5,
                      int param_6,uint *param_7,ulonglong param_8)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puStack0000002c;
  uint in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  uint uStack_8c0;
  uint uStack_8bc;
  uint uStack_8b8;
  uint uStack_8b4;
  uint auStack_8b0 [4];
  undefined1 auStack_8a0 [512];
  int aiStack_6a0 [128];
  int aiStack_4a0 [128];
  undefined1 auStack_2a0 [672];
  
  uVar22 = *param_4;
  uVar16 = lbl_82005710;
  puStack0000002c = param_4;
  if ((ulonglong)uVar22 < (param_8 & 0xffffffff)) {
    do {
      puVar3 = *(uint **)(uVar22 * 4 + *(int *)(param_1 + 0x18));
      uVar21 = *puVar3;
      uVar15 = (ulonglong)puVar3[3];
      uVar24 = uVar21 & 0xfff00000;
      uVar19 = (ulonglong)uVar21 & 0xfffff;
      if (uVar15 == 0) {
        uVar16 = 0x12df;
        uVar17 = 0xffffffff82037998;
        goto LAB_82953314;
      }
      piVar1 = (int *)puVar3[4];
      iVar12 = *(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14));
      uVar7 = (uint)uVar19;
      if (*(int *)(iVar12 + 0x14) == param_2) {
        if ((in_stack_0000005c != 0) && (uVar24 != 0x11200000)) goto LAB_829532f8;
        uVar23 = 0;
        if (in_stack_00000054 != 0) {
          uVar23 = -(uint)(param_3 == *(uint *)(iVar12 + 0x18)) & in_stack_00000054;
        }
        iVar10 = in_stack_0000005c;
        uVar20 = in_stack_00000054;
        iVar9 = fn_82952048(uVar24);
        if (iVar9 == 0) {
          iVar9 = fn_82952090(uVar24);
          if (iVar9 == 0) {
            if ((uVar24 != 0x11100000) && (uVar24 != 0x74100000)) {
              if (uVar24 == 0x11200000) {
                if ((uVar23 != 0) && (iVar10 != 0)) {
                  if ((uVar21 & 0xfffff) != 0) {
                    iVar12 = 0;
                    do {
                      piVar1 = (int *)(iVar12 + puVar3[4]);
                      iVar12 = iVar12 + 4;
                      iVar10 = *(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14));
                      *(undefined4 *)(iVar10 + 0x34) = in_stack_0000006c;
                      *(undefined4 *)(iVar10 + 0x30) = in_stack_00000064;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
LAB_82952d00:
                  lVar8 = fn_82964868(param_1,puVar3);
                  if ((int)lVar8 < 0) {
                    return lVar8;
                  }
                }
              }
              else if (uVar24 == 0x10000000) {
                if ((uVar20 != 0) && ((ulonglong)*(uint *)(iVar12 + 0x18) == (param_3 & 0xffffffff))
                   ) {
                  uVar19 = 0;
                  if ((uVar15 & 0xffffffff) != 0) {
                    iVar12 = 0;
                    do {
                      iVar10 = *(int *)(*(int *)(iVar12 + puVar3[2]) * 4 + *(int *)(param_1 + 0x14))
                      ;
                      iVar9 = *(int *)(*(int *)(iVar12 + (int)piVar1) * 4 + *(int *)(param_1 + 0x14)
                                      );
                      if (((((*(int *)(iVar9 + 4) != *(int *)(iVar10 + 4)) ||
                            (*(int *)(iVar9 + 8) != *(int *)(iVar10 + 8))) ||
                           (*(int *)(iVar9 + 0xc) != *(int *)(iVar10 + 0xc))) ||
                          ((*(int *)(iVar9 + 0x10) != *(int *)(iVar10 + 0x10) ||
                           (*(int *)(iVar9 + 0x3c) != *(int *)(iVar10 + 0x3c))))) ||
                         (((*(uint *)(param_1 + 0xcc) & 4) != 0 && (*(int *)(iVar9 + 0x60) != 0))))
                      break;
                      uVar19 = uVar19 + 1;
                      iVar12 = iVar12 + 4;
                    } while ((uVar19 & 0xffffffff) < (ulonglong)puVar3[3]);
                  }
                  if ((uVar19 & 0xffffffff) != (uVar15 & 0xffffffff)) goto LAB_82952d00;
                }
              }
              else if ((uVar20 != 0) &&
                      ((ulonglong)*(uint *)(iVar12 + 0x18) == (param_3 & 0xffffffff)))
              goto LAB_82952d00;
              goto LAB_829532f8;
            }
            uStack_8c0 = 0;
            uStack_8b4 = uVar22 + 1;
            lVar8 = fn_82952740(param_1,*(undefined4 *)puVar3[4],1,&uStack_8b4,auStack_8a0,
                                  aiStack_6a0,&uStack_8c0,param_8);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
            if (uVar23 != 0) {
              if (uVar24 == 0x11100000) {
                *puVar3 = uVar7 | 0x74200000;
                lVar8 = fn_82964868(param_1,puVar3);
                if ((int)lVar8 < 0) {
                  return lVar8;
                }
                *puVar3 = uVar7 | 0x11100000;
              }
              else {
                lVar8 = fn_82964868(param_1,puVar3);
                if ((int)lVar8 < 0) {
                  return lVar8;
                }
              }
              *(undefined4 *)(iVar12 + 4) = *(undefined4 *)(param_1 + 0x74);
            }
            uStack_8b4 = uVar22 + 1;
            lVar8 = fn_82952740(param_1,*(undefined4 *)puVar3[4],1,&uStack_8b4,auStack_8a0,
                                  aiStack_6a0,&uStack_8c0,param_8);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
            uVar22 = uStack_8b4;
            if (uVar23 != 0) {
              iVar12 = fn_82964628(uVar16,param_1,*(undefined4 *)(param_1 + 0xa8),0,0);
              if (iVar12 == -1) {
                return -0x7ff8fff2;
              }
              iVar10 = fn_82963998(0x74);
              if (iVar10 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = fn_829632A0();
              }
              if (iVar10 == 0) {
                return -0x7ff8fff2;
              }
              uVar19 = 0x74b00000;
              if (uVar24 != 0x11100000) {
                uVar19 = 0x74a00000;
              }
              lVar8 = fn_82963A30(iVar10,uVar19 | 1,0,1,0);
              if (((int)lVar8 < 0) || (lVar8 = fn_829632F0(iVar10,puVar3), lVar8 < 0))
              goto LAB_8295335c;
              **(int **)(iVar10 + 0x10) = iVar12;
              lVar8 = fn_829644B8(param_1,iVar10);
              uVar22 = uStack_8b4;
              if ((int)lVar8 < 0) {
                return lVar8;
              }
            }
          }
          else {
            uStack_8c0 = 0;
            if (uVar23 != 0) {
              uStack_8b8 = uVar22 + 1;
              iVar10 = fn_82963998(0x74);
              if (iVar10 == 0) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)fn_829632A0();
              }
              if (puVar11 == (uint *)0x0) {
                return -0x7ff8fff2;
              }
              lVar8 = fn_82963D50(puVar11,puVar3);
              if ((int)lVar8 < 0) {
                return lVar8;
              }
              uVar21 = *puVar3 & 0xfff00000;
              if (uVar21 == 0x74400000) {
                uVar21 = 0x73b00000;
LAB_82952af4:
                *puVar11 = uVar21 | 1;
              }
              else {
                if (uVar21 == 0x74500000) {
                  uVar21 = 0x73c00000;
                  goto LAB_82952af4;
                }
                if (uVar21 == 0x74600000) {
                  uVar21 = 0x73a00000;
                  goto LAB_82952af4;
                }
                if (uVar21 == 0x74700000) {
                  uVar21 = 0x73900000;
                  goto LAB_82952af4;
                }
              }
              fn_829632F0(puVar11,puVar3);
              lVar8 = fn_829644B8(param_1,puVar11);
              if ((int)lVar8 < 0) {
                return lVar8;
              }
              auStack_8b0[1] = 0;
              iVar10 = *(int *)(param_1 + 0xc);
              lVar8 = fn_82952740(param_1,*(undefined4 *)puVar3[4],0,&uStack_8b8,auStack_2a0,
                                    aiStack_4a0,auStack_8b0 + 1,param_8);
              if ((int)lVar8 < 0) {
                return lVar8;
              }
              if (*(int *)(param_1 + 0xc) == iVar10) {
                lVar8 = fn_82964868(param_1,puVar3);
                if ((int)lVar8 < 0) {
                  return lVar8;
                }
                *puVar11 = 0;
              }
              else {
                iVar10 = fn_82963998(0x74);
                if (iVar10 == 0) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = fn_829632A0();
                }
                if (iVar10 == 0) {
                  return -0x7ff8fff2;
                }
                lVar8 = fn_82963A30(iVar10,0x73400001,0,0,0);
                if ((lVar8 < 0) || (lVar8 = fn_829632F0(iVar10,puVar3), lVar8 < 0)) {
LAB_8295335c:
                  fn_82BA02A8(iVar10);
                  fn_829639F0(iVar10);
                  return lVar8;
                }
                **(undefined4 **)(iVar10 + 0x10) = *(undefined4 *)puVar3[4];
                *puVar3 = 0x74300001;
                ((undefined4 *)puVar3[2])[1] = *(undefined4 *)puVar3[2];
                lVar8 = fn_82964868(param_1,puVar3);
                if ((int)lVar8 < 0) {
                  return lVar8;
                }
                lVar8 = fn_829644B8(param_1,iVar10);
                if ((int)lVar8 < 0) {
                  return lVar8;
                }
              }
              *(undefined4 *)(iVar12 + 4) = *(undefined4 *)(param_1 + 0x74);
            }
            uStack_8b8 = uVar22 + 1;
            lVar8 = fn_82952740(param_1,*(undefined4 *)puVar3[4],1,&uStack_8b8,auStack_8a0,
                                  aiStack_6a0,&uStack_8c0,param_8);
            uVar22 = uStack_8b8;
            if ((int)lVar8 < 0) {
              return lVar8;
            }
          }
        }
        else {
          if (uVar19 != 1) {
            uVar16 = 0x12e0;
            uVar17 = 0xffffffff82037964;
            goto LAB_82953314;
          }
          if (uVar23 != 0) {
            lVar8 = fn_829520D8(param_1,puVar3,1);
            if (lVar8 == 0) {
              return -0x7ff8fff2;
            }
            lVar8 = fn_829644B8(param_1);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
          }
          auStack_8b0[0] = 0;
          uStack_8c0 = 0;
          uStack_8bc = uVar22 + 1;
          lVar8 = fn_82952740(param_1,*(undefined4 *)puVar3[4],1,&uStack_8bc,auStack_8a0,
                                aiStack_6a0,&uStack_8c0,param_8);
          if ((int)lVar8 < 0) {
            return lVar8;
          }
          if (uVar23 != 0) {
            lVar8 = fn_829520D8(param_1,puVar3,0);
            if (lVar8 == 0) {
              return -0x7ff8fff2;
            }
            lVar8 = fn_829644B8(param_1);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
          }
          uStack_8bc = uVar22 + 1;
          lVar8 = fn_82952740(param_1,*(undefined4 *)puVar3[4],0,&uStack_8bc,auStack_2a0,
                                aiStack_4a0,auStack_8b0,param_8);
          if ((int)lVar8 < 0) {
            return lVar8;
          }
          if (uVar23 != 0) {
            bVar14 = true;
            uVar19 = (ulonglong)auStack_8b0[0];
            if (uStack_8c0 != uVar19) {
LAB_82953348:
              uVar16 = 0x12e1;
              uVar17 = 0xffffffff82037944;
LAB_82953314:
              fn_82975B00(param_1,puVar3[0xf],uVar16,uVar17);
              return -0x7fffbffb;
            }
            if (uVar19 != 0) {
              iVar10 = 0;
              do {
                piVar1 = (int *)((int)aiStack_4a0 + iVar10);
                piVar2 = (int *)((int)aiStack_6a0 + iVar10);
                iVar10 = iVar10 + 4;
                bVar14 = (bool)(*piVar2 == *piVar1 & bVar14);
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
              if (!bVar14) goto LAB_82953348;
            }
            iVar10 = fn_82963998(0x74);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = fn_829632A0();
            }
            if (iVar10 == 0) {
              return -0x7ff8fff2;
            }
            lVar8 = fn_82963A30(iVar10,auStack_8b0[0] & 0xfffff | 0x73400000,
                                      auStack_8b0[0] << 1,auStack_8b0[0],0);
            if ((lVar8 < 0) || (lVar8 = fn_829632F0(iVar10,puVar3), lVar8 < 0)) goto LAB_8295335c;
            fn_82F68CC0(*(undefined4 *)(iVar10 + 0x10),aiStack_4a0,uStack_8c0 << 2);
            fn_82F68CC0(*(undefined4 *)(iVar10 + 8),auStack_8a0,uStack_8c0 << 2);
            fn_82F68CC0(((ulonglong)uStack_8c0 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(iVar10 + 8)
                         ,auStack_2a0);
            lVar8 = fn_829644B8(param_1,iVar10);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
          }
          *(undefined4 *)(iVar12 + 4) = *(undefined4 *)(param_1 + 0x74);
          uVar22 = uStack_8bc;
        }
      }
      else {
        if (uVar24 != 0x20700000) {
          *param_4 = uVar22;
          return 0;
        }
        if (in_stack_0000005c == 0) {
          piVar2 = (int *)puVar3[2];
          lVar8 = ((ulonglong)uVar21 & 0xfffff) * 4;
          iVar12 = *(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14));
          if (*(int *)(iVar12 + 0x14) !=
              *(int *)(*(int *)(*(int *)((int)lVar8 + (int)piVar2) * 4 + *(int *)(param_1 + 0x14)) +
                      0x14)) {
            uVar16 = 0x12e0;
            uVar17 = 0xffffffff82037908;
            goto LAB_82953314;
          }
          if (((param_5 == 0) || (param_6 == 0)) || (param_7 == (uint *)0x0)) {
            uVar16 = 0x12e1;
            uVar17 = 0xffffffff820378c0;
            goto LAB_82953314;
          }
          if (*(int *)(iVar12 + 0x14) != param_2) {
            *puStack0000002c = uVar22;
            return 0;
          }
          param_4 = puStack0000002c;
          if (in_stack_00000054 != 0) {
            bVar14 = true;
            uVar15 = 0;
            if ((ulonglong)*(uint *)(iVar12 + 0x18) != (param_3 & 0xffffffff)) {
              uVar15 = uVar19;
            }
            if ((uVar21 & 0xfffff) != 0) {
              iVar10 = 0;
              lVar18 = uVar15 << 2;
              uVar25 = uVar19;
              do {
                iVar9 = *(int *)(*(int *)(iVar10 + (int)piVar1) * 4 + *(int *)(param_1 + 0x14));
                iVar4 = *(int *)(*(int *)((int)lVar18 + (int)piVar2) * 4 + *(int *)(param_1 + 0x14))
                ;
                if (((*(int *)(iVar9 + 0xc) != *(int *)(iVar4 + 0xc)) ||
                    (*(int *)(iVar9 + 0x10) != *(int *)(iVar4 + 0x10))) ||
                   ((*(int *)(iVar9 + 8) != *(int *)(iVar4 + 8) ||
                    ((*(int *)(iVar9 + 4) != *(int *)(iVar4 + 4) ||
                     (*(int *)(iVar9 + 0x3c) != *(int *)(iVar4 + 0x3c))))))) {
                  bVar14 = false;
                }
                iVar10 = iVar10 + 4;
                lVar18 = lVar18 + 4;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
            if (0x7f < (*param_7 + uVar19 & 0xffffffff)) {
              uVar16 = 0x1194;
              uVar17 = 0xffffffff820378e8;
              goto LAB_82953314;
            }
            if (bVar14) {
              iVar12 = 0;
              if ((uVar21 & 0xfffff) != 0) {
                iVar10 = 0;
                lVar8 = uVar15 << 2;
                do {
                  iVar9 = (int)lVar8;
                  lVar8 = lVar8 + 4;
                  *(undefined4 *)((*param_7 + iVar12) * 4 + param_5) =
                       *(undefined4 *)(puVar3[2] + iVar9);
                  iVar9 = *param_7 + iVar12;
                  iVar12 = iVar12 + 1;
                  puVar6 = (undefined4 *)(iVar10 + puVar3[4]);
                  iVar10 = iVar10 + 4;
                  *(undefined4 *)(iVar9 * 4 + param_6) = *puVar6;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
            }
            else {
              iVar10 = fn_82963998(0x74);
              if (iVar10 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = fn_829632A0();
              }
              if (iVar10 == 0) {
                return -0x7ff8fff2;
              }
              lVar18 = fn_82963A30(iVar10,uVar19 | 0x10000000,uVar19,uVar19,0);
              if (((lVar18 < 0) || (lVar18 = fn_829632F0(iVar10,puVar3), lVar18 < 0)) ||
                 (lVar18 = fn_829644B8(param_1,iVar10), (int)lVar18 < 0)) {
LAB_829533a0:
                fn_82BA02A8(iVar10);
                fn_829639F0(iVar10);
                return lVar18;
              }
              if ((ulonglong)*(uint *)(iVar12 + 0x18) == (param_3 & 0xffffffff)) {
                uVar15 = (ulonglong)puVar3[2];
              }
              else {
                uVar15 = (ulonglong)puVar3[2] + lVar8;
              }
              fn_82F68CC0(*(undefined4 *)(iVar10 + 8),uVar15,lVar8);
              uVar24 = 0;
              if ((uVar21 & 0xfffff) != 0) {
                iVar12 = 0;
                do {
                  uVar13 = fn_82964628(uVar16,param_1,*(undefined4 *)(param_1 + 0x88),0,0);
                  *(undefined4 *)((*param_7 + uVar24) * 4 + param_5) = uVar13;
                  iVar9 = *(int *)((*param_7 + uVar24) * 4 + param_5);
                  if (iVar9 == -1) {
code_r0x829533bc:
                    lVar18 = -0x7ff8fff2;
                    goto LAB_829533a0;
                  }
                  uVar13 = *(undefined4 *)(iVar9 * 4 + *(int *)(param_1 + 0x14));
                  uVar5 = *(undefined4 *)
                           (*(int *)(puVar3[4] + iVar12) * 4 + *(int *)(param_1 + 0x14));
                  iVar9 = fn_82963FA8(uVar13,uVar5);
                  if ((iVar9 < 0) || (iVar9 = fn_829640A0(uVar13,uVar5), iVar9 < 0))
                  goto code_r0x829533bc;
                  *(undefined4 *)(*(int *)(iVar10 + 0x10) + iVar12) =
                       *(undefined4 *)((*param_7 + uVar24) * 4 + param_5);
                  *(undefined4 *)((*param_7 + uVar24) * 4 + param_6) =
                       *(undefined4 *)(puVar3[4] + iVar12);
                  iVar9 = *(int *)(puVar3[2] + iVar12);
                  if ((ulonglong)*(uint *)(*(int *)(iVar9 * 4 + *(int *)(param_1 + 0x14)) + 0x18) ==
                      (param_3 & 0xffffffff)) {
                    *(int *)(iVar12 + *(int *)(iVar10 + 8)) = iVar9;
                  }
                  else {
                    *(undefined4 *)(iVar12 + *(int *)(iVar10 + 8)) =
                         *(undefined4 *)(puVar3[2] + (int)lVar8);
                  }
                  uVar24 = uVar24 + 1;
                  iVar12 = iVar12 + 4;
                  lVar8 = lVar8 + 4;
                } while (uVar24 < uVar19);
              }
            }
            *param_7 = *param_7 + uVar7;
            param_4 = puStack0000002c;
          }
        }
LAB_829532f8:
        uVar22 = uVar22 + 1;
      }
    } while ((ulonglong)uVar22 < (param_8 & 0xffffffff));
  }
  return 0;
}

