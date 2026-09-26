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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_110;
extern int fn_8267BED0();
extern int fn_82687270();
extern int fn_82687E98();
extern int fn_8268A3E8();
extern int fn_8268B330();
extern int fn_826C62B8();
extern int fn_827532F0();
extern int fn_827533C8();
extern int fn_82753598();
extern int fn_827538F8();
extern int fn_82753F50();
extern int fn_827543F0();
extern int fn_82754460();
extern int fn_8276A958();
extern unsigned int iStack_13c;
extern unsigned int iStack_f8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200C4F8;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_140;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


uint fn_827546D8(uint param_1,longlong param_2,ulonglong param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  uint *puVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  int *piVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  int *piVar19;
  double dVar20;
  double dVar21;
  int *piStack0000002c;
  uint uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  char *pcStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  int aiStack_118 [2];
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  char *pcStack_104;
  char *pcStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  char *pcStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  iVar14 = *(int *)(param_1 + 0x14);
  uVar11 = (undefined4)param_2;
  iStack_13c = 0;
  uStack_e4 = (undefined4)param_3;
  iStack_f8 = *(int *)(iVar14 + 0x10);
  piVar15 = *(int **)(iVar14 + 0xc);
  iVar14 = *(int *)(iVar14 + 0x14);
  uVar17 = 0;
  aiStack_118[1] = 0;
  uStack_140 = 0;
  piStack0000002c = param_4;
  uStack_e8 = uVar11;
  fn_8268B330(auStack_110);
  iVar9 = *(int *)(param_1 + 0x28);
  piStack_120 = (int *)0x0;
  bVar4 = false;
  if (iVar9 != 0) {
    puVar8 = (uint *)(*(uint *)(iVar9 + 0xc) & 0xfffffffc);
    if ((*puVar8 & 0x7fffffff) == 0) {
      puVar8 = (uint *)(**(code **)(**(int **)(*(int *)(iVar9 + 0x14) + 0xc) + 0x3c))();
    }
    else {
      puVar8 = puVar8 + 2;
    }
    iVar9 = thunk_FUN_82f65ac0(puVar8,param_2);
    if (iVar9 == 0) {
      **(int **)(param_1 + 0x28) = **(int **)(param_1 + 0x28) + 1;
      uVar17 = *(uint *)(param_1 + 0x28);
      goto LAB_827547a8;
    }
  }
  pcStack_100 = "Searching again without [Device] flag:";
  dVar20 = (double)lbl_82002AE0;
  pcStack_130 = "Searching GFxFontLib without [Device] flag: \"";
  pcStack_dc = "GFxFontProvider not installed.";
  pcStack_d0 = "GFxFontLib not installed.";
  pcStack_104 = "Applying GFxFontMap: \"";
  pcStack_d4 = "\"  mapped to \"";
  puStack_f0 = &lbl_8200C4F8;
  uVar16 = 0xffffffff820141e4;
  do {
    if (param_5 == (int *)0x0) {
      iVar9 = fn_827538F8((int *)(param_1 + 8),&uStack_e8);
      if (iVar9 < 0) {
        puVar8 = (uint *)0x0;
      }
      else {
        puVar8 = (uint *)(iVar9 * 0xc + *(int *)(param_1 + 8) + 0x10);
      }
      if (puVar8 != (uint *)0x0) {
        *(int *)*puVar8 = *(int *)*puVar8 + 1;
        uVar17 = *puVar8;
        goto LAB_827547a8;
      }
    }
    else {
      piStack_120 = aiStack_118;
      iStack_13c = iStack_13c + 1;
      *param_5 = *param_5 + 1;
    }
    piVar19 = *(int **)(param_1 + 0xc);
    if (piVar19 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (**(code **)(*piVar19 + 100))(piVar19,param_2,param_3,piStack_120);
    }
    fn_82753F50(param_5,param_2,param_3,*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0,aiStack_118)
    ;
    if ((iVar9 != 0) &&
       (((~(ulonglong)(uint)(*(int **)(iVar9 + 0xc))[5] & 0xffffffff) >> 6 & 1) != 0)) {
      if (((param_3 & 3) != 0) &&
         (cVar10 = (**(code **)(**(int **)(iVar9 + 0xc) + 0x40))(), cVar10 == '\0')) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar9;
        }
        uVar17 = 0;
        goto LAB_827547a8;
      }
      uStack_f4 = 0x146;
      uVar5 = fn_8267BED0(param_1,0x1c,&uStack_f4);
      if ((uVar5 & 0xffffffff) == 0) {
        uStack_140 = 0;
        uVar17 = uStack_140;
      }
      else {
        uStack_140 = fn_826C62B8(uVar5,-(uint)(param_5 == (int *)0x0) & param_1,iVar9,param_2,
                                       0,0);
        uVar17 = uStack_140;
      }
    }
    uVar5 = 0;
    lVar18 = param_2;
    uVar7 = param_3;
    dVar21 = dVar20;
    if (uVar17 == 0) {
      if (iStack_f8 != 0) {
        cVar10 = fn_8268A3E8(iStack_f8,(uint *)(param_1 + 0x1c),param_2);
        if (cVar10 != '\0') {
          uVar1 = *(uint *)(param_1 + 0x24);
          lVar18 = ((ulonglong)*(uint *)(param_1 + 0x1c) & 0xfffffffc) + 8;
          if (uVar1 != 0x10) {
            uVar7 = CONCAT44(uVar1,uVar1) & 0xfffffffffffffff3 | param_3 & 0xfffffffc;
          }
          dVar21 = (double)*(float *)(param_1 + 0x20);
          uVar5 = (ulonglong)((int)uVar1 >> 2);
          if ((uVar1 & 0xc) == 0) {
            uVar5 = 0;
          }
          uVar5 = (ulonglong)uVar1 & 0x20 | uVar5 & 3;
          if (param_5 == (int *)0x0) {
            uStack_c8 = (undefined4)lVar18;
            piVar19 = (int *)(param_1 + 8);
            uStack_c4 = (int)uVar7;
            iVar9 = fn_827538F8(piVar19,&uStack_c8);
            if (iVar9 < 0) {
              puVar8 = (uint *)0x0;
            }
            else {
              puVar8 = (uint *)(iVar9 * 0xc + *piVar19 + 0x10);
            }
            if (puVar8 != (uint *)0x0) {
              piVar2 = (int *)*puVar8;
              if ((double)(float)piVar2[4] != dVar21) {
                uStack_e0 = 0x146;
                uVar6 = fn_8267BED0(param_1,0x1c,&uStack_e0);
                if ((uVar6 & 0xffffffff) == 0) {
                  uStack_140 = 0;
                }
                else {
                  uStack_140 = fn_826C62B8(uVar6,param_1,*(undefined4 *)(*puVar8 + 0x14),
                                                 param_2,param_3,*(undefined4 *)(*puVar8 + 0x18));
                }
                *(float *)(uStack_140 + 0x10) = (float)dVar21;
                uVar17 = uStack_140;
                goto LAB_82754ae0;
              }
LAB_82754f98:
              *piVar2 = *piVar2 + 1;
              uVar17 = *puVar8;
              goto LAB_827547a8;
            }
LAB_82754ae0:
            uStack_b8 = uVar11;
            uStack_b4 = (int)uVar7;
            iVar9 = fn_827538F8(piVar19,&uStack_b8);
            if (iVar9 < 0) {
              puVar8 = (uint *)0x0;
            }
            else {
              puVar8 = (uint *)(iVar9 * 0xc + *piVar19 + 0x10);
            }
            if (puVar8 != (uint *)0x0) {
              piVar2 = (int *)*puVar8;
              if ((double)(float)piVar2[4] == dVar21) goto LAB_82754f98;
              uStack_fc = 0x146;
              uVar6 = fn_8267BED0(param_1,0x1c,&uStack_fc);
              if ((uVar6 & 0xffffffff) == 0) {
                uStack_140 = 0;
              }
              else {
                uStack_140 = fn_826C62B8(uVar6,param_1,*(undefined4 *)(*puVar8 + 0x14),param_2
                                               ,param_3,*(undefined4 *)(*puVar8 + 0x18));
              }
              *(float *)(uStack_140 + 0x10) = (float)dVar21;
              uVar17 = uStack_140;
            }
            if (uVar17 != 0) goto LAB_82754d08;
          }
          else {
            fn_82753598(param_5,pcStack_104,param_2,pcStack_d4,lVar18,puStack_f0,uVar7);
          }
        }
      }
      if (piVar15 != (int *)0x0) {
        uStack_138 = 0;
        uStack_134 = 0;
        lVar12 = (ulonglong)*(uint *)(param_1 + 0x14) + 8;
        if ((ulonglong)*(uint *)(param_1 + 0x14) == 0) {
          lVar12 = 0;
        }
        cVar10 = (**(code **)(*piVar15 + 4))
                           (piVar15,&uStack_138,lVar18,uVar7,*(undefined4 *)(param_1 + 0xc),lVar12,
                            *(undefined4 *)(param_1 + 0x10));
        lVar12 = lVar18;
        if (cVar10 == '\0') {
          uVar13 = 0xffffffff82014208;
          uVar5 = uVar7;
        }
        else {
          uVar13 = uVar16;
          if (uVar5 == 0) {
            uStack_10c = 0x146;
            uVar5 = fn_8267BED0(param_1,0x1c,&uStack_10c);
            if ((uVar5 & 0xffffffff) == 0) {
              uStack_140 = 0;
            }
            else {
              uStack_140 = fn_826C62B8(uVar5,-(uint)(param_5 == (int *)0x0) & param_1,
                                             uStack_134,param_2,0,uStack_138);
            }
            *(float *)(uStack_140 + 0x10) = (float)dVar21;
            uVar5 = uVar7;
            uVar17 = uStack_140;
          }
          else {
            uStack_bc = (undefined4)uVar5;
            uStack_c0 = uVar11;
            iVar9 = fn_827538F8((int *)(param_1 + 8),&uStack_c0);
            if (iVar9 < 0) {
              puVar8 = (uint *)0x0;
            }
            else {
              puVar8 = (uint *)(iVar9 * 0xc + *(int *)(param_1 + 8) + 0x10);
            }
            if (puVar8 != (uint *)0x0) {
              *(int *)*puVar8 = *(int *)*puVar8 + 1;
              uVar17 = *puVar8;
              fn_82687E98(&uStack_138);
              goto LAB_827547a8;
            }
            uStack_d8 = 0x146;
            uVar6 = fn_8267BED0(param_1,0x1c,&uStack_d8);
            if ((uVar6 & 0xffffffff) == 0) {
              uStack_140 = 0;
            }
            else {
              uStack_140 = fn_826C62B8(uVar6,-(uint)(param_5 == (int *)0x0) & param_1,
                                             uStack_134,param_2,uVar5,uStack_138);
            }
            *(float *)(uStack_140 + 0x10) = (float)dVar21;
            lVar12 = param_2;
            uVar17 = uStack_140;
          }
        }
        fn_827533C8(param_5,0xffffffff820141f0,lVar12,0xffffffff820141ec,uVar5,uVar13);
        fn_82687E98(&uStack_138);
      }
    }
LAB_82754d08:
    if ((bVar4) || (param_5 == (int *)0x0)) {
LAB_82754d40:
      if (uVar17 == 0) {
LAB_82754d48:
        if (iVar14 != 0) {
          if (*(int *)(param_1 + 0xc) == 0) {
            uVar3 = *(undefined4 *)(param_1 + 0x10);
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x14) + 0x18);
          }
          uVar5 = fn_8276A958(lVar18,uVar7,iVar14,uVar3);
          if (uVar5 == 0) {
            fn_827533C8(param_5,0xffffffff82014214,lVar18,0xffffffff820141ec,uVar7,
                          0xffffffff82014208);
          }
          else {
            fn_827533C8(param_5,0xffffffff82014214,lVar18,0xffffffff820141ec,uVar7,
                          0xffffffff820141e4);
            uStack_ec = 0x146;
            uVar6 = fn_8267BED0(param_1,0x1c,&uStack_ec);
            if ((uVar6 & 0xffffffff) == 0) {
              uStack_140 = 0;
            }
            else {
              uStack_140 = fn_826C62B8(uVar6,-(uint)(param_5 == (int *)0x0) & param_1,uVar5,
                                             param_2,0,0);
            }
            *(float *)(uStack_140 + 0x10) = (float)dVar21;
            uVar17 = uStack_140;
          }
          if ((uVar5 & 0xffffffff) != 0) {
            fn_82687270(uVar5);
          }
        }
      }
    }
    else if (uVar17 == 0) {
      if ((piVar15 == (int *)0x0) && (aiStack_118[0] == 2)) {
        fn_827532F0(param_5,pcStack_d0);
        goto LAB_82754d40;
      }
      goto LAB_82754d48;
    }
    if ((!bVar4) && (param_5 != (int *)0x0)) {
      if (uVar17 == 0) {
        if ((iVar14 == 0) && (aiStack_118[0] == 2)) {
          fn_827532F0(param_5,pcStack_dc);
          goto LAB_82754e48;
        }
        goto LAB_82754e50;
      }
LAB_82754fcc:
      if (param_5 == (int *)0x0) {
        fn_82754460(param_1 + 8,&uStack_140);
      }
      else {
        *param_5 = *param_5 - iStack_13c;
      }
      goto LAB_827547a8;
    }
LAB_82754e48:
    if (uVar17 != 0) goto LAB_82754fcc;
LAB_82754e50:
    if ((piVar15 != (int *)0x0) && ((uVar7 & 0x10) != 0)) {
      lVar12 = 0;
      uVar5 = uVar7 << 0x20 | uVar7 & 0xffffffef;
      uStack_128 = 0;
      uStack_124 = 0;
      if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
        lVar12 = (ulonglong)*(uint *)(param_1 + 0x14) + 8;
      }
      cVar10 = (**(code **)(*piVar15 + 4))
                         (piVar15,&uStack_128,lVar18,uVar5,*(undefined4 *)(param_1 + 0xc),lVar12,0);
      if (cVar10 == '\0') {
        uVar13 = 0xffffffff82014208;
      }
      else {
        uStack_108 = 0x146;
        uVar7 = fn_8267BED0(param_1,0x1c,&uStack_108);
        if ((uVar7 & 0xffffffff) == 0) {
          uStack_140 = 0;
        }
        else {
          uStack_140 = fn_826C62B8(uVar7,-(uint)(param_5 == (int *)0x0) & param_1,uStack_124,
                                         param_2,0x10,uStack_128);
        }
        *(float *)(uStack_140 + 0x10) = (float)dVar21;
        uVar13 = uVar16;
        uVar17 = uStack_140;
      }
      fn_827533C8(param_5,pcStack_130,lVar18,0xffffffff820141ec,uVar5,uVar13);
      fn_82687E98(&uStack_128);
      if (uVar17 != 0) goto LAB_82754fcc;
    }
    if ((param_3 & 0x10) == 0) break;
    fn_827532F0(param_5,pcStack_100);
    uVar5 = param_3 & 0xffffffef;
    param_3 = param_3 << 0x20 | uVar5;
    iVar14 = 0;
    uStack_e4 = (undefined4)uVar5;
    piVar15 = (int *)0x0;
    bVar4 = true;
    param_4 = piStack0000002c;
  } while( true );
  if (param_5 != (int *)0x0) {
    *param_5 = *param_5 - iStack_13c;
  }
  uVar17 = 0;
LAB_827547a8:
  fn_827543F0(aiStack_118);
  return uVar17;
}

