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


void fn_82C7AA08(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  iVar10 = 0;
  iVar12 = 0;
  lVar17 = 8;
  uVar11 = 1;
  piVar8 = (int *)(param_2 + 8);
  piVar9 = param_1;
  do {
    if ((int)uVar11 == 0) {
      if (piVar8[-2] != 0) {
        iVar5 = piVar8[-2] << 3;
        piVar9[7] = iVar5;
        piVar9[6] = iVar5;
        piVar9[4] = iVar5;
        piVar9[3] = iVar5;
        piVar9[2] = iVar5;
        piVar9[1] = iVar5;
        *piVar9 = iVar5;
        goto LAB_82c7ab8c;
      }
    }
    else {
      iVar14 = (piVar8[3] + piVar8[1]) * 0x968;
      iVar10 = (piVar8[5] + piVar8[-1]) * 0x235;
      iVar4 = iVar14 + piVar8[3] * -799;
      iVar13 = iVar10 + piVar8[5] * -0xd4e;
      iVar10 = piVar8[-1] * 0x8e4 + iVar10;
      iVar14 = iVar14 + piVar8[1] * -0xfb1;
      iVar7 = iVar10 - iVar4;
      iVar6 = iVar13 - iVar14;
      iVar3 = (piVar8[4] + *piVar8) * 0x454;
      iVar16 = piVar8[-2] * 0x800 + 0x80;
      iVar5 = *piVar8 * 0x620 + iVar3;
      iVar1 = iVar16 + piVar8[2] * 0x800;
      iVar16 = iVar16 + piVar8[2] * -0x800;
      iVar3 = iVar3 + piVar8[4] * -0xec8;
      iVar15 = iVar1 - iVar5;
      iVar1 = iVar1 + iVar5;
      iVar4 = iVar4 + iVar10;
      iVar2 = iVar16 + iVar3;
      iVar10 = (iVar6 + iVar7) * 0xb5 + 0x80 >> 8;
      iVar16 = iVar16 - iVar3;
      iVar5 = (iVar7 - iVar6) * 0xb5 + 0x80 >> 8;
      iVar13 = iVar13 + iVar14;
      *piVar9 = iVar4 + iVar1 >> 8;
      piVar9[1] = iVar10 + iVar2 >> 8;
      piVar9[2] = iVar16 + iVar5 >> 8;
      piVar9[3] = iVar15 + iVar13 >> 8;
      iVar5 = iVar16 - iVar5 >> 8;
      piVar9[4] = iVar15 - iVar13 >> 8;
      piVar9[6] = iVar2 - iVar10 >> 8;
      piVar9[7] = iVar1 - iVar4 >> 8;
LAB_82c7ab8c:
      piVar9[5] = iVar5;
      iVar10 = iVar12;
    }
    iVar12 = iVar12 + 1;
    uVar11 = (uVar11 & 0x7fffffff) << 1 | uVar11 >> 0x1f;
    piVar9 = piVar9 + param_3;
    piVar8 = piVar8 + 8;
    lVar17 = lVar17 + -1;
    if (lVar17 == 0) {
      lVar17 = 8;
      do {
        if (iVar10 == 0) {
          if (*param_1 != 0) {
            iVar12 = *param_1 + 0x20 >> 6;
            param_1[param_3 * 7] = iVar12;
            param_1[param_3 * 6] = iVar12;
            param_1[param_3 * 5] = iVar12;
            param_1[param_3 * 4] = iVar12;
            param_1[param_3 * 3] = iVar12;
            param_1[param_3 * 2] = iVar12;
            param_1[param_3] = iVar12;
            *param_1 = iVar12;
          }
        }
        else {
          iVar5 = (param_1[param_3 * 7] + param_1[param_3]) * 0x235 + 4;
          iVar6 = (param_1[param_3 * 5] + param_1[param_3 * 3]) * 0x968 + 4;
          iVar12 = param_1[param_3] * 0x8e4 + iVar5 >> 3;
          iVar5 = iVar5 + param_1[param_3 * 7] * -0xd4e >> 3;
          iVar1 = iVar6 + param_1[param_3 * 5] * -799 >> 3;
          iVar6 = iVar6 + param_1[param_3 * 3] * -0xfb1 >> 3;
          iVar7 = (param_1[param_3 * 6] + param_1[param_3 * 2]) * 0x454 + 4;
          iVar16 = iVar5 - iVar6;
          iVar3 = iVar12 - iVar1;
          iVar14 = (*param_1 + 0x20) * 0x100;
          iVar2 = iVar7 + param_1[param_3 * 6] * -0xec8 >> 3;
          iVar4 = iVar14 + param_1[param_3 * 4] * 0x100;
          iVar7 = param_1[param_3 * 2] * 0x620 + iVar7 >> 3;
          iVar14 = iVar14 + (param_1[param_3 * 4] & 0xffffffU) * -0x100;
          iVar1 = iVar1 + iVar12;
          iVar13 = iVar4 + iVar7;
          iVar4 = iVar4 - iVar7;
          iVar7 = iVar14 + iVar2;
          iVar5 = iVar5 + iVar6;
          iVar12 = (iVar16 + iVar3) * 0xb5 + 0x80 >> 8;
          iVar14 = iVar14 - iVar2;
          iVar6 = (iVar3 - iVar16) * 0xb5 + 0x80 >> 8;
          *param_1 = iVar1 + iVar13 >> 0xe;
          param_1[param_3] = iVar12 + iVar7 >> 0xe;
          param_1[param_3 * 2] = iVar14 + iVar6 >> 0xe;
          param_1[param_3 * 3] = iVar4 + iVar5 >> 0xe;
          param_1[param_3 * 4] = iVar4 - iVar5 >> 0xe;
          param_1[param_3 * 5] = iVar14 - iVar6 >> 0xe;
          param_1[param_3 * 6] = iVar7 - iVar12 >> 0xe;
          param_1[param_3 * 7] = iVar13 - iVar1 >> 0xe;
        }
        param_1 = param_1 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      return;
    }
  } while( true );
}

