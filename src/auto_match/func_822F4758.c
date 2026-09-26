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
extern unsigned int *auStack_100;
extern unsigned int *auStack_108;
extern unsigned int *auStack_110;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_822315A0();
extern int fn_822E5FA8();
extern int fn_822E6610();
extern int fn_822F4038();
extern int fn_822F4258();
extern int fn_822F4CC8();
extern int fn_822F4E20();
extern int fn_822F4F50();
extern int fn_822F51B0();
extern int fn_822F5D28();
extern int fn_822F9B78();
extern int fn_8239C118();
extern int fn_823ACC70();
extern int fn_824D77E8();
extern int fn_82520780();
extern int fn_82560100();
extern int fn_82563CD0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_104;
extern unsigned int iStack_10c;
extern unsigned int iStack_e4;
extern unsigned int iStack_ec;
extern unsigned int iStack_f4;
extern unsigned int iStack_fc;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CA08C;
extern unsigned int lbl_831CCDA8;
extern unsigned int lbl_831CCDAC;
extern unsigned int lbl_831CCDB0;
extern unsigned int lbl_831CCE0C;
extern unsigned int lbl_831D2C68;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_120;
extern V16 loadVectorLeftIndexed128();


void fn_822F4758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  bool bVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float in_register_00010450;
  float in_register_00010454;
  float in_register_00010458;
  float in_vr69;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_120;
  undefined1 auStack_110 [4];
  int iStack_10c;
  undefined1 auStack_108 [4];
  int iStack_104;
  undefined1 auStack_100 [4];
  int iStack_fc;
  undefined1 auStack_f8 [4];
  int iStack_f4;
  undefined1 auStack_f0 [4];
  int iStack_ec;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [208];
  
  iVar5 = fn_82F6A53C();
  iVar1 = (int)param_2;
  if (lbl_831D2C68 == 0) {
    iVar6 = fn_822F4038(param_2,param_3,*(int *)(*(int *)(iVar5 + 0xc) + 0x24) == 0);
  }
  else {
    fn_822F5D28(iVar5,param_3,auStack_d0,auStack_e0,&uStack_120);
    pfVar2 = (float *)(iVar1 + 0x10U & 0xfffffff0);
    in_register_00010000 = *pfVar2;
    in_ACC = pfVar2[1];
    in_register_00010008 = pfVar2[2];
    in_vr0 = pfVar2[3];
    pfVar2 = (float *)((int)&uStack_120 + in_r0 & 0xfffffff0);
    *pfVar2 = in_register_00010000;
    pfVar2[1] = in_ACC;
    pfVar2[2] = in_register_00010008;
    pfVar2[3] = in_vr0;
    iVar6 = fn_82563CD0(auStack_d0,auStack_e0,&uStack_120);
  }
  if (((*(int *)(*(int *)(iVar5 + 0xc) + 0x24) == 0) &&
      (*(int *)(*(int *)(iVar5 + 0x10) + 0x178) == 1)) &&
     (piVar9 = *(int **)(*(int *)(iVar5 + 0x10) + 0x2e0),
     iVar7 = (**(code **)(*piVar9 + 0x6c))(piVar9,param_2), iVar7 != 0)) {
    pfVar2 = (float *)(iVar1 + 0x10U & 0xfffffff0);
    in_register_00010000 = *pfVar2;
    in_ACC = pfVar2[1];
    in_register_00010008 = pfVar2[2];
    in_vr0 = pfVar2[3];
    puVar8 = (undefined4 *)((int)param_3 + 0x30U & 0xfffffff0);
    uVar18 = puVar8[1];
    uVar19 = puVar8[2];
    uVar20 = puVar8[3];
    puVar3 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar8;
    puVar3[1] = uVar18;
    puVar3[2] = uVar19;
    puVar3[3] = uVar20;
    pfVar2 = (float *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *pfVar2 = in_register_00010000;
    pfVar2[1] = in_ACC;
    pfVar2[2] = in_register_00010008;
    pfVar2[3] = in_vr0;
  }
  uVar18 = *(undefined4 *)((int)param_3 + 0x58);
  iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 0x24);
  dVar16 = (double)lbl_821CC160;
  if (((iVar7 != 0) || (*(int *)(iVar1 + 0x1a4) == 0)) ||
     (bVar4 = true, (double)*(float *)(iVar5 + 0xb0) <= dVar16)) {
    bVar4 = false;
  }
  if ((iVar6 == 0) || (bVar4)) {
LAB_822f4ca4:
    uVar14 = 0;
  }
  else {
    dVar17 = (double)lbl_821CA460;
    if (iVar7 == 0) {
      piVar9 = (int *)fn_822E5FA8(auStack_108);
      if ((*piVar9 == 0) || (bVar4 = true, *(int *)(iVar5 + 0xc4) != 0)) {
        bVar4 = false;
      }
      if (iStack_104 != 0) {
        fn_822315A0();
      }
      if (!bVar4) goto LAB_822f4ca4;
      piVar9 = (int *)fn_822E5FA8(auStack_100,*(undefined4 *)(iVar5 + 0xc));
      dVar11 = (double)*(float *)(*piVar9 + 0x28);
      if (iStack_fc != 0) {
        fn_822315A0(iStack_fc);
      }
      piVar9 = (int *)fn_822E5FA8(auStack_f8,*(undefined4 *)(iVar5 + 0xc));
      dVar12 = (double)*(float *)(*piVar9 + 0x2c);
      if (iStack_f4 != 0) {
        fn_822315A0(iStack_f4);
      }
      piVar9 = (int *)fn_822E5FA8(auStack_f0,*(undefined4 *)(iVar5 + 0xc));
      dVar13 = (double)*(float *)(*piVar9 + 0x24);
      if (iStack_ec != 0) {
        fn_822315A0(iStack_ec);
      }
      fn_822E5FA8(auStack_e8,*(undefined4 *)(iVar5 + 0xc));
      if (iStack_e4 != 0) {
        fn_822315A0(iStack_e4);
      }
    }
    else {
      dVar11 = (double)fn_822F4E20(iVar5,uVar18,param_2);
      iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 0x24);
      if (iVar6 == 0) {
        puVar8 = (undefined4 *)fn_822F9B78(auStack_110,*(undefined4 *)(iVar5 + 0x18));
        dVar12 = (double)(**(code **)(*(int *)*puVar8 + 0x10))();
        if (iStack_10c != 0) {
          fn_822315A0();
        }
      }
      else {
        dVar12 = (double)fn_824D77E8(iVar6,uVar18);
      }
      dVar13 = (double)fn_822F4CC8(iVar5,uVar18);
      if (*(int *)(*(int *)(iVar5 + 0xc) + 0x24) == 0) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uStack_120 = CONCAT44(lbl_83265A28,(((U64)(uStack_120) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff | 0x3f80000000000000
        ;
      }
    }
    uVar14 = fn_822E6610(dVar13,dVar11,*(undefined4 *)(iVar5 + 0xc));
    iVar6 = fn_822F51B0(iVar5);
    dVar15 = dVar17;
    if (iVar6 == 0) {
      dVar15 = (double)fn_822F4F50(iVar5,param_3,param_2);
    }
    if ((*(int *)(iVar1 + 0x184) == 0) || (fVar21 = lbl_831CCDB0, dVar11 <= (double)lbl_831CA08C)) {
      fVar21 = (lbl_831CCDAC - lbl_831CCDA8) * *(float *)(iVar1 + 0x178) + lbl_831CCDA8;
    }
    fn_82520780((double)fVar21,0xffffffff83265a28);
    if (*(int *)(*(int *)(iVar5 + 0xc) + 0x24) == 0) {
      dVar17 = (double)**(float **)(iVar5 + 0x20);
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uStack_120 = (ulonglong)lbl_83265A28;
    fn_822F4258((double)(longlong)uStack_120,dVar11,dVar12,dVar13,uVar14,dVar15,dVar17,iVar5,
                  param_2);
    pfVar2 = (float *)(iVar1 + 0x10U & 0xfffffff0);
    fVar21 = *pfVar2;
    fVar22 = pfVar2[1];
    fVar23 = pfVar2[2];
    fVar24 = pfVar2[3];
    fn_823ACC70(auStack_e0,param_3);
    iVar1 = *(int *)(iVar5 + 0x10);
    loadVectorLeftIndexed128(param_2,0xb0);
    iVar6 = *(int *)(iVar1 + 0x18c);
    pfVar2 = (float *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *pfVar2 = in_register_00010450 * in_register_00010000 + fVar21;
    pfVar2[1] = in_register_00010454 * in_ACC + fVar22;
    pfVar2[2] = in_register_00010458 * in_register_00010008 + fVar23;
    pfVar2[3] = in_vr69 * in_vr0 + fVar24;
    if (iVar6 != 0) {
      fn_82560100(dVar16,*(undefined4 *)(iVar1 + 0x174),iVar1 + 0x18c,auStack_d0);
    }
    if (((iVar7 != 0) && (*(int *)(*(int *)(iVar5 + 0x10) + 0x178) == 1)) &&
       (piVar9 = *(int **)**(undefined4 **)(*(int *)(iVar5 + 0x10) + 8),
       iVar1 = (int)*(float *)(*(int *)(piVar9[4] * 4 + *piVar9) + 0x20),
       uStack_120 = (ulonglong)iVar1, lbl_831CCE0C < iVar1)) {
      uVar10 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = (int)uVar10;
      fn_8239C118(*(undefined4 *)(iVar5 + 0x10),
                   (-(ulonglong)((-uVar10 & ~uVar10 & 0xffffffff) >> 0x1f != 0) & 0xfffffffe) + 0x25
                  );
    }
    uVar14 = 1;
  }
  fn_82F6A588(uVar14);
  return;
}

