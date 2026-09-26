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
extern unsigned int *auStack_6c;
extern int fn_8225C590();
extern int fn_8225F160();
extern int fn_82270040();
extern int fn_82270B70();
extern int fn_8234F298();
extern int fn_8234F338();
extern int fn_8247E6E8();
extern int fn_82672C20();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_8247F240(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  longlong lVar7;
  undefined4 *puVar9;
  ulonglong uVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar2 = fn_82270B70();
  uVar1 = lbl_821CC160;
  piVar12 = *(int **)(iVar2 + 0x5c);
  iVar2 = *piVar12;
  if (iVar2 != piVar12[1]) {
    do {
      iVar3 = *(int *)(iVar2 + 0x24);
      if (iVar3 != 0) {
        puVar9 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
        uVar14 = *puVar9;
        uVar15 = puVar9[1];
        uVar16 = puVar9[2];
        uVar17 = puVar9[3];
        *(undefined4 *)(iVar3 + 0x520) = uVar1;
        *(undefined4 *)(iVar3 + 0x544) = 1;
        *(undefined4 *)(iVar3 + 0x548) = 1;
        *(undefined4 *)(iVar3 + 0x534) = 0;
        puVar9 = (undefined4 *)(iVar3 + 0x510U & 0xfffffff0);
        *puVar9 = uVar14;
        puVar9[1] = uVar15;
        puVar9[2] = uVar16;
        puVar9[3] = uVar17;
      }
      iVar2 = iVar2 + 0x30;
    } while (iVar2 != piVar12[1]);
  }
  uStack_60 = 9;
  uStack_5c = 9;
  uStack_58 = 9;
  uStack_54 = 9;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x48) + 0x18b8);
  if (uVar5 == 0) {
    uStack_5c = 7;
    uStack_60 = 5;
  }
  else if (uVar5 == 1) {
    uStack_60 = 5;
    uStack_5c = 6;
    uStack_58 = 7;
    uStack_54 = 8;
  }
  else if (uVar5 < 3) {
    iVar2 = 0;
    iVar3 = 0;
    lVar7 = 4;
    do {
      if (*(int *)(iVar3 + *(int *)(param_1 + 0x48) + 0x838) != 4) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x420;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (iVar2 == 1) {
      uStack_60 = 0;
    }
    else if (iVar2 == 2) {
      uStack_60 = 0;
      uStack_5c = 4;
    }
    else if (iVar2 == 3) {
      uStack_5c = 2;
      uStack_60 = 0;
      uStack_58 = 4;
    }
    else if (iVar2 == 4) {
      uStack_60 = 0;
      uStack_5c = 1;
      uStack_58 = 3;
      uStack_54 = 4;
    }
  }
  else if (uVar5 == 3) {
    return;
  }
  fn_82672C20(**(undefined4 **)(param_1 + 200),0xffffffff821a8c10,0,0);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar10 = 0;
  auStack_6c[0] = 0;
  iVar2 = 0;
  uStack_70 = 0;
  puVar9 = &uStack_60;
  do {
    iVar3 = *(int *)(param_1 + 0x48);
    iVar8 = iVar2 + iVar3;
    piVar12 = (int *)(iVar8 + 0x838);
    if (*(int *)(iVar8 + 0x838) != 4) {
      if (*(char *)(iVar8 + 0xc54) == '\0') {
        iVar11 = (int)uVar10;
        if (*(int *)(iVar8 + 0x838) == 2) {
          if ((*(int *)(iVar3 + 0x18b8) != 1) ||
             (uVar10 == ((longlong)(iVar11 >> 1) + (ulonglong)(iVar11 < 0 && (uVar10 & 1) != 0) &
                        0x7fffffff) << 1)) {
            fn_8234F338(iVar3 + 0x234,*(undefined4 *)(iVar8 + 0x840),auStack_6c,&uStack_70);
          }
        }
        else {
          uVar4 = uVar10;
          if ((*(int *)(iVar3 + 0x18b8) == 1) &&
             (uVar10 != ((longlong)(iVar11 >> 1) + (ulonglong)(iVar11 < 0 && (uVar10 & 1) != 0) &
                        0x7fffffff) << 1)) {
            uVar4 = uVar10 - 1;
          }
          fn_8234F298(iVar3 + 0x234,uVar4,auStack_6c,&uStack_70);
        }
        fn_8225F160();
        if (((lbl_83265988 == 0) ||
            ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) ||
           (lVar7 = 1, *piVar12 == 2)) {
          lVar7 = 0;
        }
        if (*piVar12 == 3) {
          iVar3 = fn_8225C590();
          if (*(int *)(iVar3 + 0x24) - (int)*(int **)(iVar3 + 0x20) >> 2 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = **(int **)(iVar3 + 0x20);
          }
          if (iVar3 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = fn_8247E6E8();
          }
        }
        bVar13 = *piVar12 != 0;
        iVar8 = iVar8 + 0x844;
        iVar3 = 0;
        uVar6 = -(uint)(lVar7 == 0) & (uint)&uStack_70;
        uVar5 = -(uint)(lVar7 == 0) & (uint)auStack_6c;
      }
      else {
        bVar13 = true;
        uVar6 = 0;
        uVar5 = 0;
        iVar8 = 0;
        iVar3 = param_1 + 0x20;
      }
      fn_82270040(*puVar9,iVar3,iVar8,uVar5,uVar6,bVar13,param_2);
    }
    iVar2 = iVar2 + 0x420;
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar2 < 0x1080);
  return;
}

