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
extern int fn_82AA6330();
extern int fn_82AA66A8();
extern int fn_82AA6868();
extern int fn_82ABE9F0();
extern int fn_82AC8910();
extern int fn_82AC8ED0();
extern int fn_82AC9FE8();
extern int fn_82AD6208();
extern int fn_82ADD198();
extern int fn_82ADD610();
extern int fn_82ADD910();
extern int fn_82ADDA58();
extern int fn_82ADF288();
extern int fn_82AE0470();
extern int fn_82AE5AC8();
extern int fn_82F65FE0();
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_b0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AE4660(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar11;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar4;
  uint uVar10;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uStack_b0;
  int *apiStack_ac [3];
  int aiStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  fn_82AE0470(param_1,0,apiStack_ac,100);
  if (*(int *)(param_1 + 700) != 0) {
    cVar11 = fn_82AD6208(param_1);
    if (cVar11 != '\0') {
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      *(undefined4 *)(param_1 + 700) = 0;
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2c4) = 0;
      fn_82AA6868(param_1 + 0x3cc);
      cVar11 = fn_82AE0470(param_1,0,apiStack_ac,1);
      if (cVar11 != '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if (*(int *)(param_1 + 700) == 0) {
        return;
      }
    }
    for (uVar18 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                           0x14); ((uVar18 & 1) == 0 && (uVar18 != 0));
        uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar18 + 8) & 0x3f80) == 0x3880) {
        uVar13 = 0;
        if (*(uint *)(param_1 + 0x218) != 0) {
          puVar9 = (uint *)(param_1 + 0x160);
          do {
            if (((puVar9[-1] & 0x2000) != 0) && (uVar18 == *puVar9)) break;
            uVar13 = uVar13 + 1;
            puVar9 = puVar9 + 3;
          } while (uVar13 < *(uint *)(param_1 + 0x218));
        }
        if (*(uint *)(param_1 + 0x218) <= uVar13) {
          iVar7 = fn_82ADD198(param_1,*(undefined2 *)(uVar18 + 0x12));
          iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x2b0));
          *(uint *)(iVar7 + 0xc0) = *(uint *)(iVar7 + 0xc0) | 0x20000000;
        }
      }
    }
    if (((*(uint *)(param_1 + 0x2c) & 0x10) == 0) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2c) & 0x20) != 0)) {
      bVar3 = false;
    }
    if (bVar3) {
      fn_82AC9FE8(param_1);
      for (uVar18 = *(uint *)(param_1 + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
          uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
        if ((*(uint *)(uVar18 + 0x14) & 1) == 0) {
          uVar13 = *(uint *)(uVar18 + 0x14);
          iVar7 = uVar18 + 0x10;
        }
        else if ((*(uint *)(uVar18 + 0x1c) & 1) == 0) {
          uVar13 = *(uint *)(uVar18 + 0x1c);
          iVar7 = uVar18 + 0x18;
        }
        else {
          uVar13 = *(uint *)(uVar18 + 0x24);
          iVar7 = uVar18 + 0x20;
        }
        uVar13 = -(uint)((uVar13 & 1) == 0) & uVar13;
        do {
          if (uVar13 == 0) break;
          do {
            uVar10 = *(uint *)(uVar13 + 8);
            if ((uVar10 >> 0x1a & 1) != 0) {
              if (((uVar10 >> 0x17 & 1) != 0) && ((uVar10 & 0x1e) != 0)) {
                iVar8 = fn_82ADD610(param_1,uVar13);
                *(undefined4 *)(iVar8 + 0xc4) = 0xfffffff;
              }
              *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) & 0xfbffffff;
            }
            uVar13 = *(uint *)((uVar13 & 0xfffffffe) + 0x28);
          } while (((uVar13 & 1) == 0) && (uVar13 != 0));
          iVar8 = uVar18 + 0x20;
          if (iVar7 == iVar8) break;
          if ((iVar7 == uVar18 + 0x18) || ((*(uint *)(uVar18 + 0x1c) & 1) != 0)) {
            uVar13 = *(uint *)(uVar18 + 0x24);
          }
          else {
            uVar13 = *(uint *)(uVar18 + 0x1c);
            iVar8 = uVar18 + 0x18;
          }
          iVar7 = iVar8;
        } while ((uVar13 & 1) == 0);
      }
    }
    puVar9 = (uint *)fn_82ABE9F0(param_1,*(int *)(param_1 + 700) << 2,0);
    uVar18 = *(uint *)(param_1 + 0x2b8);
    if (uVar18 != 0) {
      puVar15 = puVar9 + -1;
      do {
        if ((*(uint *)(uVar18 + 0xc0) & 7) != 0) {
          puVar15 = puVar15 + 1;
          *puVar15 = uVar18;
          uVar16 = 0;
          uVar13 = *(uint *)(uVar18 + 0xc0);
          if (((uVar13 & 0x40000000) != 0) && (uVar10 = 0, (uVar13 & 7) != 0)) {
            iVar7 = uVar18 + 0x20;
            do {
              lVar4 = fn_82ADDA58(iVar7);
              uVar10 = uVar10 + 1;
              uVar16 = lVar4 + uVar16;
              iVar7 = iVar7 + 0x28;
            } while (uVar10 < (uVar13 & 7));
          }
          uVar6 = (ulonglong)uVar13 & 7;
          if (uVar6 < 4) {
            trapWord(6,uVar6,0);
            uVar16 = ((uVar16 & 0x3fffffff) << 2) / uVar6;
          }
          *(uint *)(uVar18 + 0xc0) =
               (uint)((uVar16 & 0xffffffff) << 3) & 0x3ff8 | uVar13 & 0xffffc007;
        }
        uVar18 = *(uint *)(uVar18 + 200);
      } while (uVar18 != 0);
    }
    fn_82F65FE0(puVar9,*(undefined4 *)(param_1 + 700),4,0xffffffff82add2d8);
    uVar16 = (ulonglong)*(uint *)(param_1 + 0x318);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (uVar16 == 0) {
      uVar16 = 0x20;
    }
    aiStack_a0[0] = param_1;
    if (uVar16 < 0x40) {
      fn_82AE5AC8(aiStack_a0,uVar16,0x40 - uVar16);
    }
    uVar18 = 0;
    if (*(int *)(param_1 + 700) != 0) {
      do {
        uVar13 = *puVar9;
        uVar16 = (ulonglong)uVar13;
        uVar10 = fn_82ADF288(param_1,uVar16,0,0,*(uint *)(uVar13 + 0xc0) & 7,0,0,aiStack_a0);
        if (uVar10 == 0xffffffff) {
          if (((*(uint *)(param_1 + 0x28) & 0x400) != 0) &&
             ((*(uint *)(param_1 + 0x34) & 0x100) == 0)) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x100;
            fn_82AA6330(param_1);
          }
          if (((*(uint *)(param_1 + 0x34) & 0x600) == 0) &&
             ((*(uint *)(param_1 + 0x2c) & 0x400000) != 0)) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x401;
            fn_82AA6330(param_1);
          }
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdea);
        }
        uVar14 = 0;
        if ((*(uint *)(uVar13 + 0xc0) & 7) != 0) {
          uVar17 = 0;
          lVar4 = uVar16 + 0x10;
LAB_82ae4a80:
          lVar12 = 0;
          uVar1 = *(uint *)((int)apiStack_ac + ((uVar17 >> 3 & 0x1ffffffc) - 4));
          do {
            uVar6 = fn_82AC8910(*(undefined4 *)lVar4,lVar12,*(undefined4 *)(param_1 + 0x2a0));
            while( true ) {
              if ((ulonglong)(*(int *)(param_1 + 0x29c) - 1) < (uVar6 & 0xffffffff)) {
                uVar14 = uVar14 + 1;
                lVar4 = lVar4 + 4;
                uVar17 = uVar17 + 2;
                if ((*(uint *)(uVar13 + 0xc0) & 7) <= uVar14) goto LAB_82ae4b94;
                goto LAB_82ae4a80;
              }
              uVar5 = fn_82ADD198(param_1,uVar6);
              uVar2 = *(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2b0));
              if (((*(uint *)(uVar2 + 0xc0) & 0x10000000) == 0) && (uVar2 != uVar16)) {
                fn_82AC8ED0((*(ulonglong *)
                                  (((uint)((uVar5 & 0xffffffff) >> 2) & 0x1ffffff8) +
                                  *(int *)(param_1 + 0x2b4)) >>
                                 ((uVar5 & 0x7fffffff) * 2 + (uVar5 & 0x7fffffe0) * -2 & 0x7f) & 3)
                                * 0x28 + (ulonglong)uVar2 + 0x20,
                                1 << (((2 << (uVar17 + 1 & 0x1f)) - 1U & uVar1 &
                                      -1 << (uVar17 & 0x1f)) >> (uVar17 & 0x1f) & 0x3f) & 0xfU |
                                uVar10 & 0xfffffff0);
                *(uint *)(uVar2 + 0xc0) = *(uint *)(uVar2 + 0xc0) | 0x40000000;
              }
              if ((uVar6 & 0xffffffff) != (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) break;
              uVar6 = 0xffffffffffffffff;
            }
            lVar12 = uVar6 + 1;
          } while( true );
        }
LAB_82ae4b94:
        uVar18 = uVar18 + 1;
        puVar9 = puVar9 + 1;
        *(uint *)(uVar13 + 0xc0) =
             ((uVar10 & 0x3f0) << 4 | 0x4000 | uStack_b0 & 0xff) << 0xe |
             *(uint *)(uVar13 + 0xc0) & 0xf0003fff;
      } while (uVar18 < *(uint *)(param_1 + 700));
    }
    iVar7 = 0;
    uVar18 = 1;
    if (1 < *(uint *)(param_1 + 0x29c)) {
      do {
        iVar8 = apiStack_ac[0][1];
        if (iVar8 == 0) {
          return;
        }
        if (iVar8 != iVar7) {
          fn_82ADD910(param_1,iVar8);
          iVar7 = iVar8;
        }
        uVar18 = uVar18 + 1;
        apiStack_ac[0] = apiStack_ac[0] + 1;
      } while (uVar18 < *(uint *)(param_1 + 0x29c));
    }
  }
  return;
}

