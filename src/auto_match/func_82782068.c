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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int fStack_b0;
extern int fn_8277C208();
extern int fn_8277E150();
extern int fn_8277F360();
extern int fn_8277F708();
extern int fn_827804A8();
extern int fn_82781FA0();
extern int fn_82782008();
extern unsigned int iStack_9c;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;


void fn_82782068(double param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar7;
  ulonglong uVar6;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar17;
  ulonglong uVar16;
  longlong lVar18;
  int *piVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  
  *(undefined4 *)(param_2 + 300) = 0;
  uVar7 = 0;
  if (param_3[1] != 0) {
    iVar9 = 0;
    do {
      iVar5 = *(int *)(iVar9 + *param_3);
      *(uint *)(iVar5 + 0x34) = uVar7;
      if ((*(uint *)(iVar5 + 0x2c) & 4) != 0) {
        piVar8 = (int *)(*(int *)(param_2 + 300) * 0xc + *(int *)(param_2 + 0x128));
        *(int *)(param_2 + 300) = *(int *)(param_2 + 300) + 1;
        *piVar8 = iVar5;
        piVar8[1] = 0;
        piVar8[2] = -1;
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar7 < (uint)param_3[1]);
  }
  iVar9 = 0;
  fStack_b0 = (float)param_1;
  uVar17 = 0;
  iStack_9c = 0;
  uVar7 = 0;
  uVar10 = 0xffffffffffffffff;
  iVar22 = 0;
  iVar5 = 0;
LAB_82782128:
  if ((uVar17 < *(uint *)(param_2 + 0x120)) && (uVar7 < *(uint *)(param_2 + 300))) {
    piVar19 = (int *)(*(int *)(param_2 + 0x11c) + iVar22);
    piVar8 = (int *)(iVar5 + *(int *)(param_2 + 0x128));
    iVar4 = *piVar19;
    if (*(uint *)(*piVar8 + 0x34) == *(uint *)(iVar4 + 0x34)) {
      iVar4 = fn_8277F360(param_1,param_2);
      uVar17 = uVar17 + 1;
      piVar8[2] = iVar4;
      iVar22 = iVar22 + 0xc;
      goto LAB_827821cc;
    }
    if (*(uint *)(iVar4 + 0x34) <= *(uint *)(*piVar8 + 0x34)) goto LAB_827821fc;
    iVar4 = fn_8277F360(param_1,param_2);
    piVar8[2] = iVar4;
  }
  else {
    if (*(uint *)(param_2 + 300) <= uVar7) {
      if (uVar17 < *(uint *)(param_2 + 0x120)) {
        piVar19 = (int *)(*(int *)(param_2 + 0x11c) + iVar22);
        iVar4 = *(int *)(*(int *)(param_2 + 0x11c) + iVar22);
LAB_827821fc:
        iVar4 = fn_8277F360(param_1,param_2,iVar4);
        piVar19[2] = iVar4;
        uVar17 = uVar17 + 1;
        iVar22 = iVar22 + 0xc;
        goto LAB_82782128;
      }
      uVar14 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar12 = 0;
      do {
        while( true ) {
          if (((ulonglong)*(uint *)(param_2 + 0x120) <= (uVar14 & 0xffffffff)) ||
             ((ulonglong)*(uint *)(param_2 + 300) <= (uVar13 & 0xffffffff))) break;
          lVar15 = uVar14 * 0xc;
          lVar18 = uVar13 * 0xc;
          uVar20 = lVar15 + (ulonglong)*(uint *)(param_2 + 0x11c);
          uVar16 = (ulonglong)*(uint *)(param_2 + 0x128) + lVar18;
          piVar8 = (int *)uVar20;
          fVar1 = (float)piVar8[2];
          piVar19 = (int *)uVar16;
          fVar2 = (float)piVar19[2];
          if (fVar1 != fVar2) {
            bVar23 = *(uint *)(*piVar19 + 0x34) < *(uint *)(*piVar8 + 0x34);
            if (bVar23 != true) {
              if (!bVar23) {
                fn_82781FA0(param_2,uVar12,fVar1,1);
                fn_82781FA0(param_2,uVar20,piVar8[2] | 0x40000000,1);
                if (iVar9 != 0) {
                  fn_827804A8(param_2,uVar12,&fStack_b0);
                  iVar9 = iStack_9c;
                }
                fn_8277F708(param_1,param_2,uVar11,uVar20);
                goto LAB_827825f0;
              }
              if ((((uVar12 & 0xffffffff) == 0) || (iVar5 = *(int *)((int)uVar12 + 4), iVar5 == 0))
                 || (*(char *)(*(int *)(iVar5 + 0x10) + *(int *)(param_2 + 0x24)) == '\0')) {
                fn_82781FA0(param_2,uVar11,fVar2,1);
                fn_82782008(param_2,uVar16,piVar19[2] | 0x40000000);
              }
              else {
                if (iVar9 == 0) {
                  uStack_ac = *(undefined4 *)(*piVar19 + 0x20);
                  iVar9 = 1;
                  uStack_98 = (undefined4)uVar10;
                  uStack_a0 = (int)uVar13;
                }
                else {
                  iVar9 = iVar9 + 1;
                }
                iStack_9c = iVar9;
                if ((((uVar11 & 0xffffffff) != 0) && (iVar5 = *(int *)((int)uVar11 + 4), iVar5 != 0)
                    ) && ((pfVar3 = *(float **)(iVar5 + 0x14), pfVar3 != (float *)0x0 &&
                          ((double)*pfVar3 == param_1)))) {
                  pfVar3[3] = fVar2;
                }
              }
              goto LAB_82782574;
            }
          }
          if (fVar1 == -(_seed_nan)) {
            if (iVar9 != 0) {
              fn_827804A8(param_2,uVar12,&fStack_b0);
              iVar9 = iStack_9c;
            }
LAB_82782514:
            *(undefined4 *)((int)uVar16 + 4) = *(undefined4 *)((int)uVar20 + 4);
            uVar10 = uVar13;
            uVar12 = uVar20;
          }
          else {
            fn_82781FA0(param_2,uVar12,fVar1,0);
            fn_82781FA0(param_2,uVar11,fVar1,0);
            if (iVar9 != 0) {
              fn_827804A8(param_2,uVar12,&fStack_b0);
              iVar9 = iStack_9c;
            }
            uVar10 = uVar13 + 1;
            iVar5 = fn_8277C208(param_2,uVar14 + 1,uVar10,fVar1);
            if (iVar5 != 0) {
              uVar12 = uVar14;
              uVar6 = uVar14 + 1;
              uVar21 = uVar20;
              do {
                uVar14 = uVar6;
                if (iVar5 == 2) {
                  uVar7 = *(uint *)(param_2 + 0x128);
                  lVar18 = lVar18 + 0xc;
                  fn_82782008(param_2,uVar16);
                  uVar6 = uVar16;
                  uVar11 = uVar16;
                  uVar13 = uVar10;
                  uVar14 = uVar12;
                  uVar16 = lVar18 + (ulonglong)uVar7;
                  uVar20 = uVar21;
                }
                else {
                  lVar15 = lVar15 + 0xc;
                  uVar20 = lVar15 + (ulonglong)*(uint *)(param_2 + 0x11c);
                  fn_82781FA0(param_2,uVar21,(uint)fVar1 | 0x40000000,1);
                  uVar6 = uVar21;
                }
                fn_82781FA0(param_2,uVar6,fVar1,1);
                uVar10 = uVar13 + 1;
                iVar5 = fn_8277C208(param_2,uVar14 + 1,uVar10,fVar1);
                uVar12 = uVar14;
                uVar6 = uVar14 + 1;
                uVar21 = uVar20;
              } while (iVar5 != 0);
            }
            fn_82781FA0(param_2,uVar20,(uint)fVar1 | 0x40000000,0);
            if (*(int *)(*(int *)uVar20 + 0x24) == *(int *)(*(int *)uVar16 + 0x28)) {
              fn_82781FA0(param_2,uVar11,fVar1,0);
              goto LAB_82782514;
            }
            fn_82782008(param_2,uVar16,(uint)fVar1 | 0x40000000);
            uVar10 = uVar13;
            uVar12 = uVar20;
          }
          uVar14 = uVar14 + 1;
          uVar13 = uVar10;
LAB_82782574:
          uVar13 = uVar13 + 1;
          uVar11 = uVar16;
        }
        if ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 300)) {
          uVar16 = uVar13 * 0xc + (ulonglong)*(uint *)(param_2 + 0x128);
          fn_82781FA0(param_2,uVar11,*(undefined4 *)((int)uVar16 + 8),1);
          fn_82782008(param_2,uVar16,*(uint *)((int)uVar16 + 8) | 0x40000000);
          goto LAB_82782574;
        }
        if ((ulonglong)*(uint *)(param_2 + 0x120) <= (uVar14 & 0xffffffff)) {
          fn_8277E150(param_2 + 0x11c,param_2 + 0x128);
          uVar7 = 0;
          if (param_3[1] != 0) {
            iVar9 = 0;
            do {
              uVar7 = uVar7 + 1;
              iVar5 = *(int *)(iVar9 + *param_3);
              iVar9 = iVar9 + 4;
              *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x20);
              *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar5 + 0x28);
            } while (uVar7 < (uint)param_3[1]);
          }
          return;
        }
        uVar20 = (ulonglong)*(uint *)(param_2 + 0x11c) + uVar14 * 0xc;
        fn_82781FA0(param_2,uVar12,*(undefined4 *)((int)uVar20 + 8),1);
        fn_82781FA0(param_2,uVar20,*(uint *)((int)uVar20 + 8) | 0x40000000,1);
        if (iVar9 != 0) {
          fn_827804A8(param_2,uVar12,&fStack_b0);
          iVar9 = iStack_9c;
        }
        fn_8277F708(param_1,param_2,uVar11,uVar20);
LAB_827825f0:
        uVar10 = 0xffffffffffffffff;
        uVar14 = uVar14 + 1;
        uVar12 = uVar20;
      } while( true );
    }
    piVar19 = (int *)(iVar5 + *(int *)(param_2 + 0x128));
    iVar4 = fn_8277F360(param_1,param_2,*(undefined4 *)(iVar5 + *(int *)(param_2 + 0x128)));
LAB_827821cc:
    piVar19[2] = iVar4;
  }
  uVar7 = uVar7 + 1;
  iVar5 = iVar5 + 0xc;
  goto LAB_82782128;
}

