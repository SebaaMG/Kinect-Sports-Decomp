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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_8c;
extern unsigned int fStack_98;
extern int fn_82520158();
extern int fn_8252D2F8();
extern int fn_8252D370();
extern int fn_8252D6E0();
extern int fn_82532F98();
extern int fn_82554860();
extern int fn_82630B08();
extern int fn_827EF828();
extern int fn_827EFAE8();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_82A1DBD8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_8228B330(undefined4 *param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  int aiStack_b0 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  piVar2 = *(int **)(param_1[param_2 * 6 + 0x187] + 0xb4);
  fn_82520158(0xffffffff821a9670,aiStack_b0,0);
  if ((param_1[param_2 * 6 + 0x188] == 0) || (param_1[param_2 * 6 + 0x189] == 0)) {
    uStack_9c = lbl_821CA460;
    fStack_98 = lbl_821CC160;
    uStack_a0 = 0x4d697850;
    fStack_8c = lbl_821CC160;
    uStack_94 = 0x20;
    uStack_90 = lbl_821917C0;
    uStack_88 = 0;
    uStack_80 = lbl_821917C0;
    uStack_84 = 0x40;
    uStack_7c = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    fn_8252D2F8(param_3,0,&uStack_a0,aiStack_b0);
    fn_8252D370(param_3);
    fn_8252D6E0(param_3,*param_1);
  }
  else if (aiStack_b0[0] != 0) {
    dVar14 = (double)lbl_821CC160;
    fStack_98 = lbl_821CC160;
    uStack_a0 = 0x4d697850;
    fStack_8c = lbl_821CC160;
    uStack_94 = 0x20;
    uStack_9c = lbl_821CA460;
    uStack_88 = 0;
    uStack_90 = lbl_821917C0;
    uStack_84 = 0x40;
    uStack_80 = lbl_821917C0;
    uStack_7c = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    fn_82554860(param_1[param_2 * 6 + 0x189],0,aiStack_b0,&uStack_a0);
    fn_827EF828(dVar14,param_1[param_2 * 6 + 0x188]);
    fn_827EFFE8(param_1[param_2 * 6 + 0x188]);
    puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))(piVar2,param_1[param_2 * 6 + 0x18a]);
    if (puVar7 != (undefined4 *)0x0) {
      dVar14 = (double)lbl_8218E8E8;
      lVar13 = 5;
      iVar5 = -0x7ce31130 - (int)puVar7;
      do {
        pfVar8 = (float *)fn_827EFAE8(param_1[param_2 * 6 + 0x188],
                                          *(uint *)(iVar5 + (int)puVar7) & 0xffff);
        lVar13 = lVar13 + -1;
        *puVar7 = (int)(longlong)((double)*pfVar8 - dVar14);
        puVar7 = puVar7 + 1;
      } while (lVar13 != 0);
    }
    piVar9 = (int *)(**(code **)(*piVar2 + 0xa4))(piVar2,param_1[param_2 * 6 + 0x18a],0);
    if (piVar9 != (int *)0x0) {
      iVar5 = *piVar9;
      iVar3 = piVar9[1];
      uVar1 = *(ushort *)(piVar9 + 2);
      iVar10 = (**(code **)(*piVar2 + 0xac))(piVar2);
      if (iVar10 == 0) {
        fn_827F0180(param_1[param_2 * 6 + 0x188],iVar5,1,0,0);
      }
      else {
        fn_827F0180(param_1[param_2 * 6 + 0x188],iVar3,1,0,0);
        (**(code **)(*(int *)piVar2[0x6d] + 0x18))();
        fn_82532F98(piVar9,0xffffffff82190260);
      }
      uVar12 = 1;
      do {
        piVar9 = (int *)(**(code **)(*piVar2 + 0xa4))(piVar2,param_1[param_2 * 6 + 0x18a],uVar12);
        if (piVar9 != (int *)0x0) {
          iVar10 = *piVar9;
          iVar4 = piVar9[1];
          if ((iVar10 != 0) && (iVar5 != 0)) {
            iVar6 = (uint)uVar1 * 0x40;
            fn_82A1DBD8(iVar10,iVar5,iVar6);
            for (uVar11 = CONCAT44(iVar10,iVar10) & 0xffffffffffffff7f; (int)uVar11 < iVar6 + iVar10
                ; uVar11 = uVar11 + 0x80) {
              dataCacheBlockFlush(uVar11);
            }
            fn_82630B08(lbl_8320A898,iVar10,iVar6,0);
          }
          if ((iVar4 != 0) && (iVar3 != 0)) {
            iVar10 = (uint)uVar1 * 0x40;
            fn_82A1DBD8(iVar4,iVar3,iVar10);
            for (uVar11 = CONCAT44(iVar4,iVar4) & 0xffffffffffffff7f; (int)uVar11 < iVar10 + iVar4;
                uVar11 = uVar11 + 0x80) {
              dataCacheBlockFlush(uVar11);
            }
            fn_82630B08(lbl_8320A898,iVar4,iVar10,0);
          }
        }
        uVar12 = uVar12 + 1;
      } while ((uVar12 & 0xffffffff) < 4);
    }
  }
  return;
}

