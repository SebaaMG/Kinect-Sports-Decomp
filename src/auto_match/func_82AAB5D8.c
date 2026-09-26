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
extern unsigned int *auStack_198;
extern unsigned int *auStack_19c;
extern int fn_82AA8E20();
extern int fn_82AA9058();
extern int fn_82AA9308();
extern int fn_82AAA9E0();
extern int fn_82AAABA0();
extern int fn_82AAAD30();
extern int fn_82AAAE68();
extern int fn_82AAB348();
extern unsigned int iStack_1a0;


longlong fn_82AAB5D8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar7;
  longlong lVar5;
  longlong lVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iStack_1a0;
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [8];
  int aiStack_190 [32];
  int aiStack_110 [68];
  
  if ((*(ushort *)(param_1 + 0x3e) & 0xf0) == 0x40) {
    uVar12 = 4;
    bVar13 = 0;
    iVar14 = *(int *)(param_1 + 0xd0) >> 1;
    *(undefined2 *)(param_1 + 0x5c) = 4;
    uVar16 = (ulonglong)(*(int *)(param_1 + 0xd4) >> 1);
  }
  else {
    iVar14 = *(int *)(param_1 + 0xd0);
    uVar16 = (ulonglong)*(uint *)(param_1 + 0xd4);
    uVar12 = (uint)*(ushort *)(param_1 + 0x5c);
    bVar13 = -((*(ushort *)(param_1 + 0x3e) & 0x800) == 0) & 1;
  }
  iVar11 = uVar12 * (int)uVar16;
  iVar7 = fn_82AA8E20(param_1,0);
  if (iVar7 < 0) {
    lVar5 = -0x3d;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xc4);
    lVar21 = 0x20;
    iVar9 = 0;
    lVar5 = ((ulonglong)*(uint *)(param_1 + 0x30) + 0x11 & 0x3fffffff) * 4 +
            (ulonglong)*(uint *)(param_1 + 0x68);
    iVar18 = *(int *)(*(int *)(param_1 + 0xe0) + 0x38);
    iVar3 = *(int *)(param_1 + 0xc0) - iVar7;
    do {
      *(int *)((int)aiStack_190 + iVar9) = iVar3 + iVar7;
      if (iVar18 != 0) {
        *(int *)((int)aiStack_110 + iVar9) = iVar7;
      }
      iVar7 = iVar11 * 4 + iVar7;
      iVar9 = iVar9 + 4;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    uVar15 = 0;
    uVar19 = 0x10;
    lVar21 = 0;
    uVar17 = 0;
    iVar7 = 2;
    if (0 < iVar14) {
      do {
        iVar18 = (int)uVar17;
        if (iVar18 == 0) {
          uVar19 = 0x10;
          lVar6 = fn_82AA9308(param_1,lVar21,uVar16,uVar12,aiStack_190,aiStack_110);
          lVar5 = lVar6 + lVar5;
          lVar21 = lVar21 + 1;
          lVar6 = 0;
          if (*(short *)(param_1 + 0x5c) != 0) {
            lVar20 = 0;
            do {
              fn_82AA9058(param_1 + 0x28,lVar6,auStack_19c,auStack_198,&iStack_1a0);
              if (iStack_1a0 == 0) {
                if (*(int *)(*(int *)(param_1 + 0xe0) + 0x34) != 0) {
                  fn_82AAABA0(uVar16,lVar20,aiStack_190,bVar13,0);
                }
                if (*(int *)(*(int *)(param_1 + 0xe0) + 0x38) != 0) {
                  fn_82AAABA0(uVar16,lVar20,aiStack_110,bVar13,1);
                }
              }
              lVar6 = lVar6 + 1;
              lVar20 = lVar20 + uVar16;
            } while ((int)lVar6 < (int)(uint)*(ushort *)(param_1 + 0x5c));
            goto LAB_82aab7a4;
          }
LAB_82aab7ac:
          uVar15 = uVar15 + 0x10;
          iVar3 = *(int *)(param_1 + 0xc4);
          iVar9 = *(int *)(param_1 + 0xc0);
          iVar10 = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0xe0) + 0x38);
          lVar6 = 0x20;
          uVar15 = uVar15 + ((longlong)((int)uVar15 >> 5) +
                             (ulonglong)((int)uVar15 < 0 && (uVar15 & 0x1f) != 0) & 0x7ffffff) *
                            -0x20;
          uVar19 = uVar15;
          do {
            iVar2 = (int)uVar19 * iVar11 * 4;
            *(int *)((int)aiStack_190 + iVar10) = iVar2 + iVar9;
            if (iVar1 != 0) {
              *(int *)((int)aiStack_110 + iVar10) = iVar2 + iVar3;
            }
            iVar10 = iVar10 + 4;
            uVar19 = -(ulonglong)(uVar19 != 0x1f) & uVar19 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          uVar19 = 0;
          if (iVar18 != iVar14 + -0x10) {
            bVar4 = iVar14 + -0x20 == iVar18;
            lVar6 = fn_82AA9308(param_1,lVar21,uVar16,uVar12,aiStack_190,aiStack_110);
            lVar5 = lVar6 + lVar5;
            lVar21 = lVar21 + 1;
            lVar6 = 0;
            if (*(short *)(param_1 + 0x5c) != 0) {
              lVar20 = 0;
              do {
                fn_82AA9058(param_1 + 0x28,lVar6,auStack_19c,auStack_198,&iStack_1a0);
                if (iStack_1a0 == 0) {
                  if (*(int *)(*(int *)(param_1 + 0xe0) + 0x34) != 0) {
                    fn_82AAAD30(uVar16,lVar20,aiStack_190,bVar4,bVar13);
                  }
                  if (*(int *)(*(int *)(param_1 + 0xe0) + 0x38) != 0) {
                    fn_82AAAD30(uVar16,lVar20,aiStack_110,bVar4,bVar13);
                  }
                }
                lVar6 = lVar6 + 1;
                lVar20 = lVar20 + uVar16;
              } while ((int)lVar6 < (int)(uint)*(ushort *)(param_1 + 0x5c));
            }
          }
        }
        else {
LAB_82aab7a4:
          if ((int)uVar19 == 0x10) goto LAB_82aab7ac;
        }
        if ((iVar7 == 4) && (iVar18 != iVar14 + -2)) {
          lVar6 = 0;
          bVar4 = iVar14 + -6 == iVar18;
          if (*(short *)(param_1 + 0x5c) != 0) {
            lVar20 = 0;
            do {
              fn_82AA9058(param_1 + 0x28,lVar6,auStack_19c,auStack_198,&iStack_1a0);
              if (iStack_1a0 == 0) {
                if (*(int *)(*(int *)(param_1 + 0xe0) + 0x34) != 0) {
                  fn_82AAAE68(uVar16,lVar20,uVar19,aiStack_190,bVar4,bVar13,0);
                }
                if (*(int *)(*(int *)(param_1 + 0xe0) + 0x38) != 0) {
                  fn_82AAAE68(uVar16,lVar20,uVar19,aiStack_110,bVar4,bVar13,1);
                }
              }
              lVar6 = lVar6 + 1;
              lVar20 = lVar20 + uVar16;
            } while ((int)lVar6 < (int)(uint)*(ushort *)(param_1 + 0x5c));
          }
          iVar7 = 0;
        }
        iVar3 = *(int *)(param_1 + 0xe0);
        if ((int)*(uint *)(iVar3 + 0x20) <= iVar18) {
          if (*(int *)(iVar3 + 0x34) != 0) {
            fn_82AAA9E0(param_1 + 0x28,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x24)
                          ,uVar17 - *(uint *)(iVar3 + 0x20),*(undefined4 *)(param_1 + 0xd4),
                          *(undefined4 *)((int)aiStack_190 + (int)((uVar19 & 0xffffffff) << 2)),
                          param_1 + 0x7c,0);
          }
          iVar3 = *(int *)(param_1 + 0xe0);
          if ((*(int *)(iVar3 + 0x38) != 0) && ((uVar17 & 1) == 0)) {
            uVar8 = iVar18 - *(int *)(iVar3 + 0x20);
            fn_82AAA9E0(param_1 + 0x28,*(undefined4 *)(iVar3 + 0x4c),*(undefined4 *)(iVar3 + 0x24)
                          ,(longlong)((int)uVar8 >> 1) +
                           (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0),
                          *(undefined4 *)(param_1 + 0xd4),
                          *(undefined4 *)((int)aiStack_110 + (int)((uVar19 & 0xffffffff) << 2)),
                          param_1 + 0x7c,1);
          }
        }
        uVar17 = uVar17 + 1;
        iVar7 = iVar7 + 1;
        uVar19 = uVar19 + 1;
      } while ((int)uVar17 < iVar14);
    }
    if ((*(ushort *)(param_1 + 0x3e) & 0xf0) == 0x40) {
      *(undefined2 *)(param_1 + 0x5c) = 1;
    }
    iVar14 = *(int *)(param_1 + 0xe0);
    iVar7 = 0x3c;
    do {
      if (*(int *)(iVar7 + iVar14) != 0) {
        fn_82AAB348(param_1 + 0x28,iVar14 + 0x48,iVar14 + 0x34,*(undefined4 *)(param_1 + 0xd0),
                      *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(iVar14 + 0x20),
                      *(undefined4 *)(iVar14 + 0x24),*(undefined4 *)(iVar14 + 0x28));
        return lVar5;
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x45);
  }
  return lVar5;
}

