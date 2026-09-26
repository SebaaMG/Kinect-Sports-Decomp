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
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82ABE5F8();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82ACA5E0();
extern int fn_82AD6090();
extern int fn_82AF5618();
extern int fn_82AF58C0();
extern int fn_82AF6268();
extern int fn_82AF8968();
extern int fn_82B01A48();
extern int fn_82B09CD8();
extern int fn_82B16698();
extern int fn_82B83718();
extern int fn_82F65FE0();
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82B0A6B8(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar10;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  uint *puVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar16;
  ulonglong uVar15;
  int *piVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar22;
  ulonglong uVar21;
  uint *puVar23;
  char acStack_90 [16];
  ulonglong uStack_80;
  uint uStack_78;
  
  puVar7 = (uint *)0x0;
  piVar17 = (int *)(param_3 + 4);
  piVar9 = piVar17;
  do {
    while (iVar1 = *piVar9, iVar1 == 0) {
      if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3700) {
        piVar9 = (int *)(param_3 + 0x2c);
        for (uVar18 = 0; uVar18 < (*(uint *)(param_3 + 8) >> 0x13 & 7); uVar18 = uVar18 + 1) {
          piVar22 = (int *)(*(int *)(*piVar9 + 0xc) + 4);
          piVar13 = piVar22;
          while (iVar1 = *piVar13, iVar1 != 0) {
            iVar2 = *(int *)(iVar1 + 0x10);
            if (iVar2 == 0) {
              piVar14 = piVar22;
              for (iVar2 = *piVar22; iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
                piVar14 = (int *)(iVar2 + 8);
              }
              *piVar14 = *(int *)(iVar2 + 8);
              fn_82ABE5F8(param_1,iVar1,0x14,0x1a);
            }
            else if (((ulonglong)*(uint *)(iVar2 + 0x1c) == (param_2 & 0xffffffff)) &&
                    (iVar2 != param_3)) {
              if ((*(uint *)(iVar2 + 8) >> 0x1a & 1) != 0) {
                fn_82B16698(param_1,iVar2,*(undefined4 *)(param_1 + 0x294));
              }
              cVar10 = fn_82AF5618(iVar2);
              if ((cVar10 != '\0') && (cVar10 = fn_82AF6268(param_1,iVar2), cVar10 == '\0')) {
                if (puVar7 == (uint *)0x0) {
                  puVar7 = (uint *)fn_82ABE250(param_1,8,0x26);
                  puVar7[1] = (uint)puVar7 | 1;
                  *puVar7 = (uint)(puVar7 + 1) | 1;
                }
                if ((puVar7[1] & 1) == 0) {
                  uVar16 = *puVar7 & 0xfffffffe;
                  iVar8 = uVar16 - 4;
                  if ((iVar8 == 0) || (*(uint *)(uVar16 + 8) < *(int *)(uVar16 + 4) + 1U))
                  goto LAB_82b0a9b0;
                }
                else {
LAB_82b0a9b0:
                  iVar8 = fn_82AD6090(puVar7,1);
                }
                iVar3 = *(int *)(iVar8 + 8);
                *(int *)(iVar8 + 8) = iVar3 + 1;
                *(int *)((iVar3 + 4) * 4 + iVar8) = iVar2;
              }
            }
            if (*piVar13 == iVar1) {
              piVar13 = (int *)(iVar1 + 8);
            }
          }
          piVar9 = piVar9 + 1;
        }
      }
      if (puVar7 == (uint *)0x0) {
        return;
      }
      uVar21 = 0;
      for (uVar18 = puVar7[1]; ((uVar18 & 1) == 0 && (uVar18 != 0));
          uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
        uVar21 = *(uint *)(uVar18 + 8) + uVar21;
      }
      piVar9 = (int *)fn_82ABE9F0(param_1,uVar21 * 0x1c,0);
      puVar23 = (uint *)(piVar9 + -7);
      while (((puVar7[1] & 1) == 0 && (puVar7[1] != 0))) {
        puVar4 = (uint *)(*puVar7 & 0xfffffffe);
        puVar11 = puVar4 + -1;
        uVar16 = puVar4[1] - 1;
        uVar18 = puVar11[puVar4[1] + 3];
        puVar4[1] = uVar16;
        if (uVar16 == 0) {
          *(uint *)(*puVar4 & 0xfffffffe) = *puVar11;
          *(uint *)(*puVar11 & 0xfffffffe) = *puVar4;
          fn_82AA6648(puVar7,puVar11,((ulonglong)puVar4[2] + 4 & 0x3fffffff) << 2);
        }
        puVar23 = puVar23 + 7;
        *puVar23 = uVar18;
      }
      *puVar7 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar7;
      puVar7 = (uint *)0x0;
      uVar19 = uVar21;
      piVar13 = piVar9;
      uVar20 = uVar21 & 0xffffffff;
      while (uVar20 != 0) {
        cVar10 = fn_82ACA5E0(*piVar13);
        uVar20 = uVar21;
        piVar22 = piVar9;
        if (cVar10 != '\0') {
          do {
            iVar1 = *piVar13;
            iVar2 = *piVar22;
            if (((iVar1 != iVar2) && (((*(uint *)(iVar1 + 8) ^ *(uint *)(iVar2 + 8)) & 0x3f80) == 0)
                ) && (cVar10 = fn_82AF8968(param_1,iVar1,iVar2,&uStack_80), cVar10 != '\0')) {
              uVar18 = 0;
              piVar13[6] = piVar13[6] + (uStack_78 & 0x1f);
              if ((uStack_78 & 0x1f) != 0) {
                uVar15 = 0;
                do {
                  uVar12 = uVar15 + 3;
                  uVar16 = (uint)uVar15;
                  uVar5 = uVar15 & 0x3f;
                  uVar18 = uVar18 + 1;
                  uVar15 = uVar15 + 4;
                  iVar1 = (int)((((2L << (uVar12 & 0x3f)) - 1U &
                                  *(ulonglong *)((int)&uStack_80 + (uVar16 >> 3 & 0x1ffffff8)) &
                                 -1L << uVar5) >> uVar5 & 0xffffffff) >> 2) + 1;
                  piVar13[iVar1] = piVar13[iVar1] + 1;
                } while (uVar18 < (uStack_78 & 0x1f));
              }
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 7;
          } while (uVar20 != 0);
          piVar13[5] = 4;
          for (uVar18 = *(uint *)(*piVar13 + 8) >> 1 & 0xf; uVar18 != 0;
              uVar18 = uVar18 - (uVar18 & ~(uVar18 - 1))) {
            uVar16 = *(uint *)((int)((0x20U - LZCOUNT(uVar18 & ~(uVar18 - 1)) & 0xffffffff) << 2) +
                              (int)piVar13);
            if (uVar16 < (uint)piVar13[5]) {
              piVar13[5] = uVar16;
            }
          }
        }
        piVar13 = piVar13 + 7;
        uVar19 = uVar19 - 1;
        uVar20 = uVar19;
      }
      fn_82F65FE0(piVar9,uVar21,0x1c,0xffffffff82af65f8);
      bVar6 = false;
      acStack_90[0] = '\0';
      uVar19 = 0;
      cVar10 = '\0';
      piVar13 = piVar9;
      if ((uVar21 & 0xffffffff) != 0) {
        do {
          cVar10 = fn_82B09CD8(param_1,*piVar13,param_3,param_2,piVar9,uVar21,1,acStack_90);
          if (cVar10 != '\0') {
            bVar6 = true;
            cVar10 = '\0';
            break;
          }
          uVar19 = uVar19 + 1;
          cVar10 = acStack_90[0];
          piVar13 = piVar13 + 7;
        } while ((uVar19 & 0xffffffff) < (uVar21 & 0xffffffff));
      }
      if ((cVar10 != '\0') && (uVar19 = 0, piVar13 = piVar9, (uVar21 & 0xffffffff) != 0)) {
        do {
          cVar10 = fn_82B09CD8(param_1,*piVar13,param_3,param_2,piVar9,uVar21,0,acStack_90);
          if (cVar10 != '\0') {
            bVar6 = true;
            break;
          }
          uVar19 = uVar19 + 1;
          piVar13 = piVar13 + 7;
        } while ((uVar19 & 0xffffffff) < (uVar21 & 0xffffffff));
      }
      fn_82AC6808(param_1,piVar9,uVar21 * 0x1c,0);
      if (!bVar6) {
        return;
      }
LAB_82b0a860:
      fn_82B83718(param_1,param_2);
      piVar9 = piVar17;
    }
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      piVar13 = piVar17;
      for (iVar2 = *piVar17; iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
        piVar13 = (int *)(iVar2 + 8);
      }
      *piVar13 = *(int *)(iVar2 + 8);
      fn_82ABE5F8(param_1,iVar1,0x14,0x1a);
    }
    else if (((*(uint *)(iVar2 + 8) & 0x3f80) != 0x3700) &&
            ((ulonglong)*(uint *)(iVar2 + 0x1c) == (param_2 & 0xffffffff))) {
      if ((*(uint *)(iVar2 + 8) >> 0x1a & 1) != 0) {
        fn_82B16698(param_1,iVar2,*(undefined4 *)(param_1 + 0x294));
      }
      cVar10 = fn_82ACA5E0(iVar2);
      if (cVar10 == '\0') {
        cVar10 = fn_82AF58C0(param_1,iVar2);
        if ((cVar10 == '\0') &&
           (cVar10 = fn_82B01A48(param_1,iVar2,param_3,param_2), cVar10 != '\0'))
        goto LAB_82b0a860;
        cVar10 = fn_82AF5618(iVar2);
        if (cVar10 == '\0') goto LAB_82b0a84c;
      }
      cVar10 = fn_82AF6268(param_1,iVar2);
      if (cVar10 == '\0') {
        if (puVar7 == (uint *)0x0) {
          puVar7 = (uint *)fn_82ABE250(param_1,8,0x26);
          puVar7[1] = (uint)puVar7 | 1;
          *puVar7 = (uint)(puVar7 + 1) | 1;
        }
        if ((puVar7[1] & 1) == 0) {
          uVar18 = *puVar7 & 0xfffffffe;
          iVar8 = uVar18 - 4;
          if ((iVar8 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U))
          goto LAB_82b0a828;
        }
        else {
LAB_82b0a828:
          iVar8 = fn_82AD6090(puVar7,1);
        }
        iVar3 = *(int *)(iVar8 + 8);
        *(int *)(iVar8 + 8) = iVar3 + 1;
        *(int *)((iVar3 + 4) * 4 + iVar8) = iVar2;
      }
    }
LAB_82b0a84c:
    if (*piVar9 == iVar1) {
      piVar9 = (int *)(iVar1 + 8);
    }
  } while( true );
}

