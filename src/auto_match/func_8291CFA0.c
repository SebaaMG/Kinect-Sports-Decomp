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
extern unsigned int *auStack_190;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2f0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291C6F8();
extern int fn_82F65148();
extern int fn_82F67F88();
extern int fn_82F68CC0();
extern unsigned int iStack_304;
extern unsigned int iStack_308;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int uStack_298;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d8;


undefined8 fn_8291CFA0(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  int iVar12;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  char *pcVar19;
  byte *pbVar20;
  ulonglong *puVar21;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar22;
  byte *pbVar24;
  uint uVar25;
  float *pfVar26;
  ulonglong uVar23;
  uint uVar27;
  int iVar28;
  char cVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint *puVar34;
  ulonglong uVar33;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double dVar35;
  double dVar36;
  double dVar37;
  char cStack_310;
  byte bStack_30c;
  byte bStack_30b;
  byte bStack_30a;
  byte bStack_309;
  int iStack_308;
  int iStack_304;
  float afStack_300 [4];
  ulonglong auStack_2f0 [2];
  longlong lStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  longlong lStack_2c8;
  ulonglong auStack_2c0 [2];
  longlong lStack_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  char cStack_290;
  char cStack_28f;
  char acStack_28e [254];
  undefined1 auStack_190 [400];
  
  if (param_3 < 0xb) {
    return 0xffffffff80004005;
  }
  pcVar19 = "#?RADIANCE";
  pbVar24 = param_2;
  do {
    bVar1 = *pbVar24;
    bVar2 = *pcVar19;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar24 = pbVar24 + 1;
    pcVar19 = pcVar19 + 1;
  } while (pbVar24 != param_2 + 10);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    return 0xffffffff80004005;
  }
  uVar31 = 0;
  bVar9 = false;
  dVar35 = (double)lbl_82002AE0;
  if ((int)param_3 < 1) {
    return 0xffffffff80004005;
  }
  dVar36 = dVar35;
  do {
    if (*param_2 == 10) {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      break;
    }
    if ((int)param_3 < 8) {
LAB_8291d164:
      if (9 < (int)param_3) {
        pbVar24 = param_2;
        pbVar20 = (byte *)"EXPOSURE=";
        do {
          bVar1 = *pbVar24;
          bVar2 = *pbVar20;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar24 = pbVar24 + 1;
          pbVar20 = pbVar20 + 1;
        } while (pbVar24 != param_2 + 9);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          param_3 = param_3 - 9;
          for (param_2 = param_2 + 9; (*param_2 == 0x20 || (*param_2 == 9)); param_2 = param_2 + 1)
          {
            param_3 = param_3 - 1;
            if (param_3 == 0) {
              return 0xffffffff80004005;
            }
          }
          uVar27 = param_3;
          if (0xff < (int)param_3) {
            uVar27 = 0x100;
          }
          uVar25 = 0;
          if (uVar27 != 0) {
            do {
              if (param_2[uVar25] == 10) goto LAB_8291d208;
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar27);
          }
          uVar25 = 0;
LAB_8291d208:
          if (uVar25 == 0) {
            return 0xffffffff80004005;
          }
          fn_8291C6F8(&cStack_290,uVar25 + 1,param_2);
          iVar12 = fn_82F67F88(&cStack_290,0xffffffff8202e468,afStack_300,auStack_190);
          if (iVar12 != 1) {
            return 0xffffffff80004005;
          }
          dVar36 = (double)(float)((double)afStack_300[0] * dVar36);
          param_2 = param_2 + uVar25 + 1;
          param_3 = (param_3 - uVar25) - 1;
          goto LAB_8291d290;
        }
      }
      uVar27 = 0;
      if (param_3 != 0) {
        do {
          if (param_2[uVar27] == 10) goto LAB_8291d280;
          uVar27 = uVar27 + 1;
        } while (uVar27 < param_3);
      }
      uVar27 = 0;
LAB_8291d280:
      param_2 = param_2 + uVar27 + 1;
      param_3 = (param_3 - uVar27) - 1;
    }
    else {
      pbVar24 = param_2;
      pbVar20 = (byte *)"FORMAT=";
      do {
        bVar1 = *pbVar24;
        bVar2 = *pbVar20;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar24 = pbVar24 + 1;
        pbVar20 = pbVar20 + 1;
      } while (pbVar24 != param_2 + 7);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_8291d164;
      iVar12 = param_3 - 7;
      for (param_2 = param_2 + 7; (*param_2 == 0x20 || (*param_2 == 9)); param_2 = param_2 + 1) {
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          return 0xffffffff80004005;
        }
      }
      fn_82F68CC0(auStack_2f0,0xffffffff8202e494,0x10);
      fn_82F68CC0(auStack_2c0,0xffffffff8202e4a4,0x10);
      if (iVar12 < 0x10) {
        return 0xffffffff80004005;
      }
      puVar21 = auStack_2f0;
      pbVar24 = param_2;
      do {
        bVar1 = *pbVar24;
        bVar2 = *(byte *)puVar21;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar24 = pbVar24 + 1;
        puVar21 = (ulonglong *)((int)puVar21 + 1);
      } while (pbVar24 != param_2 + 0xf);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        puVar21 = auStack_2c0;
        pbVar24 = param_2;
        do {
          bVar1 = *pbVar24;
          bVar2 = *(byte *)puVar21;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar24 = pbVar24 + 1;
          puVar21 = (ulonglong *)((int)puVar21 + 1);
        } while (pbVar24 != param_2 + 0xf);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return 0xffffffff80004005;
        }
      }
      param_2 = param_2 + 0x10;
      param_3 = iVar12 - 0x10;
      bVar9 = true;
    }
LAB_8291d290:;} while (0 < (int)param_3);
  if (!bVar9) {
    return 0xffffffff80004005;
  }
  uVar27 = 0x100;
  if ((int)param_3 < 0x101) {
    uVar27 = param_3;
  }
  uVar25 = 0;
  if (uVar27 != 0) {
    do {
      if (param_2[uVar25] == 10) goto LAB_8291d2e4;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar27);
  }
  uVar25 = 0;
LAB_8291d2e4:
  if (uVar25 < 3) {
    return 0xffffffff80004005;
  }
  fn_8291C6F8(&cStack_290,uVar25 + 1,param_2);
  if (cStack_28f == 'Y') {
    bVar9 = true;
    piVar14 = &iStack_308;
    cVar29 = cStack_310;
    if (cStack_290 == '-') {
      cStack_310 = '\0';
    }
    else {
      if (cStack_290 != '+') {
        return 0xffffffff80004005;
      }
      cStack_310 = '\x01';
    }
  }
  else {
    if (cStack_28f != 'X') {
      return 0xffffffff80004005;
    }
    bVar9 = false;
    piVar14 = &iStack_304;
    if (cStack_290 == '-') {
      cVar29 = '\0';
    }
    else {
      if (cStack_290 != '+') {
        return 0xffffffff80004005;
      }
      cVar29 = '\x01';
    }
  }
  iVar12 = fn_82F67F88(acStack_28e,0xffffffff821c7f34,piVar14);
  if (iVar12 != 1) {
    return 0xffffffff80004005;
  }
  pcVar19 = acStack_28e;
  while (((acStack_28e[0] != '\0' && (acStack_28e[0] != '-')) && (acStack_28e[0] != '+'))) {
    pcVar19 = pcVar19 + 1;
    acStack_28e[0] = *pcVar19;
  }
  cVar3 = *pcVar19;
  if (cVar3 == '\0') {
    return 0xffffffff80004005;
  }
  if (bVar9) {
    piVar14 = &iStack_304;
    cVar29 = cVar3 == '+';
  }
  else {
    piVar14 = &iStack_308;
    cStack_310 = cVar3 == '+';
  }
  cVar3 = pcVar19[1];
  if (cVar3 == '\0') {
    return 0xffffffff80004005;
  }
  if ((cVar3 != 'Y') && (cVar3 != 'X')) {
    return 0xffffffff80004005;
  }
  iVar12 = fn_82F67F88(pcVar19 + 2,0xffffffff821c7f34,piVar14);
  if (iVar12 != 1) {
    return 0xffffffff80004005;
  }
  param_1[0xd] = 0;
  param_1[5] = 1;
  *param_1 = 0x1a22aaa6;
  param_1[3] = iStack_304;
  param_1[4] = iStack_308;
  puVar34 = (uint *)(param_2 + uVar25 + 1);
  param_1[0xc] = iStack_304 << 4;
  iVar12 = (param_3 - uVar25) + -1;
  if ((longlong)iStack_304 * (longlong)iStack_308 == 0) {
    return 0xffffffff80004005;
  }
  param_1[0xe] = 1;
  uVar10 = fn_8265C940((longlong)(iStack_304 << 4) * (longlong)iStack_308,0x24810000);
  param_1[1] = (int)uVar10;
  if (uVar10 == 0) {
    return 0xffffffff8007000e;
  }
  iVar28 = iStack_308;
  iVar30 = iStack_304;
  if (!bVar9) {
    iVar28 = iStack_304;
    iVar30 = iStack_308;
  }
  uVar33 = uVar10;
  if (!bVar9) {
    if ((cVar29 == '\0') || (cStack_310 == '\0')) {
      if (cVar29 == '\0') {
        if (cStack_310 != '\0') {
          uVar16 = 0xfffffffffffffffc;
          uVar33 = ((longlong)(int)param_1[0xc] * (longlong)iStack_308 + uVar10) - 0x10;
          uVar13 = (-(ulonglong)(uint)param_1[0xc] & 0xffffffff) >> 2;
          goto LAB_8291d5e0;
        }
        uVar27 = param_1[0xc];
        uVar16 = 0xfffffffffffffffc;
        uVar13 = (ulonglong)(uVar27 >> 2);
LAB_8291d5cc:
        uVar33 = (uVar10 + uVar27) - 0x10;
        goto LAB_8291d5e0;
      }
      uVar13 = (ulonglong)((uint)param_1[0xc] >> 2);
    }
    else {
      uVar13 = (-(ulonglong)(uint)param_1[0xc] & 0xffffffff) >> 2;
      uVar33 = (longlong)(iStack_308 + -1) * (longlong)(int)param_1[0xc] + uVar10;
    }
    uVar16 = 4;
    goto LAB_8291d5e0;
  }
  if ((cVar29 == '\0') || (cStack_310 != '\0')) {
    if (cVar29 == '\0') {
      if (cStack_310 == '\0') {
        uVar27 = param_1[0xc];
        uVar13 = 0xfffffffffffffffc;
        uVar16 = (ulonglong)(uVar27 >> 2);
        goto LAB_8291d5cc;
      }
      if (cStack_310 != '\0') {
        uVar13 = 0xfffffffffffffffc;
        uVar16 = -(ulonglong)(uint)param_1[0xc];
        uVar33 = ((longlong)(int)param_1[0xc] * (longlong)iStack_308 + uVar10) - 0x10;
        goto LAB_8291d52c;
      }
    }
    uVar13 = 4;
    uVar33 = (longlong)(iStack_308 + -1) * (longlong)(int)param_1[0xc] + uVar10;
    uVar16 = (-(ulonglong)(uint)param_1[0xc] & 0xffffffff) >> 2;
  }
  else {
    uVar16 = (ulonglong)(uint)param_1[0xc];
    uVar13 = 4;
LAB_8291d52c:
    uVar16 = (uVar16 & 0xffffffff) >> 2;
  }
LAB_8291d5e0:
  iVar32 = 0;
  if (0 < iVar28) {
    do {
      if (iVar12 < 4) {
LAB_8291d97c:
        fn_8265C990(param_1[1],0x24810000);
        param_1[1] = 0;
        return 0xffffffff80004005;
      }
      uVar27 = *puVar34;
      puVar34 = puVar34 + 1;
      iVar12 = iVar12 + -4;
      bStack_30c = (byte)(uVar27 >> 0x18);
      bStack_30a = (byte)(uVar27 >> 8);
      uVar17 = (ulonglong)bStack_30a;
      bStack_309 = (byte)uVar27;
      if ((bStack_30c == 2) ||
         ((bStack_30b = (byte)(uVar27 >> 0x10), bStack_30b == 2 && (uVar17 < 0x80)))) {
        if ((uint)bStack_30a * 0x100 + (uVar27 & 0xff) != iVar30) goto LAB_8291d97c;
        uVar10 = 0;
        uVar17 = uVar33;
        do {
          iVar22 = 0;
          uVar23 = uVar17;
          if (0 < iVar30) {
            do {
              if (iVar12 < 2) goto LAB_8291d97c;
              uVar27 = (uint)*(byte *)puVar34;
              if (uVar27 < 0x81) {
                if ((iVar12 < (int)(uVar27 + 1)) || (iVar22 = uVar27 + iVar22, iVar30 < iVar22))
                goto LAB_8291d97c;
                if (uVar27 != 0) {
                  uVar25 = 0;
                  do {
                    uVar8 = uVar25 + 1 & 0xff;
                    auStack_2f0[0] = (ulonglong)*(byte *)((int)puVar34 + uVar25 + 1);
                    *(float *)uVar23 = (float)auStack_2f0[0];
                    uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
                    uVar25 = uVar8;
                  } while (uVar8 < uVar27);
                }
                iVar12 = (iVar12 - uVar27) + -1;
                puVar34 = (uint *)((int)puVar34 + uVar27 + 1);
              }
              else {
                iVar22 = (uVar27 & 0x7f) + iVar22;
                if (iVar30 < iVar22) goto LAB_8291d97c;
                auStack_2c0[0] = (ulonglong)*(byte *)((int)puVar34 + 1);
                if ((*(byte *)puVar34 & 0x7f) != 0) {
                  uVar25 = 0;
                  do {
                    *(float *)uVar23 = (float)auStack_2c0[0];
                    uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
                    uVar25 = uVar25 + 1 & 0xff;
                  } while (uVar25 < (uVar27 & 0x7f));
                }
                puVar34 = (uint *)((int)puVar34 + 2);
                iVar12 = iVar12 + -2;
              }
            } while (iVar22 < iVar30);
          }
          uVar10 = uVar10 + 1;
          uVar17 = uVar17 + 4;
        } while ((int)uVar10 < 4);
      }
      else {
        uStack_298 = (ulonglong)bStack_309;
        lStack_2c8 = (longlong)(int)(uint)bStack_30b;
        lStack_2e0 = (longlong)(int)(uint)bStack_30c;
        fVar4 = (float)lStack_2e0;
        fVar5 = (float)lStack_2c8;
        lVar18 = 1;
        fVar6 = (float)uStack_298;
        fVar7 = (float)uVar17;
        uVar27 = 0;
        uVar23 = uVar33;
        uStack_2a8 = uVar17;
        if (1 < iVar30) {
          do {
            if (iVar12 < 4) goto LAB_8291d97c;
            uVar25 = *puVar34;
            puVar34 = puVar34 + 1;
            iVar12 = iVar12 + -4;
            bStack_30c = (byte)(uVar25 >> 0x18);
            bStack_30a = (byte)(uVar25 >> 8);
            uVar15 = (ulonglong)bStack_30a;
            bStack_30b = (byte)(uVar25 >> 0x10);
            uVar17 = (ulonglong)bStack_30b;
            bStack_309 = (byte)uVar25;
            if (((bStack_30c == 1) && (uVar10 = uVar17, uVar17 == 1)) &&
               (uVar10 = uVar15, uVar15 == 1)) {
              uVar25 = (uVar25 & 0xff) << (uVar27 & 0x3f);
              uVar17 = (ulonglong)uVar25;
              lVar18 = uVar17 + lVar18;
              if (iVar30 < (int)lVar18) goto LAB_8291d97c;
              if (0 < (int)uVar25) {
                do {
                  pfVar26 = (float *)uVar23;
                  *pfVar26 = fVar4;
                  pfVar26[1] = fVar5;
                  pfVar26[2] = fVar7;
                  pfVar26[3] = fVar6;
                  uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              uVar27 = uVar27 + 8;
            }
            else {
              uStack_2a0 = (ulonglong)bStack_309;
              lVar18 = lVar18 + 1;
              lStack_2b0 = (longlong)(int)(uint)bStack_30c;
              uVar27 = 0;
              fVar5 = (float)uVar17;
              fVar6 = (float)uStack_2a0;
              fVar7 = (float)uVar15;
              fVar4 = (float)lStack_2b0;
              pfVar26 = (float *)uVar23;
              pfVar26[3] = fVar6;
              pfVar26[1] = fVar5;
              *pfVar26 = fVar4;
              pfVar26[2] = fVar7;
              uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
              uStack_2d8 = uVar17;
              uStack_2d0 = uVar15;
            }
          } while ((int)lVar18 < iVar30);
        }
      }
      iVar32 = iVar32 + 1;
      uVar33 = (uVar16 & 0x3fffffff) * 4 + uVar33;
    } while (iVar32 < iVar28);
  }
  if ((longlong)iStack_304 * (longlong)iStack_308 != 0) {
    pfVar26 = (float *)(param_1[1] + -4);
    dVar37 = (double)(float)(dVar35 / dVar36);
    dVar36 = (double)lbl_82002C5C;
    do {
      auStack_2f0[0] = (ulonglong)(int)pfVar26[4];
      lVar18 = (ulonglong)(uint)(int)pfVar26[4] - 0x88;
      uVar11 = fn_82F65148((double)(float)((double)pfVar26[1] + dVar36),uVar10,lVar18);
      pfVar26[1] = (float)((double)(float)extraout_f1 * dVar37);
      uVar11 = fn_82F65148((double)(float)((double)pfVar26[2] + dVar36),uVar11,lVar18);
      pfVar26[2] = (float)((double)(float)extraout_f1_00 * dVar37);
      uVar10 = fn_82F65148((double)(float)((double)pfVar26[3] + dVar36),uVar11,lVar18);
      uVar31 = uVar31 + 1;
      pfVar26[3] = (float)((double)(float)extraout_f1_01 * dVar37);
      pfVar26 = pfVar26 + 4;
      *pfVar26 = (float)dVar35;
    } while (uVar31 < (uint)(iStack_304 * iStack_308));
  }
  return 0;
}

