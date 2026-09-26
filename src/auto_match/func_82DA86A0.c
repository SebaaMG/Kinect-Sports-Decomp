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
#define TBLr 0
extern unsigned int *auStack_3110;
extern unsigned int fStack_3124;
extern unsigned int fStack_3128;
extern unsigned int fStack_312c;
extern unsigned int fStack_3130;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_f0;
extern int fn_82CE81B8();
extern int fn_82CE81C8();
extern int fn_82CE88C8();
extern int fn_82D00FB0();
extern int fn_82D7C120();
extern int fn_82D7D528();
extern int fn_82D80B90();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C58();
extern int fn_82D80C90();
extern int fn_82D839C0();
extern int fn_82D8FC48();
extern int fn_82DA7E68();
extern int fn_82DAEB78();
extern int fn_82DAF5A0();
extern int fn_82DB0430();
extern int fn_82DB06D0();
extern int fn_82DB61C8();
extern int fn_83088640();
extern unsigned int iStack_311c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;
extern unsigned int uStack_a0;


int fn_82DA86A0(int *param_1,ulonglong param_2,int *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  float fStack_3130;
  float fStack_312c;
  float fStack_3128;
  float fStack_3124;
  undefined1 *puStack_3120;
  int iStack_311c;
  undefined1 auStack_3110 [12320];
  float fStack_f0;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_a0;
  
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = "TtPhysics";
    uVar12 = TBLr;
    puVar2[1] = (int)uVar12;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  fn_82D80C58(param_1[3]);
  uVar12 = 0;
  if (((param_2 & 0xffffffff) != 0) && (param_3 != (int *)0x0)) {
    uVar12 = fn_82CE81B8(param_2);
    fn_82CE88C8(param_2,1);
    fn_82CE81C8(param_2,2);
    (**(code **)(*param_3 + 0xc))(param_3,param_2,0xb);
  }
  lVar11 = (ulonglong)*(uint *)(param_1[3] + 0x2c) - (ulonglong)(uint)param_1[0x30];
  if (1 < (int)lVar11) {
    fn_82D00FB0(((ulonglong)(uint)param_1[0x30] & 0x3fffffff) * 4 +
                      (ulonglong)*(uint *)(param_1[3] + 0x28),0,lVar11 + -1,0xffffffff82da7e38);
  }
  iVar7 = param_1[0x30];
  if (iVar7 < *(int *)(param_1[3] + 0x2c)) {
    iVar9 = iVar7 << 2;
    do {
      iVar8 = iVar7 + 1;
      piVar13 = (int *)(*(int *)(param_1[3] + 0x28) + iVar9);
      iVar9 = iVar9 + 4;
      *(short *)(*piVar13 + 0x20) = (short)iVar7;
      iVar7 = iVar8;
    } while (iVar8 < *(int *)(param_1[3] + 0x2c));
  }
  fn_82D80B90(param_1[3]);
  dVar17 = (double)lbl_821AAD20;
  if ((ulonglong)(uint)param_1[0x26] + (ulonglong)(uint)param_1[0x1c] != 0) {
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = "LtInterIsland";
      puVar2[3] = "Stduplicates";
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 4;
    }
    piVar13 = param_1 + 0x25;
    piVar14 = param_1 + 0x1b;
    fn_83088640(piVar14,piVar13);
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = "StsortPairs";
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
    }
    fn_82DA7E68(piVar14);
    fn_82DA7E68(piVar13);
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = "StaddAgt";
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
    }
    fStack_d0 = (float)dVar17;
    iVar7 = 0;
    fStack_cc = (float)dVar17;
    iStack_311c = 0;
    dVar18 = (double)lbl_82134508;
    fStack_f0 = lbl_82134508;
    if (0 < param_1[0x1c]) {
      iVar9 = 0;
      do {
        iVar8 = *(int *)(iVar9 + *piVar14);
        iVar16 = ((int *)(iVar9 + *piVar14))[1];
        iVar8 = *(char *)(iVar8 + 5) + iVar8;
        iVar16 = *(char *)(iVar16 + 5) + iVar16;
        iVar15 = *(char *)(iVar8 + 0x10) + iVar8;
        iVar10 = *(int *)(iVar15 + 0xcc);
        if (iVar10 != *(int *)(*(char *)(iVar16 + 0x10) + iVar16 + 0xcc)) {
          fn_82D8FC48(param_1[3]);
          iVar10 = *(int *)(iVar15 + 0xcc);
        }
        iVar15 = **(int **)(param_1[3] + 0x78);
        cVar1 = *(char *)(*(char *)(iVar8 + 0x1a) * 10 + (int)*(char *)(iVar16 + 0x1a) + iVar15 +
                         0x1bb0);
        iStack_311c = iVar10;
        if (cVar1 != '\0') {
          (*(int **)(param_1[3] + 0x78))[5] = *(int *)(cVar1 * 0x40 + iVar15 + 0x1c30);
          iVar8 = fn_82DB0430(iVar8,iVar16);
          if (iVar8 != 0) {
            puStack_3120 = auStack_3110;
            uVar3 = *(undefined4 *)(iVar8 + 0x10);
            uVar4 = *(undefined4 *)(iVar8 + 0x14);
            piVar5 = *(int **)(param_1[3] + 0x78);
            iVar16 = *(char *)(iVar8 + 0xc) * 0x40 + *piVar5;
            piVar5[0x18] = iVar16 + 0x1c20;
            piVar5[5] = *(int *)(iVar16 + 0x1c30);
            fStack_f0 = (float)dVar18;
            uStack_a0 = 0;
            fn_82D7D528(iVar8,piVar5,&puStack_3120,*(undefined4 *)(iVar8 + 8));
            if (puStack_3120 != auStack_3110) {
              (**(code **)(**(int **)(iVar8 + 8) + 0x18))
                        (*(int **)(iVar8 + 8),uVar3,uVar4,piVar5,&puStack_3120);
            }
            if ((double)fStack_f0 != dVar18) {
              RtlEnterCriticalSection(param_1 + 0x40);
              fn_82DB61C8(param_1,&puStack_3120,iVar8);
              RtlLeaveCriticalSection(param_1 + 0x40);
            }
          }
        }
        if (lbl_8323B520 == 1) break;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 8;
      } while (iVar7 < param_1[0x1c]);
    }
    param_1[0x1c] = 0;
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = "StremoveAgt";
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
    }
    iVar7 = 0;
    if (0 < param_1[0x26]) {
      iVar9 = 0;
      do {
        iVar8 = *(int *)(iVar9 + *piVar13);
        iVar16 = ((int *)(iVar9 + *piVar13))[1];
        iVar8 = fn_82D7C120(*(char *)(iVar8 + 5) + iVar8,*(char *)(iVar16 + 5) + iVar16);
        if (iVar8 != 0) {
          fn_82DB06D0();
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 8;
      } while (iVar7 < param_1[0x26]);
    }
    param_1[0x26] = 0;
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = &lbl_8202CF7C;
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  iVar7 = param_1[3];
  param_1[6] = (int)((float)param_1[7] + (float)param_1[6]);
  lVar11 = (ulonglong)*(uint *)(iVar7 + 0x94) - 1;
  *(int *)(iVar7 + 0x94) = (int)lVar11;
  if ((lVar11 == 0) && (*(char *)(iVar7 + 0x9c) == '\0')) {
    if (*(int *)(iVar7 + 0x8c) != 0) {
      fn_82D80C18(iVar7);
    }
    if ((*(int *)(iVar7 + 0xa4) == 1) && (*(int *)(iVar7 + 0x90) != 0)) {
      fn_82D80C30(iVar7);
    }
  }
  iVar7 = 0;
  if (lbl_8323B520 == 1) {
    iVar7 = 2;
    param_1[6] = (int)((float)param_1[6] - (float)param_1[7]);
    fn_82D80C90(param_1[3]);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
  }
  else {
    if (*(int *)(param_1[3] + 0x184) != 0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar9 + 4);
      if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
        *puVar2 = "TtPostCollideCB";
        uVar6 = TBLr;
        puVar2[1] = (int)uVar6;
        *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
      }
      fStack_312c = (float)param_1[6];
      fStack_3130 = fStack_312c - (float)param_1[7];
      fStack_3128 = fStack_312c - fStack_3130;
      if ((double)fStack_3128 != dVar17) {
        dVar17 = (double)(float)((double)lbl_82002AE0 / (double)fStack_3128);
      }
      fStack_3124 = (float)dVar17;
      fn_82DAEB78(param_1[3],&fStack_3130);
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar9 + 4);
      if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
        *puVar2 = &lbl_82132BC4;
        uVar6 = TBLr;
        puVar2[1] = (int)uVar6;
        *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
      }
    }
    fn_82D80B90(param_1[3]);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
    if (*(char *)(param_1[3] + 0xe4) != '\0') {
      param_1[0x32] = (int)param_2;
    }
    fn_82D80C90();
    (**(code **)(*param_1 + 0x18))(param_1);
    param_1[0x32] = 0;
    if (lbl_8323B520 == 1) {
      iVar7 = 3;
    }
  }
  if (param_3 != (int *)0x0) {
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = "TtWaitForWorkerThreads";
      uVar6 = TBLr;
      puVar2[1] = (int)uVar6;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
    fn_82CE88C8(param_2,0);
    fn_82CE81C8(param_2,uVar12);
    (**(code **)(*param_3 + 0x10))(param_3);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar12 = TBLr;
      puVar2[1] = (int)uVar12;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
  }
  param_1[10] = iVar7;
  if ((iVar7 != 0) && (iVar7 = fn_82D839C0(param_1[3]), iVar7 != 0)) {
    fn_82DAF5A0(param_1[3]);
  }
  return param_1[10];
}

