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
extern int fn_82BA05E8();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC5538();
extern int fn_82BC59C8();
extern unsigned int uStack_a0;


void fn_82BB3490(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uStack_a0;
  
  uVar13 = (ulonglong)uStack_a0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_6 + 4) = 0;
  *(undefined4 *)(param_7 + 4) = 0;
  iVar10 = 0;
  for (uVar14 = 1; uVar14 <= *(uint *)(*(int *)(param_2 + 0x38) + 4); uVar14 = uVar14 + 1) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x38) + 8) + iVar10);
    iVar4 = fn_82BC59C8(iVar5,param_2);
    uVar1 = *(uint *)(param_1 + 0x864);
    uVar13 = (ulonglong)uVar1;
    for (piVar12 = *(int **)(iVar5 + 0x1c); piVar12[2] != 0; piVar12 = (int *)piVar12[2]) {
      if ((((piVar12[0x39] & 1U) != 0) &&
          (iVar5 = (**(code **)(*piVar12 + 0x2c))(piVar12), iVar5 != 0)) &&
         ((iVar18 = *(int *)((iVar4 + 0x3a) * 4 + iVar5),
          *(int *)(iVar5 + 0x38) != *(int *)(iVar18 + 0x38) ||
          (*(int *)(iVar5 + 0x50) != *(int *)(iVar18 + 0x50))))) {
        if ((int)uVar1 < (int)*(uint *)(iVar5 + 0x37c)) {
          uVar16 = (*(uint *)(iVar5 + 0x37c) - uVar13) - 1;
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_7,*(undefined4 *)(param_7 + 4));
          *piVar6 = iVar5;
          uVar16 = (ulonglong)*(uint *)(param_7 + 4) - 1;
          *(uint *)(iVar5 + 0x37c) = (int)uVar16 + uVar1 + 1;
        }
        if ((int)uVar1 < (int)*(uint *)(iVar18 + 0x37c)) {
          uVar17 = (*(uint *)(iVar18 + 0x37c) - uVar13) - 1;
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_7,*(undefined4 *)(param_7 + 4));
          *piVar6 = iVar18;
          uVar17 = (ulonglong)*(uint *)(param_7 + 4) - 1;
          *(uint *)(iVar18 + 0x37c) = (int)uVar17 + uVar1 + 1;
        }
        iVar5 = (int)uVar16;
        piVar6 = (int *)fn_82BC0088(param_4,*(undefined4 *)(param_4 + 4));
        *piVar6 = (int)((uVar17 & 0xffffffff) << 0x10) + iVar5;
        iVar18 = (int)uVar17;
        if ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(param_5 + 4)) {
          piVar6 = (int *)(iVar18 * 4 + *(int *)(param_5 + 8));
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_5,uVar17);
        }
        *piVar6 = iVar18;
        if ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(param_5 + 4)) {
          piVar6 = (int *)(iVar5 * 4 + *(int *)(param_5 + 8));
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_5,uVar16);
        }
        *piVar6 = iVar5;
        if ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(param_3 + 4)) {
          puVar7 = (undefined1 *)(iVar18 * 4 + *(int *)(param_3 + 8));
        }
        else {
          puVar7 = (undefined1 *)fn_82BC0088(param_3,uVar17);
        }
        *puVar7 = 1;
      }
    }
    iVar10 = iVar10 + 4;
  }
  uVar16 = (ulonglong)*(uint *)(param_4 + 4) - 1;
  if (-1 < (longlong)uVar16) {
    lVar15 = (uVar16 & 0x3fffffff) << 2;
    do {
      if ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(param_4 + 4)) {
        puVar8 = (uint *)(*(int *)(param_4 + 8) + (int)lVar15);
      }
      else {
        puVar8 = (uint *)fn_82BC0088(param_4,uVar16);
      }
      uVar14 = *puVar8;
      if ((uVar14 & 0xffff) < *(uint *)(param_3 + 4)) {
        pcVar9 = (char *)((uVar14 & 0xffff) * 4 + *(int *)(param_3 + 8));
      }
      else {
        pcVar9 = (char *)fn_82BC0088(param_3);
      }
      if (*pcVar9 != '\x01') {
        puVar8 = (uint *)fn_82BC0088(param_6,*(undefined4 *)(param_6 + 4));
        *puVar8 = uVar14;
        fn_82BBFFC8(param_4,uVar16);
      }
      uVar16 = uVar16 - 1;
      lVar15 = lVar15 + -4;
    } while (-1 < (longlong)uVar16);
  }
  do {
    if (*(int *)(param_6 + 4) == 0) {
      if (*(int *)(param_4 + 4) == 0) {
        *(int *)(param_1 + 0x864) = *(int *)(param_1 + 0x864) + *(int *)(param_7 + 4);
        return;
      }
    }
    else {
      do {
        uVar16 = (ulonglong)*(uint *)(param_6 + 4) - 1;
        if ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(param_6 + 4)) {
          puVar8 = (uint *)((int)uVar16 * 4 + *(int *)(param_6 + 8));
        }
        else {
          puVar8 = (uint *)fn_82BC0088(param_6,uVar16);
        }
        uVar14 = *puVar8;
        uVar1 = (int)uVar14 >> 0x10;
        uVar3 = uVar14 & 0xffff;
        fn_82BBFFC8(param_6,uVar16);
        if (uVar3 < *(uint *)(param_7 + 4)) {
          piVar12 = (int *)((uVar14 & 0xffff) * 4 + *(int *)(param_7 + 8));
        }
        else {
          piVar12 = (int *)fn_82BC0088(param_7,uVar3);
        }
        uVar2 = *(undefined4 *)(*piVar12 + 0x38);
        if (uVar1 < *(uint *)(param_5 + 4)) {
          puVar8 = (uint *)(uVar1 * 4 + *(int *)(param_5 + 8));
        }
        else {
          puVar8 = (uint *)fn_82BC0088(param_5,uVar1);
        }
        uVar14 = *puVar8;
        iVar10 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(iVar10 + 0x50) = 0;
        *(undefined4 *)(iVar10 + 0x38) = uVar2;
        if (uVar14 < *(uint *)(param_7 + 4)) {
          puVar11 = (undefined4 *)(uVar14 * 4 + *(int *)(param_7 + 8));
        }
        else {
          puVar11 = (undefined4 *)fn_82BC0088(param_7,uVar14);
        }
        fn_82BA05E8(iVar10,1,*puVar11);
        fn_82BC5538(param_2,iVar10);
        if (uVar1 < *(uint *)(param_5 + 4)) {
          puVar8 = (uint *)(uVar1 * 4 + *(int *)(param_5 + 8));
        }
        else {
          puVar8 = (uint *)fn_82BC0088(param_5,uVar1);
        }
        *puVar8 = uVar3;
        uVar16 = (ulonglong)*(uint *)(param_4 + 4) - 1;
        if (-1 < (longlong)uVar16) {
          lVar15 = (uVar16 & 0x3fffffff) << 2;
          do {
            if ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(param_4 + 4)) {
              puVar8 = (uint *)(*(int *)(param_4 + 8) + (int)lVar15);
            }
            else {
              puVar8 = (uint *)fn_82BC0088(param_4,uVar16);
            }
            uVar14 = *puVar8;
            if (uVar1 == (uVar14 & 0xffff)) {
              puVar8 = (uint *)fn_82BC0088(param_6,*(undefined4 *)(param_6 + 4));
              *puVar8 = uVar14;
              fn_82BBFFC8(param_4,uVar16);
              break;
            }
            uVar16 = uVar16 - 1;
            lVar15 = lVar15 + -4;
          } while (-1 < (longlong)uVar16);
        }
      } while (*(int *)(param_6 + 4) != 0);
    }
    uVar16 = (ulonglong)*(uint *)(param_4 + 4);
    if (uVar16 != 0) {
      uVar17 = uVar16 - 1;
      if ((uVar17 & 0xffffffff) < uVar16) {
        puVar8 = (uint *)((int)uVar17 * 4 + *(int *)(param_4 + 8));
      }
      else {
        puVar8 = (uint *)fn_82BC0088(param_4,uVar17);
      }
      uVar14 = *puVar8;
      uVar1 = uVar14 & 0xffff;
      fn_82BBFFC8(param_4,uVar17);
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x5f4) + 1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5f4) = iVar5;
      iVar10 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
      *(int *)(iVar10 + 0x38) = iVar5;
      *(undefined4 *)(iVar10 + 0x50) = 0;
      if (uVar1 < *(uint *)(param_7 + 4)) {
        puVar11 = (undefined4 *)((uVar14 & 0xffff) * 4 + *(int *)(param_7 + 8));
      }
      else {
        puVar11 = (undefined4 *)fn_82BC0088(param_7,uVar1);
      }
      fn_82BA05E8(iVar10,1,*puVar11);
      fn_82BC5538(param_2,iVar10);
      iVar5 = (int)uVar13;
      if (iVar5 < *(int *)(iVar10 + 0x37c)) {
        iVar4 = (*(int *)(iVar10 + 0x37c) - iVar5) + -1;
      }
      else {
        piVar12 = (int *)fn_82BC0088(param_7,*(undefined4 *)(param_7 + 4));
        *piVar12 = iVar10;
        iVar4 = *(int *)(param_7 + 4) + -1;
        *(int *)(iVar10 + 0x37c) = iVar4 + iVar5 + 1;
      }
      if (uVar1 < *(uint *)(param_5 + 4)) {
        piVar12 = (int *)((uVar14 & 0xffff) * 4 + *(int *)(param_5 + 8));
      }
      else {
        piVar12 = (int *)fn_82BC0088(param_5,uVar1);
      }
      *piVar12 = iVar4;
      puVar8 = (uint *)fn_82BC0088(param_6,*(undefined4 *)(param_6 + 4));
      *puVar8 = uVar14;
      *param_8 = *param_8 + 1;
    }
  } while( true );
}

