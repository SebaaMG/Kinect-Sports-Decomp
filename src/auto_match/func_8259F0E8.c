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
extern unsigned int *auStack_110;
extern unsigned int *auStack_150;
extern unsigned int *auStack_190;
extern unsigned int *auStack_d0;
extern int fn_82544870();
extern int fn_8259F6D8();
extern int fn_8259FC00();
extern int fn_8259FF68();
extern int fn_825A0430();
extern int fn_825A05B8();
extern int fn_825A06B8();
extern int fn_825A0B48();
extern int fn_825B2010();
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_826312F0();
extern int fn_82631578();
extern int fn_82631C78();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263CBB0();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C0844;
extern unsigned int lbl_831C1DE4;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B2D4;
extern unsigned int lbl_8326B2D8;
extern unsigned int lbl_8326C1E0;
extern unsigned int lbl_8326C224;
extern unsigned int lbl_8326C228;
extern unsigned int lbl_8326C22C;
extern unsigned int lbl_8326C230;
extern unsigned int lbl_8326C234;
extern unsigned int lbl_8326C238;
extern unsigned int lbl_8327F970;
extern unsigned int lbl_8327F974;
extern unsigned int lbl_83297858;
extern unsigned int uRam8326c1e4;
extern unsigned int uRam8326c1e8;
extern unsigned int uRam8326c1ec;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_198;
extern unsigned int uStack_1a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8259F0E8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_r0;
  int iVar10;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_190 [4];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [208];
  
  iVar10 = fn_82F6A53C();
  iVar5 = lbl_8320A898;
  if (param_2 == 0) {
    iVar1 = *(int *)(lbl_8320A898 + 0x3148);
    uStack_198 = (longlong)*(float *)(lbl_8320A898 + 0x3224);
    uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220))) & ((U64)0xFFFFFFFF)) << 32));
    uStack_168 = (((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF);
    uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3218))) & ((U64)0xFFFFFFFF)) << 32));
    uStack_170 = (((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF);
    uStack_1a0 = (longlong)*(float *)(lbl_8320A898 + 0x321c);
    uStack_15c = *(undefined4 *)(lbl_8320A898 + 0x322c);
    uStack_160 = *(undefined4 *)(lbl_8320A898 + 0x3228);
    uStack_164 = (((U64)(uStack_198) >> 32) & 0xFFFFFFFF);
    uStack_16c = (((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF);
    if (iVar1 != 0) {
      fn_8262FE50(iVar1);
    }
    iVar2 = *(int *)(iVar5 + 0x3158);
    if (iVar2 != 0) {
      fn_8262FE50(iVar2);
    }
    auStack_190[0] = 0;
    fn_826312F0(lbl_8320A898,0,auStack_190,1);
    lVar8 = fn_825B2010(*(undefined4 *)(iVar10 + 0x1ac));
    if (lVar8 != 0) {
      fn_825A06B8(iVar10,0,param_3,param_4,iVar5);
    }
    fn_82631C78(lbl_8320A898,0,0x10,0x70);
    dVar18 = (double)lbl_821CC160;
    uStack_1a0 = CONCAT44(lbl_821CC160,lbl_821CC160);
    uStack_198 = CONCAT44(lbl_821916FC,lbl_821916FC);
    if (lbl_831C0844 == 0) {
      uVar9 = fn_8259F6D8(auStack_d0,iVar5,param_3,&uStack_1a0,&uStack_198);
      fn_82F68CC0(auStack_150,uVar9,0x34);
      fn_8259FF68(0,iVar5,param_3,param_4,auStack_150,0);
      fn_8263A1B8(lbl_8320A898,0,iVar1);
      fn_8263A508(lbl_8320A898,iVar2);
      uVar3 = lbl_8327F970;
      if (lbl_831C1DE4 != 0) {
        fn_825A0B48(iVar10,0,param_3,auStack_150,iVar5);
        uVar3 = lbl_8327F970;
      }
    }
    else {
      fn_8263A508(iVar5,0);
      fn_8263A1B8(iVar5,0,lbl_8326B2D4);
      fn_8259FC00(iVar5,param_3,0xffffffff8326b1d0);
      fn_8263A1B8(iVar5,0,lbl_8326B2D8);
      fn_8259FC00(iVar5,0xffffffff8326b1d0,0xffffffff8326b204);
      fn_8259FF68(0,iVar5,param_3,param_4,0xffffffff8326b204,0xffffffff8326b1d0);
      fn_8263A1B8(lbl_8320A898,0,iVar1);
      fn_8263A508(lbl_8320A898,iVar2);
      uVar3 = lbl_8327F974;
      if (lbl_831C1DE4 != 0) {
        fn_825A0B48(iVar10,0,param_3,0xffffffff8326b204,iVar5);
        uVar3 = lbl_8327F974;
      }
    }
    fn_82631578(iVar5,uVar3);
    uVar7 = uRam8326c1ec;
    uVar6 = uRam8326c1e8;
    uVar3 = uRam8326c1e4;
    dVar14 = (double)lbl_8326C22C;
    dVar12 = (double)(float)((double)lbl_8326C230 - dVar14);
    puVar4 = (undefined4 *)((int)&uStack_180 + in_r0 & 0xfffffff0);
    *puVar4 = lbl_8326C1E0;
    puVar4[1] = uVar3;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    dVar15 = dVar18;
    dVar16 = dVar18;
    if (dVar18 < ABS(dVar12)) {
      dVar15 = -(double)(float)(dVar14 / dVar12);
      dVar16 = (double)(float)((double)lbl_82192734 / dVar12);
    }
    dVar13 = (double)(float)((double)lbl_8326C238 - (double)lbl_8326C234);
    dVar12 = dVar18;
    dVar14 = dVar18;
    if (dVar18 < ABS(dVar13)) {
      dVar12 = -(double)(float)((double)lbl_8326C234 / dVar13);
      dVar14 = (double)(float)((double)lbl_82192734 / dVar13);
    }
    dVar17 = (double)lbl_8326C224;
    dVar13 = (double)lbl_8326C228;
    fn_82544870(auStack_110);
    fn_8263CBB0(lbl_8320A898,3,auStack_110,0x10000000);
    iVar10 = lbl_8320A898;
    bVar11 = lbl_83297858 != '\0';
    *(uint *)(lbl_8320A898 + 0x4c8) = *(uint *)(lbl_8320A898 + 0x4c8) & 0xffffe3ff | 0x800;
    *(ulonglong *)(iVar10 + 0x18) = *(ulonglong *)(iVar10 + 0x18) | 0x10000000;
    iVar10 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x4c8) = *(uint *)(lbl_8320A898 + 0x4c8) & 0xffff1fff | 0x4000;
    *(ulonglong *)(iVar10 + 0x18) = *(ulonglong *)(iVar10 + 0x18) | 0x10000000;
    iVar10 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x4c8) = *(uint *)(lbl_8320A898 + 0x4c8) & 0xfff8ffff | 0x20000;
    *(ulonglong *)(iVar10 + 0x18) = *(ulonglong *)(iVar10 + 0x18) | 0x10000000;
    *(float *)(iVar5 + 0x23b0) = (float)dVar16;
    *(float *)(iVar5 + 0x23b4) = (float)dVar15;
    *(float *)(iVar5 + 0x23b8) = (float)dVar14;
    *(float *)(iVar5 + 0x23bc) = (float)dVar12;
    *(ulonglong *)(iVar5 + 8) = *(ulonglong *)(iVar5 + 8) | 0x8000;
    *(float *)(iVar5 + 0x23c0) = (float)dVar17;
    *(float *)(iVar5 + 0x23c4) = (float)dVar13;
    *(float *)(iVar5 + 0x23c8) = (float)dVar18;
    *(float *)(iVar5 + 0x23cc) = (float)dVar18;
    *(ulonglong *)(iVar5 + 8) = *(ulonglong *)(iVar5 + 8) | 0x4000;
    *(undefined4 *)(iVar5 + 0x23d0) = uStack_180;
    *(undefined4 *)(iVar5 + 0x23d4) = uStack_17c;
    *(undefined4 *)(iVar5 + 0x23d8) = uStack_178;
    *(undefined4 *)(iVar5 + 0x23dc) = uStack_174;
    *(ulonglong *)(iVar5 + 8) = *(ulonglong *)(iVar5 + 8) | 0x4000;
    *(uint *)(iVar5 + 0x29c0) = *(uint *)(iVar5 + 0x29c0) & 0xfffffffe | (uint)bVar11;
    *(ulonglong *)(iVar5 + 0x20) = *(ulonglong *)(iVar5 + 0x20) | 0x800000000;
    if ((int)lVar8 != 0) {
      fn_82637C50(lbl_8320A898,1);
      fn_82637CE0(lbl_8320A898);
      fn_82637BC0(lbl_8320A898,0);
      fn_82637B30(lbl_8320A898,1);
    }
    fn_825A0430(&uStack_1a0,&uStack_198,iVar5);
    if ((int)lVar8 != 0) {
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
      fn_82637B30(lbl_8320A898,0);
    }
    fn_82639EA8(lbl_8320A898,&uStack_170);
    fn_825A05B8(iVar5);
    fn_82631C78(lbl_8320A898,0,0x20,0x60);
    if (iVar1 != 0) {
      fn_8262FEC8(iVar1);
    }
    if (iVar2 != 0) {
      fn_8262FEC8(iVar2);
    }
  }
  fn_82F6A588();
  return;
}

