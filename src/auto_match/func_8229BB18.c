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
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82297868();
extern int fn_8229CB40();
extern int fn_82358FD8();
extern int fn_8249ABC0();
extern int fn_82672C20();
extern int fn_82F64CE0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;


void fn_8229BB18(undefined4 *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  undefined1 auStack_290 [8];
  double dStack_288;
  undefined1 auStack_280 [8];
  double dStack_278;
  undefined4 auStack_270 [156];
  
  bVar2 = false;
  dVar14 = (double)lbl_821CC160;
  uVar7 = 0;
  dVar15 = dVar14;
  if (param_1[4] != 0) {
    iVar4 = fn_8249ABC0();
    uVar7 = *(uint *)(*(int *)(iVar4 + 0x14) + 0x20);
    if ((int)uVar7 < 0) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x18) + 0x20);
      if (iVar4 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)(iVar4 == 0);
      }
    }
  }
  uVar9 = 0;
  pfVar8 = (float *)(param_1 + 0xd);
  dVar11 = (double)lbl_821CA460;
  do {
    fVar1 = pfVar8[3];
    dVar13 = dVar11;
    if (*(int *)((int)fVar1 + 0x5c) == 0) {
      dVar12 = (double)(float)(dVar11 - (double)(*(float *)((int)fVar1 + 0x58) /
                                                *(float *)((int)fVar1 + 0x50)));
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar12 < dVar15) << 2) | (uint)(NAN(dVar12) || NAN(dVar15)) << 2)
                    ) < 0.0) {
        dVar12 = dVar15;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(dVar12 - dVar11) < dVar15) << 2) |
                    (uint)(NAN((double)(float)(dVar12 - dVar11)) || NAN(dVar15)) << 2)) < 0.0) {
        dVar13 = dVar12;
      }
    }
    if (dVar13 != (double)pfVar8[2]) {
      if (((param_1[4] != 0) && (param_1[9] == 0)) && (*(int *)((int)fVar1 + 0x5c) != 0)) {
        fn_82358FD8(param_1[0x13],auStack_270,0x100,0xffffffff821aaf7c);
        if (uVar9 == uVar7) {
          param_1[9] = 1;
          uVar3 = fn_82F64CE0(auStack_270);
          fn_82297868(param_1 + 0x1c,auStack_270,uVar3);
          puVar5 = param_1 + 0x23;
          if (7 < (uint)param_1[0x28]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          puVar6 = auStack_270;
        }
        else {
          param_1[9] = 2;
          uVar3 = fn_82F64CE0(auStack_270);
          fn_82297868(param_1 + 0x23,auStack_270,uVar3);
          puVar6 = param_1 + 0x1c;
          if (7 < (uint)param_1[0x21]) {
            puVar6 = (undefined4 *)*puVar6;
          }
          puVar5 = auStack_270;
        }
        fn_8229CB40(param_1,puVar6,puVar5);
        dVar11 = (double)lbl_821CA460;
      }
      bVar2 = true;
    }
    uVar9 = uVar9 + 1;
    pfVar8 = pfVar8 + 2;
    *pfVar8 = (float)dVar13;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar13 - dVar14) < dVar15) << 2) |
                  (uint)(NAN((double)(float)(dVar13 - dVar14)) || NAN(dVar15)) << 2)) < 0.0) {
      dVar13 = dVar14;
    }
    dVar14 = dVar13;
  } while (uVar9 < 2);
  if (bVar2) {
    if (param_1[4] == 0) {
      uStack_2a0 = 0;
      uStack_29c = 0;
      fn_82273CD8(&uStack_2a0,3);
      dStack_298 = dVar13;
      fn_82672C20(*param_1,0xffffffff821ab008,&uStack_2a0,1);
      fn_82273C88(&uStack_2a0);
    }
    else {
      puVar6 = &uStack_29c;
      lVar10 = 2;
      dVar15 = (double)(float)param_1[uVar7 * -2 + 0x11];
      dVar14 = (double)(float)param_1[uVar7 * 2 + 0xf];
      do {
        puVar6[3] = 0;
        puVar6 = puVar6 + 4;
        *puVar6 = 0;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_82273CD8(auStack_290,3);
      dStack_288 = dVar14;
      fn_82273CD8(auStack_280,3);
      dStack_278 = dVar15;
      fn_82672C20(*param_1,0xffffffff821ab008,auStack_290,2);
      puVar6 = auStack_270;
      lVar10 = 1;
      do {
        puVar6 = puVar6 + -4;
        fn_82273C88(puVar6);
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
  }
  return;
}

