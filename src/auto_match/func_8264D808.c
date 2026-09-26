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
extern unsigned int fStack_e8;
extern unsigned int fStack_f0;
extern int fn_8264D768();
extern int fn_82F655D8();
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int iStack_ec;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195784;
extern unsigned int lbl_82195788;
extern unsigned int lbl_82195790;
extern unsigned int lbl_82195794;
extern unsigned int lbl_82195798;
extern unsigned int lbl_821957A0;
extern unsigned int lbl_821957A8;
extern unsigned int lbl_821957B0;
extern unsigned int lbl_821957B4;
extern unsigned int lbl_821957B8;
extern unsigned int lbl_821957C0;
extern unsigned int lbl_821957C4;
extern unsigned int lbl_821957C8;
extern unsigned int lbl_821957D0;
extern unsigned int lbl_821957D8;
extern unsigned int lbl_821957DC;
extern unsigned int lbl_821957E0;
extern unsigned int lbl_82195910;
extern unsigned int lbl_82195918;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831E799C;
extern unsigned int lbl_832978A8;
extern unsigned int lbl_83297D68;


void fn_8264D808(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  float fStack_f0;
  int iStack_ec;
  float fStack_e8;
  longlong lStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  longlong lStack_c0;
  
  lVar2 = fn_82F6A510();
  uVar3 = VdGetCurrentDisplayGamma(&iStack_ec,&fStack_f0);
  dVar8 = (double)fStack_f0;
  iVar6 = (uint)(lVar2 != 0) * 4;
  iVar1 = (uint)(lVar2 != 0) * 0x800;
  if ((*(int *)(&lbl_831E799C + iVar6) == iStack_ec) &&
     ((double)*(float *)(&lbl_832978A8 + iVar6) == dVar8)) {
LAB_8264da5c:
    fn_82F6A55C(&lbl_83297D68 + iVar1);
    return;
  }
  *(int *)(&lbl_831E799C + iVar6) = iStack_ec;
  *(float *)(&lbl_832978A8 + iVar6) = fStack_f0;
  iVar6 = 0;
  puVar4 = (undefined2 *)(iVar1 + -0x7cd6829a);
  dVar15 = (double)lbl_821916F4;
  dVar16 = (double)lbl_821CA460;
  dVar23 = (double)lbl_821957DC;
  dVar13 = (double)lbl_821957D8;
  dVar21 = (double)lbl_821957C4;
  dVar26 = (double)lbl_821957C0;
  dVar11 = (double)lbl_821957B4;
  dVar20 = (double)lbl_821957B0;
  dVar17 = (double)lbl_82195794;
  dVar25 = (double)lbl_82195790;
  dVar9 = (double)lbl_82195784;
  fStack_e8 = lbl_82195910;
  dStack_d8 = lbl_821957B8;
  dStack_d0 = lbl_82195788;
  dStack_c8 = lbl_82195520;
  dVar10 = lbl_821957A0;
  dVar12 = lbl_821957D0;
  dVar14 = lbl_82195918;
  dVar18 = lbl_82195798;
  uVar19 = lbl_821957A8;
  uVar22 = lbl_821957C8;
  uVar24 = lbl_821957E0;
  do {
    lStack_e0 = (longlong)iVar6;
    iVar5 = (int)lVar2;
    dVar7 = (double)((float)lStack_e0 * fStack_e8);
    if (iVar5 == 0) {
      if (dStack_d8 < dVar7) {
        uVar3 = fn_82F655D8((double)(float)((double)(float)(dVar7 + dVar26) * dVar21),uVar22);
        dVar7 = extraout_f1;
      }
      else {
        dVar7 = dVar7 * dVar11;
      }
      dVar7 = (double)(float)dVar7;
      dVar8 = (double)fStack_f0;
    }
    if (iStack_ec == 1) {
      uVar3 = fn_8264D768(dVar7,dVar8,uVar3,lVar2);
      dVar8 = extraout_f1_02;
    }
    else if ((iStack_ec == 2) || (iStack_ec != 3)) {
      if (iVar5 == 0) {
        if (dVar10 <= dVar7) {
          uVar3 = fn_82F655D8(dVar7,uVar19);
          dVar8 = (double)(float)((double)(float)extraout_f1_01 * dVar20 - dVar25);
        }
        else {
          dVar8 = (double)(float)(dVar7 * dVar15);
        }
      }
      else {
        if (dStack_d0 <= dVar7) {
          dVar7 = (double)(float)((double)(float)(dVar7 + dVar25) * dVar17);
          dVar8 = dVar18;
          goto LAB_8264d988;
        }
        dVar8 = (double)(float)(dVar7 * dVar9);
      }
    }
    else {
      if (iVar5 == 0) {
        dVar8 = (double)(float)(dVar16 / dVar8);
      }
LAB_8264d988:
      uVar3 = fn_82F655D8(dVar7,dVar8);
      dVar8 = (double)(float)extraout_f1_00;
    }
    if (iVar5 != 0) {
      if (dVar12 < dVar8) {
        uVar3 = fn_82F655D8(dVar8,uVar24);
        dVar8 = (double)(float)((double)(float)extraout_f1_03 * dVar23 - dVar26);
      }
      else {
        dVar8 = (double)(float)(dVar8 * dVar13);
      }
    }
    iVar5 = (int)(dVar8 * dVar14 + dStack_c8);
    lStack_c0 = (longlong)iVar5;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0x3ff < iVar5) {
      iVar5 = 0x3ff;
    }
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = (short)iVar5;
    if (0x3ff < iVar6) goto LAB_8264da5c;
    dVar8 = (double)fStack_f0;
  } while( true );
}

