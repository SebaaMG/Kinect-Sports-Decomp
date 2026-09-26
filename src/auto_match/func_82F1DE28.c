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
extern unsigned int *auStack_2f0;
extern int fn_82F1A430();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820DA2C8;
extern unsigned int lbl_82162850;


void fn_82F1DE28(int param_1,int param_2,ulonglong param_3,int param_4,ulonglong param_5,
                  longlong param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar10;
  uint uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  undefined1 *puVar17;
  short *psVar18;
  uint *puVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  short *in_stack_0000005c;
  int in_stack_0000006c;
  short sStack_312;
  short asStack_310 [12];
  longlong lStack_2f8;
  undefined1 auStack_2f0 [48];
  short asStack_2c0 [352];
  
  lVar20 = 6;
  puVar11 = (undefined4 *)(param_2 + 0x98);
  do {
    puVar11 = puVar11 + 1;
    *puVar11 = 0;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar16 = *(int *)(param_1 + 0xaf0);
  puVar17 = (undefined1 *)(param_2 + 4);
  if ((iVar16 == 1) || (iVar16 == 2)) {
    puVar17 = auStack_2f0;
  }
  if (((iVar16 == 0) || (iVar16 == 4)) && (*(int *)(param_1 + 0xa0c) == 0)) {
    in_stack_0000005c = in_stack_0000005c + 0x40;
  }
  puVar19 = (uint *)&lbl_82162850;
  psVar15 = &sStack_312;
  uVar5 = param_5;
  lVar20 = param_6;
  dVar22 = lbl_82005710;
  dVar23 = lbl_82005730;
  dVar24 = lbl_820DA2C8;
  psVar18 = in_stack_0000005c;
  do {
    (**(code **)(param_1 + 0x1f88))(lVar20,0x10,asStack_2c0,0,uVar5,param_6);
    lStack_2f8 = (longlong)asStack_2c0[0];
    dVar21 = (double)*(float *)(in_stack_0000006c + 0x30) * (double)lStack_2f8;
    if ((double)*(float *)(in_stack_0000006c + 0x30) * (double)lStack_2f8 * dVar24 <= dVar22) {
      sVar4 = (short)(int)(dVar21 * dVar24 - dVar23);
    }
    else {
      sVar4 = (short)(int)(dVar21 * dVar24 + dVar23);
    }
    *psVar18 = sVar4;
    sVar4 = fn_82F1A430(param_1,psVar18,asStack_2c0,0x40,in_stack_0000006c,0,0);
    param_6 = (longlong)sVar4;
    *(int *)(puVar17 + 0x7de9d7b0 + (int)puVar19) = (int)sVar4;
    uVar7 = *puVar19;
    uVar5 = (ulonglong)uVar7;
    puVar19 = puVar19 + 1;
    psVar15 = psVar15 + 1;
    *psVar15 = sVar4;
    psVar18 = psVar18 + 0x80;
    lVar20 = ((ulonglong)uVar7 & 0x7fffffff) * 2 + lVar20;
  } while ((int)puVar19 < -0x7de9d7a0);
  (**(code **)(param_1 + 0x1f88))(param_7,8,asStack_2c0,0);
  dVar21 = (double)*(float *)(in_stack_0000006c + 0x30) * (double)(longlong)asStack_2c0[0];
  if ((double)*(float *)(in_stack_0000006c + 0x30) * (double)(longlong)asStack_2c0[0] * dVar24 <=
      dVar22) {
    sVar4 = (short)(int)(dVar21 * dVar24 - dVar23);
  }
  else {
    sVar4 = (short)(int)(dVar21 * dVar24 + dVar23);
  }
  in_stack_0000005c[0x200] = sVar4;
  sVar4 = fn_82F1A430(param_1,in_stack_0000005c + 0x200,asStack_2c0,0x40,in_stack_0000006c,0,0
                           );
  *(int *)(puVar17 + 0x10) = (int)sVar4;
  (**(code **)(param_1 + 0x1f88))(param_8,8,asStack_2c0,0);
  dVar21 = (double)*(float *)(in_stack_0000006c + 0x30) * (double)(longlong)asStack_2c0[0];
  if ((double)*(float *)(in_stack_0000006c + 0x30) * (double)(longlong)asStack_2c0[0] * dVar24 <=
      dVar22) {
    sVar4 = (short)(int)(dVar21 * dVar24 - dVar23);
  }
  else {
    sVar4 = (short)(int)(dVar21 * dVar24 + dVar23);
  }
  in_stack_0000005c[0x280] = sVar4;
  sVar4 = fn_82F1A430(param_1,in_stack_0000005c + 0x280,asStack_2c0,0x40,in_stack_0000006c,0,0
                           );
  *(int *)(puVar17 + 0x14) = (int)sVar4;
  iVar16 = (int)param_3;
  if (((((*(int *)(param_1 + 0x1ba8) == 0) || (*(int *)(param_1 + 0x7b38) != 0)) ||
       ((iVar6 = *(int *)(param_2 + 0x60), iVar6 < 2 || ((0x11 < iVar6 || (asStack_310[0] != 0))))))
      || (asStack_310[1] != 0)) || ((asStack_310[2] != 0 || (asStack_310[3] != 0))))
  goto LAB_82f1e518;
  uVar13 = 0;
  bVar3 = false;
  bVar2 = false;
  uVar7 = 0;
  iVar12 = (int)param_5;
  if (*(int *)(param_1 + 0xaf0) == 0) {
    if (iVar12 == 0) {
      uVar7 = (uint)LZCOUNT(*(int *)(param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x60) - iVar6)
              >> 5;
    }
    if (iVar16 != 0) {
      bVar2 = *(int *)(param_2 + -0xb4) == iVar6;
    }
    if (iVar12 == 0) {
      bVar3 = false;
      if (iVar16 != 0) {
        bVar3 = *(int *)(param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + -0xb4) == iVar6;
      }
      if (iVar16 != *(int *)(param_1 + 0x2d0) + -1) {
        uVar13 = (uint)LZCOUNT(*(int *)(param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x174) -
                               iVar6) >> 5;
      }
    }
  }
  else {
    if ((iVar12 == 0) &&
       (((iVar14 = param_2 + *(int *)(param_1 + 0x2d0) * -0x114, *(char *)(iVar14 + 0x58) != '\0' ||
         (*(char *)(iVar14 + 0x4a) == '\0')) || (uVar7 = 1, iVar6 != *(int *)(iVar14 + 0x60))))) {
      uVar7 = 0;
    }
    if ((iVar16 != 0) &&
       (((*(char *)(param_2 + -0xbc) != '\0' || (*(char *)(param_2 + -0xca) == '\0')) ||
        (bVar2 = true, iVar6 != *(int *)(param_2 + -0xb4))))) {
      bVar2 = false;
    }
    if (iVar12 == 0) {
      bVar3 = false;
      if ((iVar16 != 0) &&
         (((iVar12 = param_2 + (*(int *)(param_1 + 0x2d0) + 1) * -0x114,
           *(char *)(iVar12 + 0x58) != '\0' || (*(char *)(iVar12 + 0x4a) == '\0')) ||
          (bVar3 = true, iVar6 != *(int *)(iVar12 + 0x60))))) {
        bVar3 = false;
      }
      if ((iVar16 != *(int *)(param_1 + 0x2d0) + -1) &&
         (((param_2 = param_2 + *(int *)(param_1 + 0x2d0) * -0x114,
           *(char *)(param_2 + 0x16c) != '\0' || (*(char *)(param_2 + 0x15e) == '\0')) ||
          (uVar13 = 1, iVar6 != *(int *)(param_2 + 0x174))))) {
        uVar13 = 0;
      }
    }
  }
  if (((uVar7 == 0) && (!bVar2)) && ((!bVar3 && (uVar13 == 0)))) goto LAB_82f1e518;
  sVar4 = *in_stack_0000005c;
  lVar20 = 4;
  if (uVar7 != 0) {
    lVar20 = 6;
  }
  if (bVar2) {
    lVar10 = lVar20 << 1;
    iVar6 = (int)lVar20;
    sVar1 = *(short *)((int)(((longlong)(param_4 * 4 + 2) * (longlong)*(int *)(param_1 + 0x2d0) +
                              (param_3 & 0x7fffffff) * 2 & 0xffffffff) << 5) +
                       *(int *)(param_1 + 0x908) + -0x20);
    lVar20 = lVar20 + 2;
    *(undefined2 *)((int)asStack_310 + (int)lVar10) =
         *(undefined2 *)
          ((int)((((longlong)*(int *)(param_1 + 0x2d0) * (longlong)param_4 & 0x7fffffffU) * 2 +
                  param_3 & 0xffffffff) << 6) + *(int *)(param_1 + 0x908) + -0x20);
    asStack_310[iVar6 + 1] = sVar1;
  }
  if (bVar3) {
    lVar10 = lVar20 << 1;
    lVar20 = lVar20 + 1;
    *(undefined2 *)((int)asStack_310 + (int)lVar10) =
         *(undefined2 *)
          ((int)(((longlong)(param_4 * 4 + -2) * (longlong)*(int *)(param_1 + 0x2d0) +
                  (param_3 & 0x7fffffff) * 2 & 0xffffffff) << 5) + *(int *)(param_1 + 0x908) + -0x20
          );
  }
  if (uVar13 != 0) {
    lVar10 = lVar20 << 1;
    lVar20 = lVar20 + 1;
    *(undefined2 *)((int)asStack_310 + (int)lVar10) =
         *(undefined2 *)
          ((int)(((longlong)(param_4 * 4 + -2) * (longlong)*(int *)(param_1 + 0x2d0) +
                  (param_3 + 1 & 0x7fffffff) * 2 & 0xffffffff) << 5) + *(int *)(param_1 + 0x908));
  }
  iVar12 = (int)sVar4;
  iVar6 = iVar12;
  if (1 < (uint)lVar20) {
    lVar10 = lVar20 + -1;
    psVar15 = asStack_310;
    iVar6 = (int)sVar4;
    iVar12 = (int)sVar4;
    do {
      psVar15 = psVar15 + 1;
      sVar4 = *psVar15;
      if (sVar4 < iVar6) {
        iVar6 = (int)sVar4;
      }
      if (iVar12 < sVar4) {
        iVar12 = (int)sVar4;
      }
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (iVar12 - iVar6 != 1) goto LAB_82f1e518;
  iVar14 = 0;
  iVar8 = 0;
  if ((uint)lVar20 == 0) {
LAB_82f1e504:
    sVar4 = (short)iVar6;
  }
  else {
    psVar15 = asStack_310;
    do {
      if (*psVar15 == iVar6) {
        iVar14 = iVar14 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      psVar15 = psVar15 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    sVar4 = (short)iVar12;
    if (iVar8 <= iVar14) goto LAB_82f1e504;
  }
  *in_stack_0000005c = sVar4;
  in_stack_0000005c[0x80] = sVar4;
  in_stack_0000005c[0x100] = sVar4;
  in_stack_0000005c[0x180] = sVar4;
LAB_82f1e518:
  uVar13 = 0;
  uVar7 = *(uint *)(param_1 + 0x2d0) * 2;
  iVar6 = (int)(uVar7 | *(uint *)(param_1 + 0x2d0) >> 0x1f) >> 1;
  do {
    if ((int)uVar13 < 4) {
      iVar12 = *(int *)(param_1 + 0x908);
      iVar14 = (((int)uVar13 >> 1) + param_4 * 2) * uVar7 + (uVar13 & 1) + iVar16 * 2;
    }
    else if (uVar13 == 4) {
      iVar12 = *(int *)(param_1 + 0x90c);
      iVar14 = iVar6 * param_4 + iVar16;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x910);
      iVar14 = iVar6 * param_4 + iVar16;
    }
    iVar8 = uVar13 * 0x80;
    psVar15 = (short *)(iVar14 * 0x20 + iVar12);
    iVar14 = uVar13 * 0x80;
    iVar12 = uVar13 * 0x80;
    iVar9 = uVar13 * 0x10;
    *psVar15 = in_stack_0000005c[iVar8];
    uVar13 = uVar13 + 1;
    psVar15[8] = in_stack_0000005c[iVar12];
    psVar15[1] = (in_stack_0000005c + iVar8)[1];
    psVar15[9] = (in_stack_0000005c + iVar12)[8];
    psVar15[2] = in_stack_0000005c[iVar14 + 2];
    psVar15[10] = in_stack_0000005c[(iVar9 + 2) * 8];
    psVar15[3] = in_stack_0000005c[iVar14 + 3];
    psVar15[0xb] = in_stack_0000005c[(iVar9 + 3) * 8];
    psVar15[4] = in_stack_0000005c[iVar14 + 4];
    psVar15[0xc] = in_stack_0000005c[(iVar9 + 4) * 8];
    psVar15[5] = in_stack_0000005c[iVar14 + 5];
    psVar15[0xd] = in_stack_0000005c[(iVar9 + 5) * 8];
    psVar15[6] = in_stack_0000005c[iVar14 + 6];
    psVar15[0xe] = in_stack_0000005c[(iVar9 + 6) * 8];
    psVar15[7] = in_stack_0000005c[iVar14 + 7];
    psVar15[0xf] = in_stack_0000005c[(iVar9 + 7) * 8];
  } while ((int)uVar13 < 6);
  return;
}

