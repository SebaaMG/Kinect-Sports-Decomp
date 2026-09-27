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
extern unsigned int *auStack_80;
extern char cRam831d2d5c;
extern char cRam831d2d64;
extern char cRam831d2d6c;
extern int fn_822315A0();
extern int fn_82250928();
extern int fn_823B5CB8();
extern int fn_823B83B0();
extern int fn_823B8A50();
extern int fn_8243C3D0();
extern int fn_825ACB58();
extern int fn_8287CB50();
extern int fn_8287FD98();
extern int fn_828B00A0();
extern int __u64tod();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954C8;
extern unsigned int uRam831d2d54;
extern unsigned int uRam831d2d60;
extern unsigned int uRam831d2d68;
extern unsigned int uStack_88;


void fn_823B5D10(double param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  uint uVar15;
  uint uVar16;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar17;
  uint *puVar18;
  uint **ppuVar19;
  uint *puVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  uint *apuStack_90 [2];
  ulonglong uStack_88;
  undefined4 auStack_80 [32];
  
  lVar4 = fn_828B00A0((ulonglong)*param_2 + 0x278);
  uVar2 = uRam831d2d54;
  if (param_2[6] == 0xffffffff) {
    param_2[7] = 1;
    param_2[6] = uVar2;
  }
  if (cRam831d2d5c == '\0') {
    if (cRam831d2d64 == '\0') {
      param_2[6] = uRam831d2d54;
    }
    else {
      fn_8287FD98();
      dVar23 = (double)fn_8287CB50();
      uStack_88 = (ulonglong)uRam831d2d68;
      param_2[6] = (int)(dVar23 * (double)uStack_88);
    }
    uVar2 = param_2[0x1f];
    dVar23 = (double)lbl_82193CC0;
    if (uVar2 != 0) {
      piVar5 = (int *)param_2[0x1b];
      uVar16 = param_2[0x1e];
      iVar6 = 0;
      if (piVar5 != (int *)0x0) {
        iVar6 = *piVar5;
      }
      uVar15 = uVar16 >> 1;
      if (*(uint *)(iVar6 + 8) <= uVar15) {
        uVar15 = uVar15 - *(uint *)(iVar6 + 8);
      }
      if (*(ulonglong *)(param_2 + 8) <
          *(ulonglong *)(*(int *)(*(int *)(iVar6 + 4) + uVar15 * 4) + (uVar16 & 1) * 8)) {
        iVar6 = 0;
        if (piVar5 != (int *)0x0) {
          iVar6 = *piVar5;
        }
        uVar15 = uVar16 >> 1;
        if (*(uint *)(iVar6 + 8) <= uVar15) {
          uVar15 = uVar15 - *(uint *)(iVar6 + 8);
        }
        *(undefined8 *)(param_2 + 8) =
             *(undefined8 *)(*(int *)(*(int *)(iVar6 + 4) + uVar15 * 4) + (uVar16 & 1) * 8);
        dVar22 = (double)__u64tod();
        param_2[10] = (uint)(float)((double)(float)dVar22 * dVar23);
      }
      if (param_2[7] != 0) {
        if (uVar2 != 0) {
          piVar5 = (int *)param_2[0x1b];
          piVar11 = (int *)0x0;
          uVar2 = param_2[0x1e];
          if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
            piVar11 = *(int **)*piVar5;
          }
          uVar21 = ((ulonglong)param_2[0x1f] + (ulonglong)uVar2) - 1;
          if (((piVar11 == (int *)0x0) || ((int *)*piVar11 == (int *)0x0)) ||
             (piVar11 = *(int **)*piVar11, piVar11 == (int *)0x0)) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar11;
          }
          uVar10 = (uVar21 & 0xffffffff) >> 1;
          if (*(uint *)(iVar6 + 8) <= uVar10) {
            uVar10 = uVar10 - *(uint *)(iVar6 + 8);
          }
          iVar12 = 0;
          if (piVar5 != (int *)0x0) {
            iVar12 = *piVar5;
          }
          uVar16 = uVar2 >> 1;
          if (*(uint *)(iVar12 + 8) <= uVar16) {
            uVar16 = uVar16 - *(uint *)(iVar12 + 8);
          }
          param_2[7] = (uint)((ulonglong)
                              (*(longlong *)
                                (*(int *)((int)((uVar10 & 0xffffffff) << 2) + *(int *)(iVar6 + 4)) +
                                (int)((uVar21 & 1) << 3)) -
                              *(longlong *)
                               (*(int *)(*(int *)(iVar12 + 4) + uVar16 * 4) + (uVar2 & 1) * 8)) <
                             (ulonglong)(longlong)(int)param_2[6]);
        }
        *(longlong *)(param_2 + 0xc) = lVar4;
      }
    }
    if ((param_2[7] == 0) && (cRam831d2d6c != '\0')) {
      lVar13 = *(longlong *)(param_2 + 0xc);
      *(longlong *)(param_2 + 0xc) = lVar4;
      *(longlong *)(param_2 + 8) = (*(longlong *)(param_2 + 8) - lVar13) + lVar4;
    }
  }
  else {
    *(longlong *)(param_2 + 8) = lVar4 - (int)param_2[6];
    dVar22 = (double)__u64tod();
    dVar23 = (double)lbl_82193CC0;
    param_2[10] = (uint)(float)((double)(float)dVar22 * dVar23);
  }
  uVar2 = param_2[7];
  if (param_2[0x1f] != 0) {
    piVar5 = (int *)param_2[0x1b];
    puVar18 = param_2 + 0x1b;
    uVar16 = param_2[0x1e];
    iVar6 = 0;
    if (piVar5 != (int *)0x0) {
      iVar6 = *piVar5;
    }
    uVar15 = uVar16 >> 1;
    if (*(uint *)(iVar6 + 8) <= uVar15) {
      uVar15 = uVar15 - *(uint *)(iVar6 + 8);
    }
    uVar21 = *(ulonglong *)(param_2 + 8);
    if (*(ulonglong *)(*(int *)(*(int *)(iVar6 + 4) + uVar15 * 4) + (uVar16 & 1) * 8) <= uVar21) {
      piVar11 = (int *)0x0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        piVar11 = *(int **)*piVar5;
      }
      uVar10 = ((ulonglong)param_2[0x1f] + (ulonglong)uVar16) - 1;
      if (((piVar11 == (int *)0x0) || ((int *)*piVar11 == (int *)0x0)) ||
         (piVar5 = *(int **)*piVar11, piVar5 == (int *)0x0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar5;
      }
      uVar14 = (uVar10 & 0xffffffff) >> 1;
      if (*(uint *)(iVar6 + 8) <= uVar14) {
        uVar14 = uVar14 - *(uint *)(iVar6 + 8);
      }
      if (uVar21 < *(ulonglong *)
                    (*(int *)((int)((uVar14 & 0xffffffff) << 2) + *(int *)(iVar6 + 4)) +
                    (int)((uVar10 & 1) << 3))) {
        if ((cRam831d2d5c != '\0') || (uVar2 == 0)) {
          uVar10 = 1;
          if (1 < param_2[0x1f]) {
            do {
              puVar7 = (ulonglong *)fn_823B83B0(puVar18,uVar10);
              if (uVar21 <= *puVar7) break;
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xffffffff) < (ulonglong)param_2[0x1f]);
          }
          plVar8 = (longlong *)fn_823B83B0(puVar18,uVar10);
          plVar9 = (longlong *)fn_823B83B0(puVar18,uVar10 - 1);
          lVar4 = *plVar8;
          if ((ulonglong)uRam831d2d60 < (ulonglong)(lVar4 - *plVar9)) {
            *(longlong *)(param_2 + 8) = lVar4;
            dVar22 = (double)__u64tod(lVar4);
            uVar10 = uVar10 + 1;
            param_2[10] = (uint)(float)((double)(float)dVar22 * dVar23);
          }
          while (uVar10 = uVar10 - 1, uVar10 != 0) {
            if ((ulonglong)param_2[0x1f] != 0) {
              uVar16 = param_2[0x1e];
              param_2[0x1e] = uVar16 + 1;
              if (param_2[0x1d] << 1 <= uVar16 + 1) {
                param_2[0x1e] = 0;
              }
              lVar4 = (ulonglong)param_2[0x1f] - 1;
              param_2[0x1f] = (uint)lVar4;
              if (lVar4 == 0) {
                param_2[0x1e] = 0;
              }
            }
          }
          param_2[7] = -(uint)(param_2[0x1f] < 2) & 1;
        }
        goto LAB_823b61b4;
      }
    }
  }
  param_2[7] = 1;
LAB_823b61b4:
  if ((cRam831d2d5c == '\0') && (param_2[7] != 0)) {
    uStack_88 = 0;
    piVar5 = (int *)(param_2[3] - 0x68);
    if (param_2[3] == 0) {
      piVar5 = (int *)0x0;
    }
    lVar4 = (**(code **)(*piVar5 + 8))();
    iVar6 = fn_8243C3D0(lVar4 + 0xf0,&uStack_88);
    if (iVar6 != 0) {
      param_2[7] = 0;
    }
  }
  if (param_2[7] == 0) {
    puVar18 = (uint *)param_2[0x18];
    apuStack_90[0] = (uint *)*puVar18;
    while (puVar3 = apuStack_90[0], apuStack_90[0] != puVar18) {
      puVar18 = apuStack_90[0] + 4;
      piVar5 = (int *)apuStack_90[0][4];
      puVar20 = apuStack_90[0] + 6;
      if ((ulonglong)apuStack_90[0][10] != 0) {
        piVar11 = (int *)*puVar20;
        iVar6 = 0;
        uVar21 = (ulonglong)apuStack_90[0][9];
        if (piVar11 != (int *)0x0) {
          iVar6 = *piVar11;
        }
        uVar10 = uVar21;
        if (*(uint *)(iVar6 + 8) <= uVar21) {
          uVar10 = uVar21 - *(uint *)(iVar6 + 8);
        }
        if (**(ulonglong **)((int)((uVar10 & 0xffffffff) << 2) + *(int *)(iVar6 + 4)) <=
            *(ulonglong *)(param_2 + 8)) {
          piVar17 = (int *)0x0;
          if ((piVar11 != (int *)0x0) && ((undefined4 *)*piVar11 != (undefined4 *)0x0)) {
            piVar17 = *(int **)*piVar11;
          }
          uVar21 = (uVar21 + apuStack_90[0][10]) - 1;
          if (((piVar17 == (int *)0x0) || ((int *)*piVar17 == (int *)0x0)) ||
             (piVar11 = *(int **)*piVar17, piVar11 == (int *)0x0)) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar11;
          }
          if ((ulonglong)*(uint *)(iVar6 + 8) <= (uVar21 & 0xffffffff)) {
            uVar21 = uVar21 - *(uint *)(iVar6 + 8);
          }
          if (*(ulonglong *)(param_2 + 8) <
              **(ulonglong **)((int)((uVar21 & 0xffffffff) << 2) + *(int *)(iVar6 + 4))) {
            if (piVar5[2] == 0) {
              (**(code **)(*piVar5 + 0x14))(piVar5);
              piVar5[2] = 1;
            }
            uVar16 = puVar3[10];
            uVar21 = 1;
            if (1 < uVar16) {
              uVar10 = *(ulonglong *)(param_2 + 8);
              do {
                puVar7 = (ulonglong *)fn_825ACB58(puVar20,uVar21);
                if (uVar10 <= *puVar7) break;
                uVar21 = uVar21 + 1;
              } while ((uVar21 & 0xffffffff) < (ulonglong)uVar16);
            }
            uVar10 = uVar21 - 1;
            plVar8 = (longlong *)fn_825ACB58(puVar20,uVar10);
            plVar9 = (longlong *)fn_825ACB58(puVar20,uVar21);
            lVar4 = *plVar8;
            dVar23 = (double)__u64tod(*(longlong *)(param_2 + 8) - lVar4);
            dVar22 = (double)(float)dVar23;
            dVar23 = (double)__u64tod(*plVar9 - lVar4);
            piVar5 = (int *)*puVar18;
            dVar23 = (double)(float)(dVar22 / (double)(float)dVar23);
            (**(code **)(*piVar5 + 4))(auStack_80,piVar5,*param_2);
            (**(code **)(**(int **)(plVar8 + 1) + 4))
                      (dVar23,*(int **)(plVar8 + 1),auStack_80[0],*(undefined4 *)(plVar9 + 1));
            piVar5 = (int *)*puVar18;
            (**(code **)(*piVar5 + 8))(piVar5,auStack_80[0]);
            uVar21 = uVar10 & 0xffffffff;
            while (uVar21 != 0) {
              fn_823B8A50(puVar20);
              uVar10 = uVar10 - 1;
              uVar21 = uVar10;
            }
            fn_823B5CB8(auStack_80);
          }
        }
      }
      fn_82250928(apuStack_90);
      puVar18 = (uint *)param_2[0x18];
    }
    if (param_2[0x29] != 0) {
      do {
        iVar6 = 0;
        uVar16 = param_2[0x28];
        if ((int *)param_2[0x25] != (int *)0x0) {
          iVar6 = *(int *)param_2[0x25];
        }
        if (*(uint *)(iVar6 + 8) <= uVar16) {
          uVar16 = uVar16 - *(uint *)(iVar6 + 8);
        }
        puVar7 = *(ulonglong **)(*(int *)(iVar6 + 4) + uVar16 * 4);
        if (*(ulonglong *)(param_2 + 8) < *puVar7) break;
        uVar16 = *(uint *)(*(int *)(puVar7 + 1) + 4);
        apuStack_90[0] = (uint *)param_2[0x22];
        puVar18 = (uint *)((uint *)param_2[0x22])[1];
        while (*(char *)((int)puVar18 + 0x19) == '\0') {
          if (puVar18[3] < uVar16) {
            puVar18 = (uint *)puVar18[2];
          }
          else {
            apuStack_90[0] = puVar18;
            puVar18 = (uint *)*puVar18;
          }
        }
        if ((apuStack_90[0] == (uint *)param_2[0x22]) || (uVar16 < apuStack_90[0][3])) {
          uStack_88 = CONCAT44((uint *)param_2[0x22],(((U64)(uStack_88) >> 32) & 0xFFFFFFFF));
          ppuVar19 = (uint **)&uStack_88;
        }
        else {
          ppuVar19 = apuStack_90;
        }
        (**(code **)(*(int *)(*ppuVar19)[4] + 0x10))();
        if (param_2[0x29] != 0) {
          if (*(int *)(*(int *)(param_2[0x26] + param_2[0x28] * 4) + 0xc) != 0) {
            fn_822315A0();
          }
          uVar16 = param_2[0x28];
          param_2[0x28] = uVar16 + 1;
          if (param_2[0x27] <= uVar16 + 1) {
            param_2[0x28] = 0;
          }
          uVar16 = param_2[0x29];
          param_2[0x29] = (uint)((ulonglong)uVar16 - 1);
          if ((ulonglong)uVar16 - 1 == 0) {
            param_2[0x28] = 0;
          }
        }
      } while (param_2[0x29] != 0);
    }
  }
  if (cRam831d2d5c == '\0') {
    if (param_2[7] == 0) {
      fVar1 = (float)param_2[10];
      param_2[10] = (uint)(float)((double)fVar1 + param_1);
      if (cRam831d2d6c == '\0') {
        *(longlong *)(param_2 + 8) = (longlong)((float)((double)fVar1 + param_1) * lbl_821954C8);
      }
    }
  }
  else if ((uVar2 == 0) && (param_2[7] == 1)) {
    param_2[6] = param_2[6] + uRam831d2d54;
  }
  return;
}

