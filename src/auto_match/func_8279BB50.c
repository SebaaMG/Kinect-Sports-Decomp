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
extern int fn_8267BE38();
extern int fn_826C6368();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_82799CA8();
extern int fn_8279A810();
extern int fn_827A84D0();
extern int memcpy();
extern float lbl_82002C5C;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_ca;


void fn_8279BB50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  uint uVar12;
  ulonglong uVar11;
  bool bVar14;
  ushort uVar13;
  uint uVar16;
  ulonglong uVar15;
  int iVar17;
  undefined2 uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined2 uStack_ca;
  uint uStack_c0;
  uint uStack_bc;
  
  dVar23 = lbl_82005730;
  dVar20 = (double)(float)param_1[8];
  dVar22 = (double)lbl_821AAD20;
  if (dVar20 <= dVar22) {
    dVar20 = dVar20 - lbl_82005730;
  }
  else {
    dVar20 = dVar20 + lbl_82005730;
  }
  iVar7 = (int)dVar20;
  iVar17 = param_1[4];
  if (iVar17 != 0) {
    if (iVar7 < 0) {
      uVar13 = (ushort)(iVar7 >> 0x1f);
      *(ushort *)(iVar17 + 6) = *(ushort *)(iVar17 + 6) | 0x40;
      *(ushort *)(iVar17 + 2) = ((ushort)iVar7 ^ uVar13) - uVar13;
    }
    else {
      *(ushort *)(iVar17 + 2) = (ushort)iVar7;
      *(ushort *)(iVar17 + 6) = *(ushort *)(iVar17 + 6) & 0xffbf;
    }
  }
  if (param_1[5] != 0) {
    iVar7 = param_1[9];
  }
  iVar17 = param_1[2];
  param_1[0x11] = iVar7 + param_1[0x11];
  if (((*(ushort *)(iVar17 + 0x16) & 1) == 0) ||
     (bVar14 = true, (*(ushort *)(iVar17 + 0x16) & 0x600) != 0x200)) {
    bVar14 = false;
  }
  if (bVar14) {
LAB_8279bc70:
    param_1[0x11] = param_1[0x11] + param_1[0x24];
    param_1[0x12] = param_1[0x24] + param_1[0x12];
  }
  else {
    if (((*(ushort *)(iVar17 + 0x16) & 1) == 0) ||
       (bVar14 = true, (*(ushort *)(iVar17 + 0x16) & 0x600) != 0x600)) {
      bVar14 = false;
    }
    if (bVar14) goto LAB_8279bc70;
  }
  if ((*(ushort *)(iVar17 + 0x16) >> 3 & 1) == 0) {
    dVar20 = (double)(float)param_1[0x16];
  }
  else {
    dVar20 = (double)(longlong)(*(short *)(iVar17 + 0x10) * 0x14);
  }
  dVar21 = (double)((float)param_1[0x15] + (float)param_1[0x14]);
  if (dVar21 <= dVar22) {
    dVar21 = dVar21 - dVar23;
  }
  else {
    dVar21 = dVar21 + dVar23;
  }
  uVar1 = (uint)dVar21;
  if (dVar20 <= dVar22) {
    dVar20 = dVar20 - dVar23;
  }
  else {
    dVar20 = dVar20 + dVar23;
  }
  uVar2 = (uint)dVar20;
  uVar16 = param_1[0x27];
  iVar17 = param_1[0x29];
  uVar12 = 0xffffffffU - (param_1[0x11] >> 0x1f) & param_1[0x11];
  param_1[0x11] = uVar12;
  param_1[0x12] = -(param_1[0x12] >> 0x1f) - 1U & param_1[0x12];
  if (((((((*(byte *)(*param_1 + 0x13c) & 0x30) != 0) || (0xff < (uint)param_1[0x13])) ||
        (0xff < uVar16)) || (((int)uVar2 < -0x80 || (0x7f < (int)uVar2)))) ||
      (((int)uVar1 < 0 || ((0xffff < (int)uVar1 || ((int)uVar12 < 0)))))) ||
     (uVar8 = 0, 0xffff < (int)uVar12)) {
    uVar8 = 1;
  }
  puVar5 = (uint *)fn_82799CA8(param_1[0x14b],uVar16,iVar17,uVar8);
  uVar12 = *puVar5;
  if ((int)uVar12 < 0) {
    puVar5[1] = *(uint *)(param_1[0x10] + 0x20);
  }
  else {
    puVar5[7] = *(uint *)(param_1[0x10] + 0x20);
  }
  if ((int)uVar12 < 0) {
    *(undefined2 *)(puVar5 + 6) = *(undefined2 *)(param_1[0x10] + 0x24);
  }
  else {
    *(undefined2 *)(puVar5 + 9) = *(undefined2 *)(param_1[0x10] + 0x24);
  }
  piVar3 = (int *)param_1[3];
  iVar7 = (int)piVar3 + 0x1e;
  if (-1 < *piVar3) {
    iVar7 = (int)piVar3 + 0x2a;
  }
  iVar6 = (int)puVar5 + 0x1e;
  if (-1 < (int)uVar12) {
    iVar6 = (int)puVar5 + 0x2a;
  }
  memcpy(iVar6,iVar7,uVar16 << 3);
  uVar8 = fn_827A84D0(param_1[3]);
  uVar4 = fn_827A84D0(puVar5);
  memcpy(uVar4,uVar8,iVar17 << 2);
  uVar16 = ((int *)param_1[3])[2];
  if ((*(int *)param_1[3] < 0) && (uVar16 = uVar16 & 0xffffff, uVar16 == 0xffffff)) {
    uVar16 = 0xffffffff;
  }
  if ((int)*puVar5 < 0) {
    uVar16 = puVar5[2] & 0xff000000 | uVar16 & 0xffffff;
  }
  puVar5[2] = uVar16;
  if ((int)*puVar5 < 0) {
    *(char *)(puVar5 + 2) = (char)param_1[0x13];
  }
  else {
    puVar5[8] = param_1[0x13];
  }
  uStack_ca = (undefined2)(longlong)(float)param_1[0x14];
  if ((int)*puVar5 < 0) {
    *(undefined2 *)((int)puVar5 + 0x1a) = uStack_ca;
  }
  else {
    *(undefined2 *)((int)puVar5 + 0x26) = uStack_ca;
  }
  if (((*(char *)((int)param_1 + 0xb5) == '\0') && ((*(byte *)(*param_1 + 0x13d) & 8) != 0)) &&
     (uVar11 = (ulonglong)(uint)param_1[0x2a] - (ulonglong)(uint)param_1[0x2b], uVar11 != 0)) {
    if (((*(ushort *)(param_1[2] + 0x16) & 1) == 0) ||
       (bVar14 = true, (*(ushort *)(param_1[2] + 0x16) & 0x600) != 0x400)) {
      bVar14 = false;
    }
    if ((bVar14) &&
       (uVar19 = ((((ulonglong)(uint)(int)((float)param_1[0xb6] - lbl_82015B38) -
                   (ulonglong)(uint)param_1[0x24]) - (ulonglong)(uint)param_1[0x23]) -
                 (ulonglong)(uint)param_1[0x22]) - (ulonglong)(uint)param_1[0x12],
       0 < (longlong)uVar19)) {
      trapWord(6,uVar11,0);
      fn_82756F70(&uStack_c0,puVar5);
      while( true ) {
        if ((uStack_c0 == 0) || (bVar14 = false, uStack_bc <= uStack_c0)) {
          bVar14 = true;
        }
        if (bVar14) break;
        puVar10 = (ushort *)(uStack_c0 + 6);
        if ((*(ushort *)(uStack_c0 + 6) >> 1 & 1) != 0) {
          if ((*(ushort *)(uStack_c0 + 6) >> 6 & 1) == 0) {
            uVar15 = (ulonglong)*(ushort *)(uStack_c0 + 2);
          }
          else {
            uVar15 = -(ulonglong)*(ushort *)(uStack_c0 + 2);
          }
          uVar15 = uVar15 + (uVar19 & 0xffffffff) / (uVar11 & 0xffffffff);
          if ((longlong)uVar15 < 0) {
            uVar9 = (ulonglong)((int)uVar15 >> 0x1f);
            uVar15 = (uVar15 ^ uVar9) - uVar9;
            *puVar10 = *puVar10 | 0x40;
          }
          else {
            *puVar10 = *puVar10 & 0xffbf;
          }
          *(short *)(uStack_c0 + 2) = (short)uVar15;
        }
        fn_827555D8(&uStack_c0);
      }
      param_1[0x11] = param_1[0x11] + (int)uVar19;
      fn_82756488(&uStack_c0);
    }
  }
  iVar17 = param_1[0x22];
  iVar7 = param_1[0x23];
  uVar16 = param_1[0x24d];
  puVar5[3] = iVar7 + iVar17;
  puVar5[4] = uVar16;
  uVar16 = *puVar5;
  if ((int)uVar16 < 0) {
    *(char *)((int)puVar5 + 0x1d) = (char)uVar2;
  }
  else {
    *(short *)(puVar5 + 10) = (short)uVar2;
  }
  uVar13 = *(ushort *)(param_1[2] + 0x16) >> 9 & 3;
  uVar18 = (undefined2)uVar1;
  if (uVar13 == 1) {
    *puVar5 = uVar16 & 0xcfffffff | 0x10000000;
    if ((int)uVar16 < 0) {
      *(short *)(puVar5 + 5) = (short)param_1[0x12];
      *(undefined2 *)((int)puVar5 + 0x16) = uVar18;
    }
    else {
      puVar5[5] = param_1[0x12];
      puVar5[6] = uVar1;
    }
    dVar20 = (double)(float)param_1[0xb6];
    if (dVar20 <= dVar22) {
      dVar20 = dVar20 - dVar23;
    }
    else {
      dVar20 = dVar20 + dVar23;
    }
    uVar16 = -((int)dVar20 - param_1[0x12] >> 0x1f) - 1U & (int)dVar20 - param_1[0x12];
  }
  else {
    if (uVar13 != 3) {
      *puVar5 = uVar16 & 0xcfffffff;
      if ((int)uVar16 < 0) {
        *(short *)(puVar5 + 5) = (short)param_1[0x11];
        *(undefined2 *)((int)puVar5 + 0x16) = uVar18;
      }
      else {
        puVar5[5] = param_1[0x11];
        puVar5[6] = uVar1;
      }
      goto code_r0x8279c210;
    }
    *puVar5 = uVar16 & 0xcfffffff | 0x20000000;
    if ((int)uVar16 < 0) {
      *(short *)(puVar5 + 5) = (short)param_1[0x12];
      *(undefined2 *)((int)puVar5 + 0x16) = uVar18;
    }
    else {
      puVar5[5] = param_1[0x12];
      puVar5[6] = uVar1;
    }
    uVar16 = param_1[0x12];
    dVar20 = (double)(((float)param_1[0xb6] - (float)(longlong)param_1[0x23]) * lbl_82002C5C -
                     (float)(longlong)
                            (int)(((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0))
                     );
    if (dVar20 <= dVar22) {
      dVar20 = dVar20 - dVar23;
    }
    else {
      dVar20 = dVar20 + dVar23;
    }
    uVar16 = param_1[0x23] + (int)dVar20;
    uVar16 = -((int)uVar16 >> 0x1f) - 1U & uVar16;
  }
  puVar5[3] = uVar16;
  if (((*(byte *)(*param_1 + 0x13d) & 1) != 0) || ((*(byte *)(*param_1 + 0x13c) & 0x30) != 0)) {
    *(undefined1 *)(param_1 + 0x253) = 1;
  }
code_r0x8279c210:
  iVar17 = param_1[0x11] + iVar7 + iVar17;
  if (iVar17 < param_1[0x250]) {
    iVar17 = param_1[0x250];
  }
  iVar7 = param_1[0x24d];
  param_1[0x250] = iVar17;
  param_1[0x251] = (iVar7 - param_1[0x24e]) + uVar1;
  iVar17 = fn_8279A810((ulonglong)uVar2 + (ulonglong)uVar1);
  param_1[0x22] = 0;
  param_1[0x24d] = iVar17 + iVar7;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[10] = 0;
  puVar5 = (uint *)param_1[5];
  if ((puVar5 != (uint *)0x0) &&
     (uVar1 = *puVar5, *puVar5 = (uint)((ulonglong)uVar1 - 1), (ulonglong)uVar1 - 1 == 0)) {
    fn_826C6368(puVar5);
    fn_8267BE38(puVar5);
  }
  param_1[5] = 0;
  return;
}

