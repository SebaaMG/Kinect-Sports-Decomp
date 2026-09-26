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
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82AB15D0();
extern int fn_82B7BC58();
extern int fn_82B7BD28();
extern int fn_82B9A7F0();
extern int fn_82B9ADF0();
extern int fn_82B9AF08();
extern int fn_82B9B018();
extern int fn_82B9B130();
extern int fn_82B9B248();
extern int fn_82B9B360();
extern int fn_82B9B478();
extern int fn_82B9CB58();
extern int fn_82B9DA38();
extern int fn_82B9DAD8();
extern int fn_82B9DB78();
extern int fn_82B9DC18();
extern int fn_82B9E4E0();
extern int fn_82B9E580();
extern int fn_82B9E620();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BC0088();
extern int fn_82BC0DD8();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC2E10();
extern int fn_82BC34D8();
extern int fn_82BC3EF8();
extern int fn_82BC4478();
extern int fn_82BC49F8();
extern int fn_82BC5538();
extern int fn_82BC5628();
extern int fn_82BC5AC0();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_820DEB24;
extern unsigned int lbl_820DEB28;
extern unsigned int lbl_820DEEB0;


void fn_82BA4998(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  undefined8 uVar5;
  float fVar7;
  undefined4 uVar8;
  char cVar13;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [29];
  
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar3 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  iVar6 = *(int *)(param_1 + 0xc);
  piVar12 = *(int **)(iVar6 + 0x5d0);
  uVar4 = (**(code **)(*piVar12 + 0x1c))(piVar12);
  fn_82B9CB58(*(undefined4 *)(param_1 + 0x10),0,uVar4,0xffffffff82b7c800,iVar6);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar4 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  fn_82B9ADF0(*(undefined4 *)(param_1 + 0x10),0,uVar4,0xffffffff82b7c800,iVar6);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar4 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  fn_82B9AF08(*(undefined4 *)(param_1 + 0x10),0,uVar4,0xffffffff82b7c800,iVar6);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar4 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  fn_82B9B018(*(undefined4 *)(param_1 + 0x10),0,uVar4,0xffffffff82b7c800,iVar6);
  iVar6 = fn_82BC5AC0(*(undefined4 *)(param_1 + 0xa8));
  if (iVar6 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0x5e1);
  }
  uVar4 = 0;
  iVar9 = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0xa8) + 0x3c);
  fVar15 = afStack_74[0];
  for (uVar14 = 1; uVar14 <= *(uint *)(iVar6 + 4); uVar14 = uVar14 + 1) {
    fVar15 = *(float *)(*(int *)(iVar6 + 8) + iVar9);
    iVar9 = iVar9 + 4;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  uVar5 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  iVar6 = fn_82B9B130(*(undefined4 *)(param_1 + 0x10),0,uVar5,0xffffffff82b7c800,iVar6);
  if (iVar6 == 0) {
    fVar7 = (float)fn_82BC24F0(0x69,*(undefined4 *)(param_1 + 0xc));
    fn_82BC2958(fVar7,0,uVar3);
    *(undefined4 *)((int)fVar7 + 0x3c) = 0;
    *(undefined4 *)((int)fVar7 + 0x54) = 0x17;
    uVar8 = lbl_820DEB24;
    *(undefined4 *)((int)fVar7 + 0x84) = lbl_820DEB28;
    *(undefined4 *)((int)fVar7 + 0x80) = uVar8;
    uVar8 = fn_82B7BC58(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)((int)fVar7 + 0xac) = uVar8;
    fn_82BA0C40(param_1,fVar7);
    fn_82BC5538(fVar15,fVar7);
    cVar13 = fn_82BC2580(fVar7);
    if (cVar13 != '\0') goto LAB_82ba514c;
    uVar5 = 0x5f7;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    uVar5 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
    iVar9 = fn_82B9B248(*(undefined4 *)(param_1 + 0x10),0,uVar5,0xffffffff82b7c800,iVar6);
    iVar6 = *(int *)(param_1 + 0xc);
    uVar5 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
    iVar10 = fn_82B9B360(*(undefined4 *)(param_1 + 0x10),0,uVar5,0xffffffff82b7c800,iVar6);
    iVar6 = *(int *)(param_1 + 0xc);
    uVar5 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
    iVar6 = fn_82B9B478(*(undefined4 *)(param_1 + 0x10),0,uVar5,0xffffffff82b7c800,iVar6);
    if (iVar9 == 1) {
      iVar6 = fn_82B9E4E0(*(undefined4 *)(param_1 + 0x10),0,afStack_74,0xffffffff82b7c800,
                            *(undefined4 *)(param_1 + 0xc));
      if (iVar6 != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dedcc,0xffffffff820deb50,0x612);
      }
      iVar6 = fn_82B9E580(*(undefined4 *)(param_1 + 0x10),0,&fStack_80,0xffffffff82b7c800,
                            *(undefined4 *)(param_1 + 0xc));
      if (iVar6 != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dedcc,0xffffffff820deb50,0x616);
      }
      dVar17 = (double)(lbl_82002AE0 / (fStack_80 - afStack_74[0]));
      iVar6 = fn_82BC24F0(0x12,*(undefined4 *)(param_1 + 0xc));
      fn_82BC2958(iVar6,0,uVar3);
      dVar16 = (double)fStack_80;
      fn_82BC34D8(dVar16,dVar16,dVar16,iVar6,param_1,1);
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined1 *)(iVar6 + 0x9a) = 1;
      *(undefined4 *)(iVar6 + 0x58) = 0x17;
      *(undefined4 *)(iVar6 + 0x88) = lbl_820DEB28;
      fn_82BA0C40(param_1,iVar6);
      fn_82BC5538(fVar15,iVar6);
      cVar13 = fn_82BC2580(iVar6);
      if (cVar13 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x622);
      }
      fVar7 = (float)fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
      fn_82BC2958(fVar7,0,uVar3);
      *(undefined1 *)((int)fVar7 + 0xa4) = 1;
      fn_82BC2958(fVar7,1,uVar3);
      fn_82BC34D8(dVar17,dVar17,dVar17,dVar17,fVar7,param_1,2);
      fn_82BA0C40(param_1,fVar7);
      fn_82BC5538(fVar15,fVar7);
      cVar13 = fn_82BC2580(fVar7);
      if (cVar13 != '\0') goto LAB_82ba514c;
      uVar5 = 0x62b;
    }
    else {
      if ((iVar10 != 1) && (fVar7 = afStack_74[0], iVar6 != 1)) goto LAB_82ba514c;
      iVar9 = fn_82B9E620(*(undefined4 *)(param_1 + 0x10),0,&fStack_78,0xffffffff82b7c800,
                            *(undefined4 *)(param_1 + 0xc));
      if (iVar9 != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dedcc,0xffffffff820deb50,0x634);
      }
      iVar9 = fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
      fn_82BC2958(iVar9,0,uVar3);
      *(undefined4 *)(iVar9 + 0x3c) = 0;
      *(undefined4 *)(iVar9 + 0x54) = 0x17;
      *(undefined4 *)(iVar9 + 0x84) = lbl_820DEB28;
      dVar16 = (double)fStack_78;
      fn_82BC34D8(dVar16,dVar16,dVar16,iVar9,param_1,2);
      fn_82BA0C40(param_1,iVar9);
      fn_82BC5538(fVar15,iVar9);
      cVar13 = fn_82BC2580(iVar9);
      if (cVar13 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x63c);
      }
      if (iVar6 == 1) {
        uVar5 = fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
        fn_82BC2958(uVar5,0,uVar3);
        fn_82BC2958(uVar5,1,uVar3);
        fn_82BC2958(uVar5,2,uVar3);
        fn_82BA0C40(param_1,uVar5);
        fn_82BC5538(fVar15,uVar5);
        cVar13 = fn_82BC2580(uVar5);
        if (cVar13 == '\0') {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x645);
        }
      }
      dVar16 = (double)fn_82F65E20(lbl_820DEEB0);
      dVar17 = (double)fn_82F65E20(lbl_82002C40);
      dVar16 = (double)(float)(dVar16 / dVar17);
      uVar5 = fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
      fn_82BC2958(uVar5,0,uVar3);
      fn_82BC2958(uVar5,1,uVar3);
      fn_82BC34D8(dVar16,dVar16,dVar16,dVar16,uVar5,param_1,2);
      fn_82BA0C40(param_1,uVar5);
      fn_82BC5538(fVar15,uVar5);
      cVar13 = fn_82BC2580(uVar5);
      if (cVar13 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x662);
      }
      uVar5 = fn_82BC24F0(0x37,*(undefined4 *)(param_1 + 0xc));
      fn_82BC2958(uVar5,0,uVar3);
      fn_82BC2958(uVar5,1,uVar3);
      fn_82BA0C40(param_1,uVar5);
      fn_82BC5538(fVar15,uVar5);
      cVar13 = fn_82BC2580(uVar5);
      if (cVar13 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x66a);
      }
      fVar7 = (float)fn_82BC24F0(0x40,*(undefined4 *)(param_1 + 0xc));
      fn_82BC2958(fVar7,0,uVar3);
      fn_82BC2958(fVar7,1,uVar3);
      fn_82BA0C40(param_1,fVar7);
      fn_82BC5538(fVar15,fVar7);
      cVar13 = fn_82BC2580(fVar7);
      if (cVar13 != '\0') goto LAB_82ba514c;
      uVar5 = 0x671;
    }
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,uVar5);
LAB_82ba514c:
  iVar6 = *(int *)(param_1 + 0xc);
  uVar5 = (**(code **)(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  iVar6 = fn_82B9A7F0(*(undefined4 *)(param_1 + 0x10),0,uVar5,0xffffffff82b7c800,iVar6);
  if (iVar6 == 1) {
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1c);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20);
    puVar11 = (undefined4 *)fn_82B7BD28(uVar8,0x3c4);
    *puVar11 = uVar8;
    if (puVar11 + 1 != (undefined4 *)0x0) {
      uVar4 = fn_82BC3EF8(puVar11 + 1,*(undefined4 *)(param_1 + 0xc));
    }
    fn_82BC2958(uVar4,0,uVar1);
    fn_82BC2958(uVar4,1,uVar2);
    fn_82BC2958(uVar4,2,uVar3);
    fn_82BC0DD8(uVar2,*(undefined4 *)(param_1 + 0x6c),uVar4);
    fn_82BC2E10(*(undefined4 *)(param_1 + 0x6c));
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x60))();
    fn_82BA0C40(param_1,uVar4);
    fn_82BC5538(*(undefined4 *)(param_1 + 0xa8),uVar4);
    cVar13 = fn_82BC2580(fVar7);
    if (cVar13 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x688);
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    puVar11 = (undefined4 *)
              fn_82BC0088(*(int *)(param_1 + 0x60),
                                *(undefined4 *)(*(int *)(param_1 + 0x60) + 4));
    *puVar11 = (int)uVar4;
  }
  else {
    fn_82B9DA38(*(undefined4 *)(param_1 + 0x10),0,afStack_74,0xffffffff82b7c800,
                  *(undefined4 *)(param_1 + 0xc));
    fn_82B9DAD8(*(undefined4 *)(param_1 + 0x10),0,&fStack_78,0xffffffff82b7c800,
                  *(undefined4 *)(param_1 + 0xc));
    fn_82B9DB78(*(undefined4 *)(param_1 + 0x10),0,&fStack_7c,0xffffffff82b7c800,
                  *(undefined4 *)(param_1 + 0xc));
    fn_82B9DC18(*(undefined4 *)(param_1 + 0x10),0,&fStack_80,0xffffffff82b7c800,
                  *(undefined4 *)(param_1 + 0xc));
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20);
    piVar12 = (int *)fn_82BC49F8(0x12,*(undefined4 *)(param_1 + 0xc));
    fn_82BC2958(piVar12,0,uVar8);
    fn_82BC2958(piVar12,1,uVar8);
    fn_82BC34D8((double)afStack_74[0],(double)fStack_78,(double)fStack_7c,(double)fStack_80,
                      piVar12,param_1,2);
    (**(code **)(*piVar12 + 0x54))(piVar12,0,3,1);
    *(undefined1 *)((int)piVar12 + 0x9a) = 1;
    fn_82BA0C40(param_1,piVar12);
    fn_82BC5628(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x3b4),*(int *)(param_1 + 0x6c),
                      piVar12);
    cVar13 = fn_82BC2580(piVar12);
    if (cVar13 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded1c,0xffffffff820deb50,0x6aa);
    }
    piVar12 = (int *)fn_82BC4478(0x14,*(undefined4 *)(param_1 + 0xc));
    fn_82BC2958(piVar12,0,uVar8);
    fn_82BC2958(piVar12,1,uVar3);
    fn_82BC2958(piVar12,2,uVar8);
    fn_82BC34D8((double)afStack_74[0],(double)fStack_78,(double)fStack_7c,(double)fStack_80,
                      piVar12,param_1,3);
    (**(code **)(*piVar12 + 0x54))(piVar12,0,3,1);
    fn_82BA0C40(param_1,piVar12);
    fn_82BC5628(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x3b4),*(int *)(param_1 + 0x6c),
                      piVar12);
    cVar13 = fn_82BC2580(piVar12);
    if (cVar13 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee98,0xffffffff820deb50,0x6b8);
    }
  }
  return;
}

