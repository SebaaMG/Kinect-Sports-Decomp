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
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern int fn_8306E7E8();
extern int fn_8306ECA8();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_8306EE38();
extern int fn_83075D40();
extern int fn_83075D90();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_8207F4E8;
extern unsigned int lbl_82186DE0;
extern unsigned int lbl_82186E38;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_83071FF8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs61 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar3 = fn_82F6A53C();
  puVar5 = &lbl_82186DE0;
  dVar10 = (double)(float)((double)lbl_82002AE0 / extraout_f1);
  dVar13 = (double)lbl_82186E38;
  dVar14 = (double)lbl_820145BC;
  dVar11 = (double)lbl_821AAD20;
  dVar12 = (double)lbl_8207F4E8;
  pfVar6 = (float *)(iVar3 + 0x7e0);
  dVar15 = (double)lbl_82002C5C;
  lVar4 = 2;
  do {
    *(undefined1 *)(pfVar6 + 1) = 0;
    altv207_13(in_vs42,in_vs61);
    altv207_13(in_vs43,in_vs59);
    fVar16 = in_register_000103e0 - in_register_000103f0;
    fVar17 = in_register_000103e4 - in_register_000103f4;
    fVar18 = in_register_000103e8 - in_register_000103f8;
    fVar19 = in_vr62 - in_vr63;
    fVar23 = fVar19;
    fVar22 = fVar18;
    fVar21 = fVar17;
    fVar20 = fVar16;
    dVar7 = (double)fn_8306EE38();
    dVar7 = (double)(float)(dVar7 * dVar10);
    if (dVar7 <= (double)lbl_82196080) {
      *pfVar6 = (float)dVar11;
      fn_8306ECA8();
      pfVar2 = (float *)((uint)(pfVar6 + -4) & 0xfffffff0);
      *pfVar2 = fVar16;
      pfVar2[1] = fVar17;
      pfVar2[2] = fVar18;
      pfVar2[3] = fVar19;
    }
    else {
      fn_8306EDB0();
      if ((((double)(float)((double)*pfVar6 * dVar15) < dVar7) &&
          (dVar7 < (double)(float)((double)*pfVar6 * dVar14))) &&
         (dVar8 = (double)fn_8306ED98(), dVar13 < dVar8)) {
        uVar1 = *puVar5;
        uVar9 = fn_83075D40(param_3);
        fn_8306E7E8(uVar9,dVar12);
        fn_83075D90(param_3,uVar1);
        *(undefined1 *)(pfVar6 + 1) = 1;
      }
      *pfVar6 = (float)dVar7;
      pfVar2 = (float *)((uint)(pfVar6 + -4) & 0xfffffff0);
      *pfVar2 = fVar20;
      pfVar2[1] = fVar21;
      pfVar2[2] = fVar22;
      pfVar2[3] = fVar23;
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 9;
    pfVar6 = pfVar6 + 8;
  } while (lVar4 != 0);
  fn_82F6A588();
  return;
}

