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
#define ZEXT48(x) ((U64)((U32)(x)))
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D82CA8();
extern int fn_82D839C0();
extern int fn_82D907E8();
extern int fn_82D90A58();
extern int fn_82DA3048();
extern int fn_82DA35A0();
extern int fn_82DAEA98();
extern int fn_82DAEC58();
extern int fn_82DAF270();
extern int fn_82DBA1E0();
extern int fn_82DBCBF8();
extern int fn_82DC0920();
extern int fn_830A8AF0();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_82DA3900(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 in_r0;
  ulonglong uVar8;
  int iVar9;
  char cVar12;
  int iVar10;
  int iVar11;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  uVar8 = ZEXT48(&stack0x00000000);
  iVar9 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar9 + 4);
  if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
    *puVar2 = "LtIntegrate";
    puVar2[3] = "StInit";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 4) = puVar2 + 4;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(iVar9 + 0x1d0) = *param_2;
  *(undefined8 *)(iVar9 + 0x1d8) = param_2[1];
  uVar3 = *(uint *)(param_1 + 0xc);
  *(float *)(uVar3 + 0x2ec) = *(float *)(uVar3 + 0x300) * *(float *)(param_2 + 1);
  *(float *)(uVar3 + 0x2f0) =
       (float)(longlong)*(int *)(uVar3 + 0x2f4) * *(float *)((int)param_2 + 0xc);
  loadVectorLeftIndexed128(in_r0,(ulonglong)uVar3 + 0x2ec);
  pfVar6 = (float *)(*(int *)(param_1 + 0xc) + 0x10U & 0xfffffff0);
  fVar16 = pfVar6[1];
  fVar17 = pfVar6[2];
  fVar18 = pfVar6[3];
  pfVar7 = (float *)(uVar3 + 0x1f0 & 0xfffffff0);
  *pfVar7 = *pfVar6 * in_register_000100d0;
  pfVar7[1] = fVar16 * in_register_000100d4;
  pfVar7[2] = fVar17 * in_register_000100d8;
  pfVar7[3] = fVar18 * in_vr13;
  uVar1 = *(undefined4 *)(param_2 + 1);
  pfVar6 = (float *)(*(int *)(param_1 + 0xc) + 0x10U & 0xfffffff0);
  fVar16 = pfVar6[1];
  fVar17 = pfVar6[2];
  fVar18 = pfVar6[3];
  loadVectorLeftIndexed128(in_r0,uVar8 - 0xd0);
  pfVar7 = (float *)(uVar3 + 0x200 & 0xfffffff0);
  *pfVar7 = *pfVar6 * in_register_00010080;
  pfVar7[1] = fVar16 * in_register_00010084;
  pfVar7[2] = fVar17 * in_register_00010088;
  pfVar7[3] = fVar18 * in_vr8;
  fn_830A8AF0();
  fn_82D90A58(*(undefined4 *)(param_1 + 0xc));
  fn_82D82CA8(*(undefined4 *)(param_1 + 0xc),uVar8 - 0xd0);
  iVar9 = fn_82CE5410();
  cVar12 = (**(code **)(**(int **)(iVar9 + 0x18) + 0x20))(*(int **)(iVar9 + 0x18),uVar1);
  if (cVar12 == '\0') {
    iVar9 = fn_82D839C0(*(undefined4 *)(param_1 + 0xc));
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      return 1;
    }
    iVar9 = *(int *)(param_1 + 0xc);
    lVar13 = (ulonglong)*(uint *)(iVar9 + 0x94) - 1;
    *(int *)(iVar9 + 0x94) = (int)lVar13;
    if ((lVar13 == 0) && (*(char *)(iVar9 + 0x9c) == '\0')) {
      if (*(int *)(iVar9 + 0x8c) != 0) {
        fn_82D80C18(iVar9);
      }
      if ((*(int *)(iVar9 + 0xa4) == 1) && (*(int *)(iVar9 + 0x90) != 0)) {
        fn_82D80C30(iVar9);
      }
    }
    fn_82DAF270(*(undefined4 *)(param_1 + 0xc));
    *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  *(int *)(*(int *)(param_1 + 0xc) + 0x98) = *(int *)(*(int *)(param_1 + 0xc) + 0x98) + -1;
  iVar9 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar9 + 4);
  if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
    *puVar2 = "StActions";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
  }
  fn_82DA35A0(param_1);
  *(int *)(*(int *)(param_1 + 0xc) + 0x98) = *(int *)(*(int *)(param_1 + 0xc) + 0x98) + 1;
  iVar9 = *(int *)(param_1 + 0xc);
  lVar13 = (ulonglong)*(uint *)(iVar9 + 0x94) - 1;
  *(int *)(iVar9 + 0x94) = (int)lVar13;
  if ((lVar13 == 0) && (*(char *)(iVar9 + 0x9c) == '\0')) {
    if (*(int *)(iVar9 + 0x8c) != 0) {
      fn_82D80C18(iVar9);
    }
    if ((*(int *)(iVar9 + 0xa4) == 1) && (*(int *)(iVar9 + 0x90) != 0)) {
      fn_82D80C30(iVar9);
    }
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  fn_82DA3048((ulonglong)*(uint *)(param_1 + 0xc) + 0x1e0);
  iVar9 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar9 + 4);
  if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
    *puVar2 = "StIntegrate";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  uVar15 = (ulonglong)*(uint *)(iVar9 + 0x2c) - 1;
  if (-1 < (longlong)uVar15) {
    lVar13 = (uVar15 & 0x3fffffff) << 2;
    do {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0xc);
      iVar4 = *(int *)((int)lVar13 + *(int *)(iVar9 + 0x28));
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar10 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(undefined4 **)(iVar10 + 4);
        if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
          *puVar2 = "TtSingleObj";
          uVar5 = TBLr;
          puVar2[1] = (int)uVar5;
          *(undefined4 **)(iVar10 + 4) = puVar2 + 3;
        }
        iVar10 = fn_82DBCBF8(uVar14 + 0x1e0,uVar14 + 0x1d0,uVar14 + 0x200,
                                   *(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x4c),0xe0)
        ;
        fn_82DBA1E0(*(undefined4 *)(*(int *)(iVar4 + 0x18) + 0x78),
                          *(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x4c));
        iVar11 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(undefined4 **)(iVar11 + 4);
        if (puVar2 < *(undefined4 **)(iVar11 + 0xc)) {
          *puVar2 = &lbl_82132BC4;
          uVar5 = TBLr;
          puVar2[1] = (int)uVar5;
          *(undefined4 **)(iVar11 + 4) = puVar2 + 3;
        }
      }
      else {
        iVar10 = fn_82DC0920(uVar14 + 0x1d0,uVar14 + 0x1e0,uVar8 - 0xc0,iVar4,0,0,
                                   *(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x4c));
      }
      if (((5 < iVar10) && ((*(byte *)(iVar4 + 0x26) & 0x30) != 0)) &&
         (*(char *)(*(int *)(iVar4 + 0x18) + 0xd5) != '\0')) {
        fn_82D907E8(*(int *)(iVar4 + 0x18),iVar4);
      }
      if (*(int *)(*(int *)(param_1 + 0xc) + 400) != 0) {
        iVar10 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(undefined4 **)(iVar10 + 4);
        if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
          *puVar2 = "StIslandPostIntegrateCb";
          uVar5 = TBLr;
          puVar2[1] = (int)uVar5;
          *(undefined4 **)(iVar10 + 4) = puVar2 + 3;
        }
        fn_82DAEC58(*(undefined4 *)(param_1 + 0xc),iVar4,param_2);
      }
      uVar15 = uVar15 - 1;
      lVar13 = lVar13 + -4;
    } while (-1 < (longlong)uVar15);
  }
  iVar9 = *(int *)(param_1 + 0xc);
  lVar13 = (ulonglong)*(uint *)(iVar9 + 0x94) - 1;
  *(int *)(iVar9 + 0x94) = (int)lVar13;
  if ((lVar13 == 0) && (*(char *)(iVar9 + 0x9c) == '\0')) {
    if (*(int *)(iVar9 + 0x8c) != 0) {
      fn_82D80C18(iVar9);
    }
    if ((*(int *)(iVar9 + 0xa4) == 1) && (*(int *)(iVar9 + 0x90) != 0)) {
      fn_82D80C30(iVar9);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x178) != 0) {
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = "TtWorldPostIntegrateCb";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
    fn_82DAEA98(*(undefined4 *)(param_1 + 0xc),param_2);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
  }
  iVar9 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar9 + 4);
  if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
    *puVar2 = &lbl_8202CF7C;
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
  }
  return 0;
}

