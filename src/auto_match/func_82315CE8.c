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
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1d0;
extern int fn_822BD278();
extern int fn_822BD338();
extern int fn_822C4448();
extern int fn_822C8C08();
extern int fn_822C8C60();
extern int fn_822CB020();
extern int fn_822FC0E0();
extern int fn_8230C220();
extern int fn_82316218();
extern int fn_82316370();
extern int fn_823169F8();
extern int fn_82316C28();
extern int fn_82317638();
extern int fn_82317ED8();
extern int fn_82318710();
extern int fn_82318980();
extern int fn_82318B38();
extern int fn_823694F8();
extern int fn_824D7EC0();
extern int fn_8255A070();
extern int fn_8288B760();
extern int fn_82F64C68();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8329EA20;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e0;
extern V16 vectorConditionalSelect();


void fn_82315CE8(double param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int in_r0;
  uint uVar10;
  longlong lVar8;
  undefined8 uVar9;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  double dVar16;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [448];
  
  cVar12 = *(char *)(param_2 + 0x5d5);
  piVar1 = *(int **)(*(int *)(param_2 + 0x10) + 0x20);
  piVar2 = (int *)*piVar1;
  if ((piVar2[1] - *piVar2 >> 2 == 0) ||
     (piVar1 = (int *)piVar1[1], bVar5 = true, piVar1[1] - *piVar1 >> 2 == 0)) {
    bVar5 = false;
  }
  iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 0x24);
  if (iVar11 == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  iVar13 = ((uint)LZCOUNT(iVar11) >> 5 ^ 1) + 1;
  if (iVar13 != *(int *)(param_2 + 0x660)) {
    *(int *)(param_2 + 0x660) = iVar13;
    *(undefined1 *)(param_2 + 0x5d6) = 0;
    *(undefined4 *)(param_2 + 0x688) = 1;
    if ((iVar11 != 0) && (*(int *)(param_2 + 0x5d0) != 0)) {
      fn_824D7EC0(*(int *)(param_2 + 0x5d0),iVar11);
    }
  }
  iVar13 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20);
  puVar14 = (undefined4 *)(iVar13 + 4);
  if (0xf < *(uint *)(iVar13 + 0x18)) {
    puVar14 = (undefined4 *)*puVar14;
  }
  iVar13 = fn_82F64C68(puVar14,0xffffffff821af0f4);
  if ((iVar13 == 0) ||
     (bVar4 = true, *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x28) != 0)) {
    bVar4 = false;
  }
  if ((*(int *)(param_2 + 0x688) == 0) || (bVar6 = true, bVar4)) {
    bVar6 = false;
  }
  if (*(int *)(param_2 + 0x660) == 1) {
    if (!bVar4) {
      if (bVar6) {
        puVar14 = (undefined4 *)(*(int *)(param_2 + 0xc) + 0x80U & 0xfffffff0);
        uVar17 = puVar14[1];
        uVar18 = puVar14[2];
        uVar19 = puVar14[3];
        puVar3 = (undefined4 *)(param_2 + 0x640U & 0xfffffff0);
        *puVar3 = *puVar14;
        puVar3[1] = uVar17;
        puVar3[2] = uVar18;
        puVar3[3] = uVar19;
      }
      fn_823169F8(param_2);
      if (*(int *)(*(int *)(param_2 + 0xc) + 0x168) == 0) {
        uVar10 = *(uint *)(*(int *)(param_2 + 0xc) + 0x16c);
      }
      else {
        uVar10 = fn_8288B760();
        uVar10 = uVar10 & 0xff;
      }
      if (uVar10 != 0) {
        fn_82316C28(param_1,param_2);
      }
    }
  }
  else if (*(int *)(param_2 + 0x660) == 2) {
    if (*(int *)(*(int *)(param_2 + 0xc) + 0x168) == 0) {
      uVar10 = *(uint *)(*(int *)(param_2 + 0xc) + 0x16c);
    }
    else {
      uVar10 = fn_8288B760();
      uVar10 = uVar10 & 0xff;
    }
    if (uVar10 == 0) {
      if (!bVar4) {
        piVar1 = *(int **)(*(int *)(param_2 + 0xc) + 0x168);
        if (piVar1 != (int *)0x0) {
          uVar17 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x114);
          lVar8 = (**(code **)(*piVar1 + 8))(piVar1);
          fn_822CB020(&uStack_1e0,lVar8 + 0xf0);
          lVar8 = (**(code **)(*piVar1 + 8))(piVar1);
          fn_822BD278(auStack_1d0,lVar8 + 0x144);
          fn_822C8C60(uVar17,1,0);
        }
      }
      uVar9 = fn_82317638(param_2,auStack_1c0);
      fn_82317ED8(param_2,auStack_1c0,uVar9);
    }
    else {
      if (!bVar4) {
        fn_82316218(param_2);
      }
      if ((!bVar5) || (*(int *)(param_2 + 0x690) != 0)) {
        fn_82316370(param_1,param_2);
      }
    }
  }
  iVar13 = *(int *)(param_2 + 0x10);
  if ((*(int *)(iVar13 + 0x58) != 0x11) && (*(int *)(iVar13 + 0x54) != 0x11)) {
    uStack_1e0 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x28);
    uStack_1dc = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x2c);
    fn_8230C220(iVar13 + 0xa18,&uStack_1e0);
  }
  fn_82318980(param_1,param_2 + 0x380);
  fn_82318B38(param_2 + 0x380);
  if (iVar11 != 0) {
    if ((*(char *)(param_2 + 0x5d5) == '\0') || (uVar15 = 0, *(char *)(param_2 + 0x5d4) != '\0')) {
      uVar15 = 1;
    }
    *(undefined1 *)(iVar11 + 0xe0) = uVar15;
  }
  dVar16 = (double)fn_822FC0E0(0xb);
  iVar11 = (*(int *)(*(int *)(param_2 + 0xc) + 0x2c) * 7 + *(int *)(*(int *)(param_2 + 0xc) + 0x28))
           * 0x40 + *(int *)(*(int *)(param_2 + 0x10) + 0x4c4);
  *(float *)(iVar11 + 0x38) = (float)dVar16;
  *(undefined4 *)(iVar11 + 0x30) = 2;
  puVar14 = (undefined4 *)((uint)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
  uVar17 = puVar14[1];
  uVar18 = puVar14[2];
  uVar19 = puVar14[3];
  vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
  puVar3 = (undefined4 *)(in_r0 + iVar11 & 0xfffffff0);
  *puVar3 = *puVar14;
  puVar3[1] = uVar17;
  puVar3[2] = uVar18;
  puVar3[3] = uVar19;
  *(undefined4 *)(iVar11 + 0x20) = 1;
  *(undefined4 *)(iVar11 + 0x34) = 0xb;
  bVar4 = *(int *)(param_2 + 0x660) != 2;
  if (((bVar4) || (*(char *)(param_2 + 0x5d5) == '\0')) || (bVar7 = true, cVar12 != '\0')) {
    bVar7 = false;
  }
  if ((!bVar6) && (!bVar7)) goto LAB_8231615c;
  if (!bVar4) {
    if (bVar7) {
      fn_822C4448(&uStack_1e0,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),1
                        ,1);
      dVar16 = (double)fn_8255A070();
      iVar11 = *(int *)(param_2 + 0xc);
      *(float *)(iVar11 + 0x254) = (float)dVar16;
      *(undefined4 *)(iVar11 + 600) = 1;
      fn_822C8C08(*(undefined4 *)(iVar11 + 0x114),0xffffffff821ace70);
    }
    else {
      *(undefined4 *)(param_2 + 0x68c) = 1;
    }
  }
  if (!bVar7) {
    if (*(int *)(*(int *)(param_2 + 0xc) + 0x1ec) == 0) {
      cVar12 = (-(*(int *)(param_2 + 0x664) != 0) & 4U) + 2;
    }
    else {
      if (*(int *)(*(int *)(param_2 + 0x10) + 0x42c) == 3) goto LAB_82316158;
      cVar12 = (-(*(int *)(param_2 + 0x664) != 0) & 5U) + 1;
    }
    fn_823694F8(*(int *)(param_2 + 0x10),cVar12);
  }
LAB_82316158:
  *(undefined4 *)(param_2 + 0x688) = 0;
LAB_8231615c:
  if ((*(int *)(param_2 + 0x690) == 0) && (*(int *)(param_2 + 0x68c) != 0)) {
    *(float *)(param_2 + 0x694) = (float)((double)*(float *)(param_2 + 0x694) + param_1);
    if ((bVar5) && (*(int *)(*(int *)(param_2 + 0xc) + 0x1ec) == 0)) {
      bVar5 = false;
      iVar11 = fn_82318710(param_2);
      if ((iVar11 != 0) &&
         (cVar12 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar11 + 0x114) + 0x20) + 4,
                                     0xffffffff821aca94), cVar12 != '\0')) {
        bVar5 = true;
      }
      if (lbl_821CA460 < *(float *)(param_2 + 0x694)) {
        bVar5 = true;
      }
      if (!bVar5) {
        return;
      }
    }
    fn_822C8C08(*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x114),0xffffffff821aca94);
    *(undefined4 *)(param_2 + 0x690) = 1;
  }
  return;
}

