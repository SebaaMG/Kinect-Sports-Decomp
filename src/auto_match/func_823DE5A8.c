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
extern unsigned int *auStack_1030;
extern unsigned int *auStack_1830;
extern unsigned int *auStack_2030;
extern unsigned int *auStack_830;
extern int fn_82292B40();
extern int fn_82299AC8();
extern int fn_8229D5C0();
extern int fn_8229F618();
extern int fn_82358FD8();
extern int fn_8236B4F0();
extern int fn_8236B578();
extern int fn_8236C4A8();
extern int fn_823C44A0();
extern int fn_823DE9A0();
extern int fn_824BD9D8();
extern int fn_82508078();
extern unsigned int lbl_821916F4;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_8219250C;
extern unsigned int lbl_82192604;
extern unsigned int lbl_8219398C;
extern unsigned int lbl_82193994;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831df1b4;


void fn_823DE5A8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  int iVar8;
  longlong lVar7;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  ulonglong uVar12;
  ulonglong uVar14;
  undefined1 auStack_2030 [2048];
  undefined1 auStack_1830 [2048];
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2096];
  
  iVar2 = *(int *)(param_2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xe44);
  if (uVar3 == 0) {
    *(undefined4 *)(iVar2 + 0xe44) = 1;
    *(undefined4 *)(iVar2 + 0xe48) = lbl_82192480;
    iVar2 = *(int *)(**(int **)(iVar2 + 0x4b0) + 0xd4);
    fn_82358FD8(*(undefined4 *)(iVar2 + 0x1c),auStack_830,0x400,
                      lbl_8219398C);
    iVar2 = *(int *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x1220) != 0) {
      return;
    }
    fn_82299AC8(iVar2,auStack_830);
    *(float *)(iVar2 + 0x121c) = lbl_82192604;
    return;
  }
  if (uVar3 == 1) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0xe48) - param_1);
    *(float *)(iVar2 + 0xe48) = fVar1;
    if (lbl_821CC160 < fVar1) {
      return;
    }
    fn_8236B4F0(iVar2);
    uVar13 = 2;
LAB_823de928:
    *(undefined4 *)(iVar2 + 0xe44) = uVar13;
  }
  else {
    if (uVar3 < 3) {
      iVar9 = fn_8236B578(iVar2);
      if (iVar9 == 0) {
        return;
      }
      fn_823C44A0(iVar2);
      fn_823DE9A0(param_2);
      bVar6 = (((int *)**(int **)(iVar2 + 0x20))[1] - *(int *)**(int **)(iVar2 + 0x20) & 0xfffffffcU
              ) != 0;
      uVar12 = (ulonglong)*(uint *)((uint)!bVar6 * 0x84 + *(int *)(iVar2 + 0x4bc) + 0xc) -
               (ulonglong)*(uint *)((uint)bVar6 * 0x84 + *(int *)(iVar2 + 0x4bc) + 0xc);
      uVar14 = (ulonglong)((int)uVar12 >> 0x1f);
      lVar7 = (uVar12 ^ uVar14) - uVar14;
      if (lVar7 == 0) {
        if (*(int *)(iVar2 + 0x4c0) == 0) {
          uVar10 = 0xffffffff821b6878;
          goto LAB_823de8c4;
        }
      }
      else if ((int)lVar7 < 4) {
        if (*(int *)(iVar2 + 0x4c0) == 0) {
          uVar10 = 0xffffffff821b6884;
LAB_823de8c4:
          fn_82508078(*(undefined4 *)(iVar2 + 0xa4),uVar10,0);
        }
      }
      else if (*(int *)(iVar2 + 0x4c0) == 0) {
        uVar10 = 0xffffffff821b6894;
        goto LAB_823de8c4;
      }
      fn_8229F618(*(undefined4 *)(*(int *)(**(int **)(iVar2 + 0x4b0) + 0xd4) + 0xc));
      uVar11 = 4;
      uVar13 = lbl_821917B0;
    }
    else if (uVar3 == 4) {
      fVar1 = (float)((double)*(float *)(iVar2 + 0xe48) - param_1);
      *(float *)(iVar2 + 0xe48) = fVar1;
      if (lbl_821CC160 < fVar1) {
        return;
      }
      uVar3 = *(uint *)(*(int *)(iVar2 + 0x4bc) + 0xc);
      uVar4 = *(uint *)(*(int *)(iVar2 + 0x4bc) + 0x90);
      if (uVar4 < uVar3) {
        iVar9 = 0;
LAB_823de698:
        iVar8 = fn_8236C4A8(iVar2,iVar9);
        piVar5 = *(int **)(**(int **)(iVar2 + 8) + iVar9 * 4);
        uVar14 = (ulonglong)*(uint *)(piVar5[4] * 4 + *piVar5);
        if (iVar8 != 0) {
          lVar7 = fn_8236C4A8(iVar2,iVar9);
          iVar9 = *(int *)(**(int **)(iVar2 + 0x4b0) + 0xd4);
          fn_82358FD8(*(undefined4 *)(iVar9 + 0x1c),auStack_1030,0x400,0xffffffff821aa508);
          fn_8229D5C0((double)lbl_82192604,*(undefined4 *)(iVar9 + 0x14),uVar14 + 0xa8,
                            auStack_1030,0xffffffff820e975c,lVar7 != 0);
          fn_82292B40();
          *(undefined4 *)(iVar2 + 0xe48) = lbl_82192480;
          uVar13 = 5;
          goto LAB_823de928;
        }
        lVar7 = fn_8236C4A8(iVar2,iVar9);
        iVar9 = *(int *)(**(int **)(iVar2 + 0x4b0) + 0xd4);
        fn_82358FD8(*(undefined4 *)(iVar9 + 0x1c),auStack_2030,0x400,0xffffffff821aa508);
        fn_8229D5C0((double)lbl_8219250C,*(undefined4 *)(iVar9 + 0x14),uVar14 + 0xa8,
                          auStack_2030,0xffffffff820e975c,lVar7 != 0);
      }
      else {
        if (uVar3 < uVar4) {
          iVar9 = 1;
          goto LAB_823de698;
        }
        iVar9 = *(int *)(**(int **)(iVar2 + 0x4b0) + 0xd4);
        fn_82358FD8(*(undefined4 *)(iVar9 + 0x1c),auStack_1830,0x400,
                          lbl_82193994);
        iVar9 = *(int *)(iVar9 + 0x38);
        if (*(int *)(iVar9 + 0x1220) == 0) {
          fn_82299AC8(iVar9,auStack_1830);
          *(float *)(iVar9 + 0x121c) = lbl_8219250C;
        }
      }
      uVar11 = 6;
      uVar13 = uRam831df1b4;
    }
    else {
      if (uVar3 != 5) {
        if (uVar3 != 6) {
          *(undefined4 *)(iVar2 + 0xe0c) = 2;
          return;
        }
        fVar1 = (float)((double)*(float *)(iVar2 + 0xe48) - param_1);
        *(float *)(iVar2 + 0xe48) = fVar1;
        if (lbl_821CC160 < fVar1) {
          return;
        }
        uVar13 = 7;
        goto LAB_823de928;
      }
      fVar1 = (float)((double)*(float *)(iVar2 + 0xe48) - param_1);
      *(float *)(iVar2 + 0xe48) = fVar1;
      if (lbl_821CC160 < fVar1) {
        return;
      }
      fn_824BD9D8(*(undefined4 *)(iVar2 + 0x90));
      uVar11 = 6;
      uVar13 = lbl_821916F4;
    }
    *(undefined4 *)(iVar2 + 0xe48) = uVar13;
    *(undefined4 *)(iVar2 + 0xe44) = uVar11;
  }
  return;
}

