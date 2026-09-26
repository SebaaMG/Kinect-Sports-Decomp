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
extern unsigned int *auStack_90;
extern int fn_82539560();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8306EEF8();
extern int fn_83075D30();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BCB9C;


void fn_830746F8(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 in_r0;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_90 [144];
  
  iVar2 = fn_82F6A548();
  iVar4 = 0;
  dVar12 = (double)lbl_82002AE0;
  if (*(char *)(iVar2 + 0xd08) != '\0') {
    lVar5 = 0;
    piVar8 = (int *)(iVar2 + 0x460);
    dVar11 = (double)lbl_82015B38;
    piVar6 = &lbl_831BCB9C;
    iVar7 = iVar2 + 0x280;
    dVar10 = (double)lbl_82079F28;
    dVar13 = extraout_f1;
    iVar4 = 0;
    do {
      if (*piVar6 != 0) {
        fn_83075D30(auStack_90,param_2,lVar5);
        pfVar1 = (float *)(iVar7 - 0x140U & 0xfffffff0);
        fVar14 = *pfVar1;
        fVar15 = pfVar1[1];
        fVar16 = pfVar1[2];
        fVar17 = pfVar1[3];
        dVar9 = (double)fn_8306EEF8();
        altv207_13(in_vs32,in_vs43);
        altv207_13(in_vs32,in_vs42);
        in_register_000103f0 = (in_register_000103f0 - fVar14) * in_register_000103e0;
        in_register_000103f4 = (in_register_000103f4 - fVar15) * in_register_000103e4;
        in_register_000103f8 = (in_register_000103f8 - fVar16) * in_register_000103e8;
        in_vr63 = (in_vr63 - fVar17) * in_vr62;
        pfVar1 = (float *)((int)in_r0 + iVar7 & 0xfffffff0);
        *pfVar1 = in_register_000103f0;
        pfVar1[1] = in_register_000103f4;
        pfVar1[2] = in_register_000103f8;
        pfVar1[3] = in_vr63;
        if ((double)(float)(dVar9 / (double)(float)(dVar13 * dVar11)) <= dVar10) {
          if (*piVar8 < 1) goto LAB_8307480c;
          iVar3 = *piVar8 + -1;
        }
        else {
          iVar3 = 3;
        }
        *piVar8 = iVar3;
        iVar4 = iVar4 + 1;
      }
LAB_8307480c:
      piVar6 = piVar6 + 3;
      lVar5 = lVar5 + 1;
      iVar7 = iVar7 + 0x10;
      piVar8 = piVar8 + 1;
    } while ((int)piVar6 < -0x7ce43374);
  }
  lVar5 = 0;
  iVar2 = iVar2 + 0x140;
  do {
    fn_83075D30(auStack_90,param_2,lVar5);
    lVar5 = lVar5 + 1;
    altv207_13(in_vs32,in_vs35);
    pfVar1 = (float *)((int)in_r0 + iVar2 & 0xfffffff0);
    *pfVar1 = in_register_000103f0;
    pfVar1[1] = in_register_000103f4;
    pfVar1[2] = in_register_000103f8;
    pfVar1[3] = in_vr63;
    iVar2 = iVar2 + 0x10;
  } while ((int)lVar5 < 0x14);
  fn_82539560((double)(longlong)iVar4,(double)lbl_82021540,(double)lbl_82015BD4,dVar12,
               (double)lbl_821AAD20);
  fn_82F6A594();
  return;
}

