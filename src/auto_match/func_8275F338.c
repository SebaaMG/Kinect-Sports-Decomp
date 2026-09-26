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
extern int fn_8275D158();
extern int fn_8275F260();


void fn_8275F338(uint *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar18;
  undefined2 *puVar11;
  uint *puVar12;
  undefined2 *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar20;
  int iVar19;
  
  iVar9 = 4;
  uVar10 = (ulonglong)(param_1[1] | *param_1 | param_1[2]);
  if (uVar10 < 0x8000) {
    if (uVar10 < 0x80) {
      if (uVar10 < 8) {
        if (uVar10 < 2) {
          bVar18 = -((uVar10 == 0) + -1);
        }
        else {
          bVar18 = 3 - (uVar10 < 4);
        }
      }
      else if (uVar10 < 0x20) {
        bVar18 = 5 - (uVar10 < 0x10);
      }
      else {
        bVar18 = 7 - (uVar10 < 0x40);
      }
    }
    else if (uVar10 < 0x800) {
      if (uVar10 < 0x200) {
        bVar18 = 9 - (uVar10 < 0x100);
      }
      else {
        bVar18 = 0xb - (uVar10 < 0x400);
      }
    }
    else if (uVar10 < 0x2000) {
      bVar18 = 0xd - (uVar10 < 0x1000);
    }
    else {
      bVar18 = 0xf - (uVar10 < 0x4000);
    }
  }
  else if (uVar10 < 0x800000) {
    if (uVar10 < 0x80000) {
      if (uVar10 < 0x20000) {
        bVar18 = 0x11 - (uVar10 < 0x10000);
      }
      else {
        bVar18 = 0x13 - (uVar10 < 0x40000);
      }
    }
    else if (uVar10 < 0x200000) {
      bVar18 = 0x15 - (uVar10 < 0x100000);
    }
    else {
      bVar18 = 0x17 - (uVar10 < 0x400000);
    }
  }
  else if (uVar10 < 0x8000000) {
    if (uVar10 < 0x2000000) {
      bVar18 = 0x19 - (uVar10 < 0x1000000);
    }
    else {
      bVar18 = 0x1b - (uVar10 < 0x4000000);
    }
  }
  else if (uVar10 < 0x20000000) {
    bVar18 = 0x1d - (uVar10 < 0x10000000);
  }
  else if (uVar10 < 0x40000000) {
    bVar18 = 0x1e;
  }
  else {
    bVar18 = 0x20 - (uVar10 < 0xffffffff80000000);
  }
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    if (((bVar18 < 9) && (*(byte *)(param_1 + 0xd) < 0x11)) && (uVar4 = param_1[10], uVar4 < 5)) {
      bVar20 = 0;
      pbVar3 = (byte *)fn_8275F260(param_2,(((ulonglong)param_1[0xb] & 0x7fffffff) * 2 +
                                              (ulonglong)param_1[0xc] + 1 & 0x3fffffff) << 2,1,2);
      bVar18 = 1;
      pbVar3[1] = (byte)*param_1;
      pbVar3[2] = (byte)param_1[1];
      pbVar3[3] = (byte)param_1[2];
      *(undefined2 *)((uint)(pbVar3 + 5) & 0xfffffffe) = (short)param_1[3];
      puVar13 = (undefined2 *)((uint)(pbVar3 + 5) & 0xfffffffe) + 1;
      *puVar13 = (short)param_1[4];
      if (param_1[10] != 0) {
        uVar5 = 0;
        do {
          puVar11 = puVar13 + 1;
          iVar9 = uVar5 * 0x14;
          if (*(char *)((undefined4 *)(iVar9 + param_1[7]) + 4) == '\0') {
            bVar20 = bVar18 | bVar20;
            *puVar11 = (short)*(undefined4 *)(iVar9 + param_1[7]);
            puVar13[2] = (short)*(undefined4 *)(iVar9 + param_1[7] + 4);
            puVar11 = puVar13 + 3;
          }
          bVar18 = bVar18 << 1;
          uVar5 = uVar5 + 1 & 0xff;
          *puVar11 = (short)*(undefined4 *)(iVar9 + param_1[7] + 8);
          puVar13 = puVar11 + 1;
          *puVar13 = (short)*(undefined4 *)(iVar9 + param_1[7] + 0xc);
        } while (uVar5 < param_1[10]);
      }
      *pbVar3 = (bVar20 & 0xf) << 3 | ((char)uVar4 + -1) * '\x02' & 6U | 1;
    }
    else {
      iVar19 = 1;
      if (bVar18 < 9) {
        bVar18 = 2;
      }
      else if (bVar18 < 0x11) {
        bVar18 = 4;
        iVar19 = 2;
      }
      else {
        bVar18 = 6;
        iVar19 = 4;
      }
      if ((*(byte *)(param_1 + 0xd) < 0x11) && (param_1[10] < 0x10000)) {
        iVar9 = 2;
      }
      else {
        bVar18 = bVar18 | 8;
      }
      uVar4 = param_1[10];
      iVar8 = iVar9;
      if (uVar4 < 0x10) {
        bVar18 = (byte)((uVar4 & 0xf) << 4) | bVar18;
        iVar8 = 0;
      }
      if (*(byte *)(param_1 + 0xd) < 0x11) {
        uVar4 = uVar4 + 0xf >> 3 & 0x1ffffffe;
      }
      else {
        uVar4 = uVar4 + 0x1f >> 3 & 0x1ffffffc;
      }
      pbVar3 = (byte *)fn_8275F260(param_2,(param_1[0xb] * 2 + param_1[0xc] + 1) * iVar9 * 2 +
                                             uVar4 + iVar8,iVar19,iVar9);
      *pbVar3 = bVar18;
      puVar12 = (uint *)((uint)(pbVar3 + iVar19) & ~(iVar19 - 1U));
      if (iVar19 == 1) {
        *(char *)puVar12 = (char)*param_1;
        *(char *)((int)puVar12 + 1) = (char)param_1[1];
        *(char *)((int)puVar12 + 2) = (char)param_1[2];
      }
      else if (iVar19 == 2) {
        *(short *)puVar12 = (short)*param_1;
        *(short *)((int)puVar12 + 2) = (short)param_1[1];
        *(short *)(puVar12 + 1) = (short)param_1[2];
      }
      else if (iVar19 == 4) {
        *puVar12 = *param_1;
        puVar12[1] = param_1[1];
        puVar12[2] = param_1[2];
      }
      uVar4 = param_1[10];
      if (iVar9 == 2) {
        puVar13 = (undefined2 *)((int)puVar12 + iVar19 * 3 + 1 & 0xfffffffe);
        if (0xf < uVar4) {
          *puVar13 = (short)uVar4;
          puVar13 = puVar13 + 1;
        }
        puVar6 = (ushort *)0x0;
        uVar10 = 0;
        uVar4 = 0;
        *puVar13 = (short)param_1[3];
        puVar2 = puVar13 + 1;
        *puVar2 = (ushort)param_1[4];
        if (param_1[10] != 0) {
          iVar9 = 0;
          do {
            puVar14 = puVar2 + 1;
            puVar15 = puVar14;
            if ((uVar4 & 0xf) == 0) {
              puVar15 = puVar2 + 2;
              uVar10 = 1;
              *puVar14 = 0;
              puVar6 = puVar14;
            }
            if (*(char *)((undefined4 *)(iVar9 + param_1[7]) + 4) == '\0') {
              *puVar15 = (ushort)*(undefined4 *)(iVar9 + param_1[7]);
              puVar15[1] = (ushort)*(undefined4 *)(iVar9 + param_1[7] + 4);
              puVar15 = puVar15 + 2;
              *puVar6 = *puVar6 | (ushort)uVar10;
            }
            uVar4 = uVar4 + 1;
            uVar10 = (uVar10 & 0x7fffffff) << 1;
            *puVar15 = (ushort)*(undefined4 *)(iVar9 + param_1[7] + 8);
            iVar19 = iVar9 + param_1[7];
            iVar9 = iVar9 + 0x14;
            puVar2 = puVar15 + 1;
            *puVar2 = (ushort)*(undefined4 *)(iVar19 + 0xc);
          } while (uVar4 < param_1[10]);
        }
      }
      else {
        puVar12 = (uint *)((int)puVar12 + iVar9 + iVar19 * 3 + -1 & ~(iVar9 - 1U));
        if (0xf < uVar4) {
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        }
        puVar7 = (uint *)0x0;
        uVar10 = 0;
        uVar4 = 0;
        *puVar12 = param_1[3];
        puVar12 = puVar12 + 1;
        *puVar12 = param_1[4];
        if (param_1[10] != 0) {
          iVar9 = 0;
          do {
            puVar16 = puVar12 + 1;
            puVar17 = puVar16;
            if ((uVar4 & 0x1f) == 0) {
              puVar17 = puVar12 + 2;
              uVar10 = 1;
              *puVar16 = 0;
              puVar7 = puVar16;
            }
            if (*(char *)((uint *)(iVar9 + param_1[7]) + 4) == '\0') {
              *puVar17 = *(uint *)(iVar9 + param_1[7]);
              puVar17[1] = *(uint *)(iVar9 + param_1[7] + 4);
              puVar17 = puVar17 + 2;
              *puVar7 = (uint)uVar10 | *puVar7;
            }
            uVar4 = uVar4 + 1;
            uVar10 = (uVar10 & 0x7fffffff) << 1;
            *puVar17 = *(uint *)(iVar9 + param_1[7] + 8);
            iVar19 = iVar9 + param_1[7];
            iVar9 = iVar9 + 0x14;
            puVar12 = puVar17 + 1;
            *puVar12 = *(uint *)(iVar19 + 0xc);
          } while (uVar4 < param_1[10]);
        }
      }
    }
  }
  else {
    pbVar3 = (byte *)fn_8275D158(param_2,1,1);
    *pbVar3 = 0;
  }
  if (param_3 != (int *)0x0) {
    if (*param_3 == 0) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      *param_3 = (int)pbVar3;
      *(short *)(param_3 + 3) = (short)pbVar3 - (short)uVar1;
    }
    if (*(char *)((int)param_1 + 0x35) != '\0') {
      param_3[2] = param_3[2] + 1;
    }
    param_3[1] = param_3[1] + 1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  return;
}

