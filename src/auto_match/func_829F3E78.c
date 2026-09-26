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
extern unsigned int *auStack_140;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern int fn_829F2758();
extern int fn_829F2968();
extern int fn_829F3670();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82006848;
extern unsigned int lbl_82021534;
extern unsigned int lbl_82186E74;


void fn_829F3E78(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  ushort uVar5;
  undefined8 in_r0;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs51 [16];
  undefined1 in_vs54 [16];
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined1 auStack_140 [16];
  longlong lStack_130;
  int aiStack_120 [24];
  int aiStack_c0 [48];
  
  iVar6 = fn_82F6A548();
  iVar3 = (int)param_4;
  lVar11 = param_4 + 0x5c;
  param_4 = param_4 + 0x58;
  uVar5 = *(ushort *)((*(int *)(iVar3 + 0x5c) * (int)param_2 + *(int *)(iVar3 + 0x58)) * 2 + iVar6)
          >> 3;
  uVar12 = (uint)uVar5;
  if ((0x13 < (int)(uVar12 - *(int *)(iVar3 + 0x60))) || (uVar5 == 0)) {
    dVar18 = (double)lbl_82006848;
    fn_829F3670((double)(longlong)*(int *)(iVar3 + 0x58),
                      (double)(longlong)*(int *)(iVar3 + 0x5c),
                      (double)(float)((double)(longlong)(int)uVar12 * dVar18));
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs54);
    in_register_000103f0 = in_register_000103e0 - in_register_000103f0;
    in_register_000103f4 = in_register_000103e4 - in_register_000103f4;
    in_register_000103f8 = in_register_000103e8 - in_register_000103f8;
    in_vr63 = in_vr62 - in_vr63;
    altv300_27(in_vs32,in_vs42);
    altv300_29(in_vs41,in_vs51);
    dVar19 = (double)(fStack_160 * fStack_160 + fStack_158 * fStack_158 + fStack_15c * fStack_15c);
    fn_82F691F0(aiStack_120,0,0x80);
    piVar13 = (int *)param_4;
    fn_829F2968(aiStack_120,iVar6,param_2,*(undefined8 *)piVar13,
                      (ulonglong)*(uint *)(iVar3 + 0x60) << 0x20,*(undefined2 *)(param_3 + 0x144),2)
    ;
    if (uVar5 == 0) {
      uVar12 = 4999;
    }
    iVar14 = -1;
    iVar8 = 0;
    puVar9 = (uint *)(aiStack_120 + 2);
    dVar16 = (double)lbl_82186E74;
    piVar7 = aiStack_c0;
    dVar17 = (double)lbl_82021534;
    do {
      if (2 < *piVar7) {
        uVar1 = *puVar9;
        if ((int)uVar1 < (int)uVar12) {
          lStack_130 = (longlong)(int)puVar9[-1];
          fn_829F3670((double)(longlong)(int)puVar9[-2],(double)lStack_130,
                            (double)(float)((double)uVar1 * dVar18));
          altv207_13(in_vs32,in_vs54);
          altv207_13(in_vs32,in_vs43);
          in_register_000103f0 = in_register_000103f0 - in_register_000103e0;
          in_register_000103f4 = in_register_000103f4 - in_register_000103e4;
          in_register_000103f8 = in_register_000103f8 - in_register_000103e8;
          in_vr63 = in_vr63 - in_vr62;
          pfVar4 = (float *)((uint)(auStack_140 + (int)in_r0) & 0xfffffff0);
          *pfVar4 = in_register_000103f0;
          pfVar4[1] = in_register_000103f4;
          pfVar4[2] = in_register_000103f8;
          pfVar4[3] = in_vr63;
          altv300_27(in_vs32,in_vs41);
          altv300_29(in_vs40,in_vs51);
          if ((dVar17 < (double)(float)((double)(fStack_160 * fStack_160 +
                                                fStack_158 * fStack_158 + fStack_15c * fStack_15c) /
                                       dVar19)) ||
             ((double)(float)((double)(*(float *)(param_3 + 0x140) * *(float *)(param_3 + 0x140)) *
                             dVar16) < dVar19)) {
            iVar14 = iVar8;
            uVar12 = uVar1;
          }
        }
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
      puVar9 = puVar9 + 3;
    } while (iVar8 < 8);
    if (iVar14 != -1) {
      iVar8 = aiStack_120[iVar14 * 3 + 1];
      iVar10 = aiStack_120[iVar14 * 3 + 2];
      *piVar13 = aiStack_120[iVar14 * 3];
      *(int *)(iVar3 + 0x5c) = iVar8;
      *(int *)(iVar3 + 0x60) = iVar10;
      fn_829F2758(param_4,lVar11);
    }
    iVar14 = 0;
    do {
      fn_82F691F0(aiStack_120,0,0x80);
      fn_829F2968(aiStack_120,iVar6,param_2,*(undefined8 *)piVar13,
                        (ulonglong)*(uint *)(iVar3 + 0x60) << 0x20,*(undefined2 *)(param_3 + 0x144),
                        1);
      uVar12 = (uint)(*(ushort *)(((int)param_2 * *(int *)lVar11 + *piVar13) * 2 + iVar6) >> 3);
      if (uVar12 == 0) {
        uVar12 = 4999;
      }
      iVar8 = -1;
      iVar10 = 0;
      puVar9 = (uint *)(aiStack_120 + 2);
      piVar7 = aiStack_c0;
      lVar15 = 8;
      do {
        if ((2 < *piVar7) && ((int)*puVar9 < (int)uVar12)) {
          iVar8 = iVar10;
          uVar12 = *puVar9;
        }
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
        puVar9 = puVar9 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if (iVar8 == -1) break;
      lStack_130 = (longlong)aiStack_120[iVar8 * 3 + 2];
      fn_829F3670((double)(longlong)aiStack_120[iVar8 * 3],
                        (double)(longlong)aiStack_120[iVar8 * 3 + 1],
                        (double)(float)((double)lStack_130 * dVar18));
      altv207_13(in_vs32,in_vs54);
      altv207_13(in_vs32,in_vs43);
      in_register_000103f0 = in_register_000103f0 - in_register_000103e0;
      in_register_000103f4 = in_register_000103f4 - in_register_000103e4;
      in_register_000103f8 = in_register_000103f8 - in_register_000103e8;
      in_vr63 = in_vr63 - in_vr62;
      pfVar4 = (float *)((uint)(auStack_140 + (int)in_r0) & 0xfffffff0);
      *pfVar4 = in_register_000103f0;
      pfVar4[1] = in_register_000103f4;
      pfVar4[2] = in_register_000103f8;
      pfVar4[3] = in_vr63;
      altv300_27(in_vs32,in_vs41);
      altv300_29(in_vs40,in_vs51);
      if ((dVar17 < (double)(float)((double)(fStack_160 * fStack_160 +
                                            fStack_158 * fStack_158 + fStack_15c * fStack_15c) /
                                   dVar19)) ||
         ((double)(float)((double)(*(float *)(param_3 + 0x140) * *(float *)(param_3 + 0x140)) *
                         dVar16) < dVar19)) {
        iVar10 = aiStack_120[iVar8 * 3 + 1];
        iVar2 = aiStack_120[iVar8 * 3 + 2];
        *piVar13 = aiStack_120[iVar8 * 3];
        *(int *)(iVar3 + 0x5c) = iVar10;
        *(int *)(iVar3 + 0x60) = iVar2;
        fn_829F2758(param_4,lVar11);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
  }
  fn_82F6A594();
  return;
}

