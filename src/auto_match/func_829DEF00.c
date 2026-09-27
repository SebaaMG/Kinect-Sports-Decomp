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
extern int fn_829DEAE0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;
extern unsigned int lbl_821A7F10;


void fn_829DEF00(undefined8 param_1,double param_2,double param_3,double param_4,double param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar7;
  undefined8 uVar6;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar15;
  ushort uVar16;
  longlong lVar14;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  double extraout_f1;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  iVar7 = fn_82F6A540();
  lVar22 = (longlong)param_3;
  uVar21 = (ulonglong)param_5;
  if (((int)(longlong)extraout_f1 < 0) ||
     (bVar5 = true, *(int *)(*(int *)(iVar7 + 8) + 4) <= (int)(longlong)extraout_f1)) {
    bVar5 = false;
  }
  if (bVar5) {
    iVar15 = (int)(longlong)param_2;
    if ((iVar15 < 0) || (bVar5 = true, *(int *)(*(int *)(iVar7 + 8) + 4) <= iVar15)) {
      bVar5 = false;
    }
    if (bVar5) {
      iVar17 = (int)lVar22;
      lVar19 = (longlong)iVar17;
      if ((lVar19 < 0) || (bVar5 = true, *(int *)(*(int *)(iVar7 + 8) + 8) <= iVar17)) {
        bVar5 = false;
      }
      if ((bVar5) && (lVar22 + 10 < (longlong)uVar21)) {
        iVar10 = *(int *)(iVar7 + 8);
        uVar2 = *(uint *)(iVar10 + 8);
        dVar24 = (double)(float)((double)(float)(param_4 - param_2) /
                                (double)(float)(param_5 - param_3));
        if ((longlong)(int)uVar2 <= (longlong)uVar21) {
          uVar21 = (ulonglong)uVar2 - 1 & 0xffffffff;
          if ((longlong)uVar21 <= lVar22 + 10) goto LAB_829def88;
          param_4 = (double)(float)((double)(float)(param_5 - param_3) * dVar24 + param_2);
        }
        iVar3 = *(int *)(iVar7 + 0xc);
        fVar4 = (float)(param_3 + param_5) * lbl_82002C5C;
        dVar23 = (double)fVar4;
        iVar9 = (int)(longlong)((float)(param_2 + param_4) * lbl_82002C5C);
        uVar1 = *(ushort *)
                 ((uint)((byte)(&lbl_821A7F10)[*(uint *)(iVar10 + 0x10) & 0x3f] >> 3) * iVar15 +
                  *(int *)(iVar10 + 0x14) * iVar17 + iVar3);
        if ((iVar9 < 0) || (bVar5 = true, *(int *)(iVar10 + 4) <= iVar9)) {
          bVar5 = false;
        }
        iVar15 = (int)(longlong)fVar4;
        if (bVar5) {
          if ((iVar15 < 0) || (bVar5 = true, (int)uVar2 <= iVar15)) {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_829df100;
          uVar16 = *(ushort *)
                    ((uint)((byte)(&lbl_821A7F10)[*(uint *)(iVar10 + 0x10) & 0x3f] >> 3) * iVar9 +
                     *(int *)(iVar10 + 0x14) * iVar15 + iVar3);
        }
        else {
LAB_829df100:
          uVar16 = 0;
        }
        iVar9 = (int)(longlong)param_4;
        if ((iVar9 < 0) || (bVar5 = true, *(int *)(iVar10 + 4) <= iVar9)) {
          bVar5 = false;
        }
        iVar18 = (int)uVar21;
        if (bVar5) {
          if ((iVar18 < 0) || (bVar5 = true, (int)uVar2 <= iVar18)) {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_829df174;
          uVar8 = *(ushort *)
                   ((uint)((byte)(&lbl_821A7F10)[*(uint *)(iVar10 + 0x10) & 0x3f] >> 3) * iVar9 +
                    *(int *)(iVar10 + 0x14) * iVar18 + iVar3);
        }
        else {
LAB_829df174:
          uVar8 = 0;
        }
        iVar10 = (uint)(uVar8 != 0) + (uint)(uVar16 != 0) +
                 ((uint)uVar1 - ((uVar1 - 1) + (uint)(uVar1 == 0)));
        if (1 < iVar10) {
          if (iVar10 == 2) {
            uVar11 = uVar1;
            if (uVar1 <= uVar16) {
              uVar11 = uVar16;
            }
            uVar12 = uVar8;
            if ((uVar8 < uVar11) && (uVar12 = uVar16, uVar16 < uVar1)) {
              uVar12 = uVar1;
            }
            *(ushort *)(iVar7 + 0x16) = uVar12;
            *(ushort *)(iVar7 + 0x14) = (uVar8 - uVar12) + uVar16 + uVar1;
            if (uVar1 == 0) {
              lVar19 = (longlong)iVar18;
              if (lVar22 <= lVar19) {
                dVar23 = (double)lbl_82002AE0;
                do {
                  fn_829DEAE0((double)(float)((double)(float)(param_5 - param_3) * dVar24 +
                                               param_2),iVar7,lVar19);
                  lVar19 = lVar19 + -1;
                  param_5 = (double)(float)(param_5 - dVar23);
                } while (lVar22 <= (int)lVar19);
              }
            }
            else if ((longlong)iVar17 <= (longlong)uVar21) {
              dVar25 = (double)lbl_82002AE0;
              dVar23 = param_3;
              do {
                fn_829DEAE0((double)(float)((double)(float)(param_3 - dVar23) * dVar24 + param_2),
                              iVar7,lVar19);
                lVar19 = lVar19 + 1;
                param_3 = (double)(float)(param_3 + dVar25);
              } while ((longlong)(int)lVar19 <= (longlong)uVar21);
            }
          }
          else {
            uVar11 = uVar1;
            if (uVar16 <= uVar1) {
              uVar11 = uVar16;
            }
            uVar12 = uVar8;
            if ((uVar11 < uVar8) && (uVar12 = uVar16, uVar1 < uVar16)) {
              uVar12 = uVar1;
            }
            *(ushort *)(iVar7 + 0x14) = uVar12;
            uVar11 = uVar1;
            if (uVar1 <= uVar16) {
              uVar11 = uVar16;
            }
            uVar13 = uVar8;
            if ((uVar8 < uVar11) && (uVar13 = uVar16, uVar16 < uVar1)) {
              uVar13 = uVar1;
            }
            uVar16 = ((uVar8 - uVar13) - uVar12) + uVar16 + uVar1;
            *(ushort *)(iVar7 + 0x16) = uVar16 + 10;
            *(ushort *)(iVar7 + 0x14) = uVar16 - 10;
            if (uVar16 == uVar1) {
              if ((longlong)iVar17 <= (longlong)uVar21) {
                dVar25 = (double)lbl_82002AE0;
                dVar23 = param_3;
                do {
                  fn_829DEAE0((double)(float)((double)(float)(param_3 - dVar23) * dVar24 + param_2
                                               ),iVar7,lVar19);
                  lVar19 = lVar19 + 1;
                  param_3 = (double)(float)(param_3 + dVar25);
                } while ((longlong)(int)lVar19 <= (longlong)uVar21);
              }
            }
            else if (uVar16 == uVar8) {
              lVar19 = (longlong)iVar18;
              if (lVar22 <= lVar19) {
                dVar23 = (double)lbl_82002AE0;
                do {
                  fn_829DEAE0((double)(float)((double)(float)(param_5 - param_3) * dVar24 +
                                               param_2),iVar7,lVar19);
                  lVar19 = lVar19 + -1;
                  param_5 = (double)(float)(param_5 - dVar23);
                } while (lVar22 <= (int)lVar19);
              }
            }
            else {
              dVar26 = (double)lbl_82002AE0;
              lVar19 = (longlong)iVar15;
              dVar25 = dVar23;
              lVar20 = lVar19;
              lVar14 = lVar19;
              while (lVar14 <= (longlong)uVar21) {
                fn_829DEAE0((double)(float)((double)(float)(dVar23 - param_3) * dVar24 + param_2),
                              iVar7,lVar20);
                lVar20 = lVar20 + 1;
                dVar23 = (double)(float)(dVar23 - dVar26);
                lVar14 = (longlong)(int)lVar20;
              }
              dVar25 = dVar25 - dVar26;
              while( true ) {
                dVar25 = (double)(float)dVar25;
                lVar19 = lVar19 + -1;
                if ((int)lVar19 < lVar22) break;
                fn_829DEAE0((double)(float)((double)(float)(dVar25 - param_3) * dVar24 + param_2),
                              iVar7,lVar19);
                dVar25 = dVar25 - dVar26;
              }
            }
          }
          uVar6 = 1;
          goto LAB_829df4a0;
        }
      }
    }
  }
LAB_829def88:
  uVar6 = 0;
LAB_829df4a0:
  fn_82F6A58C(uVar6);
  return;
}

