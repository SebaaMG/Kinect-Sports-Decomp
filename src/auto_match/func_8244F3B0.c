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
extern unsigned int *auStack_1060;
extern unsigned int *auStack_1860;
extern unsigned int *auStack_2060;
extern unsigned int *auStack_2860;
extern unsigned int *auStack_3060;
extern unsigned int *auStack_3080;
extern unsigned int *auStack_860;
extern int fn_82250A18();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82292268();
extern int fn_82299AC8();
extern int fn_8229A000();
extern int fn_8229F758();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_8242C1B8();
extern int fn_8242C410();
extern int fn_824329A8();
extern int fn_824356C8();
extern int fn_82436CB8();
extern int fn_82437130();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_824FBFB0();
extern int fn_824FC060();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_82560708();
extern int fn_82573530();
extern int fn_82672C20();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CECD0;
extern unsigned int lbl_831CECD4;
extern unsigned int lbl_8328D41C;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_3098;
extern unsigned int uStack_309c;
extern unsigned int uStack_30a0;


void fn_8244F3B0(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  double dVar22;
  undefined4 uStack_30a0;
  undefined4 uStack_309c;
  undefined1 uStack_3098;
  longlong lStack_3090;
  longlong lStack_3088;
  undefined1 auStack_3080 [32];
  undefined1 auStack_3060 [2048];
  undefined1 auStack_2860 [2048];
  undefined1 auStack_2060 [2048];
  undefined1 auStack_1860 [2048];
  undefined1 auStack_1060 [2048];
  undefined1 auStack_860 [2144];
  
  fn_824356C8();
  if (param_3 == 2) {
    dVar22 = (double)lbl_821CC160;
    fn_8229F758(dVar22,dVar22,dVar22,
                      *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
    iVar5 = fn_82560708();
    if (iVar5 != 0) {
      fn_8229F758(dVar22,dVar22,dVar22,
                        *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
    }
    fn_82436CB8(param_1);
    fn_82292268(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4));
    iVar5 = fn_82560708();
    if (iVar5 != 0) {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar5 + 0x54));
      fn_8229A000(*(undefined4 *)(iVar5 + 0x60));
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar5 + 0x50));
      fn_8229A000(*(undefined4 *)(iVar5 + 0x5c));
    }
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(undefined4 *)(iVar5 + 0x4c));
    fn_8229A000(*(undefined4 *)(iVar5 + 0x58));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    if ((*(int **)(param_1 + 0x40))[0x52] == 0) {
      iVar5 = **(int **)(param_1 + 0x40);
      iVar6 = *(int *)(iVar5 + 0xa0);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x40) != 1)) {
        uVar7 = *(undefined4 *)(iVar5 + 0xa4);
        uVar9 = fn_82437130(param_1,0xffffffff821ba064);
        fn_82508078(uVar7,uVar9,0);
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 0xe0) = 0;
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
  }
  if (param_3 == 7) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
  }
  if (param_3 == 8) {
    fn_8243D2D8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba084,0,0);
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(undefined4 *)(iVar5 + 0x4c));
    fn_8229A000(*(undefined4 *)(iVar5 + 0x58));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    iVar5 = fn_82560708();
    if (iVar5 == 0) {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar5 + 0x1c),auStack_860,0x400,lbl_831CECD0);
      uVar7 = *(undefined4 *)(iVar5 + 0x68);
      puVar10 = auStack_860;
    }
    else {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar5 + 0x1c),auStack_2860,0x400,lbl_831CECD0)
      ;
      fn_82299AC8(*(undefined4 *)(iVar5 + 0x6c),auStack_2860);
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar5 + 0x1c),auStack_1860,0x400,lbl_831CECD0)
      ;
      uVar7 = *(undefined4 *)(iVar5 + 0x70);
      puVar10 = auStack_1860;
    }
    fn_82299AC8(uVar7,puVar10);
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 5) = 1;
    if (*(int *)(*(int *)(param_1 + 0x44) + 0x74) != 0) {
      fn_824FC060(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x74));
    }
    *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0x90) + 0x510) = 1;
  }
  else if (param_3 == 9) {
    fn_8243D2D8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba094,0,0);
    fn_824329A8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,4);
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(undefined4 *)(iVar5 + 0x4c));
    fn_8229A000(*(undefined4 *)(iVar5 + 0x58));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    iVar5 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar5 = fn_82250A18();
    }
    cVar1 = *(char *)(iVar5 + 4);
    puVar2 = *(undefined4 **)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc);
    uStack_30a0 = 0;
    uStack_309c = 0;
    fn_82273CD8(&uStack_30a0,2);
    uStack_3098 = cVar1 == '\0';
    fn_82672C20(*puVar2,0xffffffff821ab9b8,&uStack_30a0,1);
    fn_82273C88(&uStack_30a0);
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x6c));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68));
    iVar5 = fn_82560708();
    if (iVar5 == 0) {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar5 + 0x1c),auStack_1060,0x400,lbl_831CECD4);
      uVar7 = *(undefined4 *)(iVar5 + 0x68);
      puVar10 = auStack_1060;
    }
    else {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar5 + 0x1c),auStack_3060,0x400,lbl_831CECD4);
      fn_82299AC8(*(undefined4 *)(iVar5 + 0x6c),auStack_3060);
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar5 + 0x1c),auStack_2060,0x400,lbl_831CECD4);
      uVar7 = *(undefined4 *)(iVar5 + 0x70);
      puVar10 = auStack_2060;
    }
    fn_82299AC8(uVar7,puVar10);
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(uint *)(iVar5 + 0x68) = *(uint *)(iVar5 + 0x68) | 0x80;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x114) == 1) {
      fn_824395F8((double)lbl_821CC160,
                        (ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 0x1c,2,0);
    }
    if (*(int *)(*(int *)(param_1 + 0x44) + 0x74) != 0) {
      fn_824FBFB0();
      iVar5 = fn_82573530((ulonglong)
                                *(uint *)(*(int *)(*(int *)(param_1 + 0x44) + 0x74) + 0x8c0) + 0x128
                                ,0xffffffff821ba148);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 400) = 1;
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 5) = 1;
  }
  else if (param_3 == 10) {
    fn_8243D2D8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba0a4,0,0);
    iVar5 = lbl_8328D41C;
    uVar12 = 0xffffffffffffffff;
    iVar8 = -1;
    iVar6 = 1000000;
    uVar21 = 0;
    uVar17 = *(uint *)(param_1 + 0x44);
    uVar18 = (ulonglong)uVar17;
    lVar11 = uVar18 + 200;
    if (*(int *)(uVar17 + 0xcc) - *(int *)(uVar17 + 200) >> 3 != 0) {
      lVar14 = 0;
      iVar19 = **(int **)(**(int **)(param_1 + 0x40) + 8);
      do {
        iVar15 = *(int *)lVar11 + (int)lVar14;
        uVar17 = *(uint *)(*(int *)lVar11 + (int)lVar14);
        uVar13 = (ulonglong)uVar17;
        piVar20 = *(int **)(uVar17 * 4 + iVar19);
        iVar8 = fn_822ABA88(*(undefined4 *)(piVar20[4] * 4 + *piVar20),0);
        if (((*(int *)(iVar8 + 0x24) != 0) && (iVar8 = *(int *)(iVar15 + 4), iVar8 < iVar6)) &&
           (iVar5 < iVar8)) {
          uVar12 = uVar13;
          iVar6 = iVar8;
        }
        iVar8 = (int)uVar12;
        uVar21 = uVar21 + 1;
        lVar14 = lVar14 + 8;
      } while (uVar21 < (uint)(((int *)lVar11)[1] - *(int *)lVar11 >> 3));
    }
    fVar4 = lbl_82193AF0;
    fVar3 = lbl_82005748;
    uVar17 = 0;
    if (((int *)lVar11)[1] - *(int *)lVar11 >> 3 != 0) {
      iVar19 = 0;
      do {
        piVar20 = (int *)(*(int *)lVar11 + iVar19);
        iVar15 = piVar20[1];
        if ((*piVar20 != iVar8) && (iVar5 < iVar15)) {
          lStack_3088 = (longlong)iVar6;
          iVar15 = (int)(ABS((float)(longlong)iVar15 * fVar4 - (float)lStack_3088 * fVar4) * fVar3);
          lStack_3090 = (longlong)iVar15;
          if (iVar15 < *(int *)((int)uVar18 + 0xb4)) {
            *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x170) = 0;
            iVar5 = lbl_8328D41C;
          }
        }
        uVar21 = *(uint *)(param_1 + 0x44);
        uVar18 = (ulonglong)uVar21;
        uVar17 = uVar17 + 1;
        iVar19 = iVar19 + 8;
        lVar11 = uVar18 + 200;
      } while (uVar17 < (uint)(*(int *)(uVar21 + 0xcc) - *(int *)(uVar21 + 200) >> 3));
    }
    *(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0xb8) = iVar8;
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(uint *)(iVar5 + 0x68) = *(uint *)(iVar5 + 0x68) | 0x4000;
    fn_823598B0(**(undefined4 **)(param_1 + 0x40),0);
    fn_82359928(**(undefined4 **)(param_1 + 0x40),0);
  }
  else if (param_3 == 0xc) {
    fn_8243D2D8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba0bc,0,0);
    *(float *)(*(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 100) + 8) = lbl_821CC160;
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x6c));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68));
    fn_824329A8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,5);
    lVar11 = 0;
    uVar12 = (ulonglong)**(uint **)(param_1 + 0x40);
    iVar5 = fn_8242C410(uVar12);
    if (0 < iVar5) {
      lVar14 = 0;
      lVar16 = 0;
      iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 0xb8);
      do {
        piVar20 = *(int **)(**(int **)((int)uVar12 + 8) + (int)lVar16);
        iVar6 = fn_822ABA88(*(undefined4 *)(piVar20[4] * 4 + *piVar20),0);
        if (*(int *)((int)lVar14 + iVar5 + 4) != 0) {
          iVar5 = *(int *)(param_1 + 0x40);
          uVar18 = (ulonglong)*(uint *)(iVar5 + 0x154) - (ulonglong)*(uint *)(iVar5 + 0x148);
          if (uVar18 == (longlong)(int)((uVar18 & 0xffffffff) / (ulonglong)*(uint *)(iVar5 + 0x15c))
                        * (longlong)(int)*(uint *)(iVar5 + 0x15c)) {
            fn_82526C70(auStack_3080,0x20,0xffffffff821ba0d4,
                              (ulonglong)*(byte *)(*(int *)(iVar6 + 0x1a0) + 0x44) + 1);
            uVar7 = *(undefined4 *)(**(int **)(param_1 + 0x40) + 0xa4);
            uVar9 = fn_82437130(param_1,auStack_3080);
          }
          else {
            uVar7 = *(undefined4 *)((int)uVar12 + 0xa4);
            uVar9 = 0xffffffff821ba0ec;
          }
          goto LAB_8244f5cc;
        }
        lVar11 = lVar11 + 1;
        lVar16 = lVar16 + 4;
        lVar14 = lVar14 + 0x18;
        iVar6 = fn_8242C410(uVar12);
      } while ((int)lVar11 < iVar6);
    }
  }
  else if (param_3 == 0x12) {
    uVar9 = 0xffffffff821b9f50;
    uVar7 = *(undefined4 *)(**(int **)(param_1 + 0x40) + 0xa4);
LAB_8244f5cc:
    fn_82508078(uVar7,uVar9,0);
  }
  return;
}

