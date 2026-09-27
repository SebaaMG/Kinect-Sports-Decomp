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
extern int fn_82C2D3F8();
extern int fn_82E33170();
extern int fn_82E35B70();
extern int fn_82E36390();
extern int fn_82E36C28();
extern int fn_82E6DEC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_82015408;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_82015BDC;
extern unsigned int lbl_82027070;
extern unsigned int lbl_82079FB8;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_8208DD74;
extern unsigned int lbl_8208DE14;
extern unsigned int lbl_8208DE24;
extern unsigned int lbl_8208DE28;
extern unsigned int lbl_8208DE44;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82E371E8(int *param_1,undefined8 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar10;
  uint uVar8;
  int iVar9;
  undefined1 uVar14;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uStack_90;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0x3c) == 3) && ((*(uint *)(iVar2 + 0x40) & 1) != 0)) {
    *(undefined4 *)(iVar2 + 0xb0) = 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0xb0) = 0;
  }
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0x290) = 0;
  *(undefined4 *)(iVar2 + 0x2dc) = 1;
  *(undefined4 *)(iVar2 + 0x2e0) = 1;
  *(undefined4 *)(iVar2 + 0xc4) = 1;
  uVar5 = fn_82C2D3F8(iVar2);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  iVar12 = *(int *)(iVar2 + 0x50);
  iVar9 = *(int *)(iVar2 + 0x54);
  dVar20 = (double)lbl_82015BD4;
  param_1[0x1d76] = 0xfeb0;
  param_1[0x1d75] = (int)((float)((double)(longlong)iVar9 * dVar20) / (float)(longlong)iVar12);
  if (*(int *)(iVar2 + 0xb0) == 0) {
    iVar12 = *(int *)(iVar2 + 0x100);
    if (iVar12 < 0x1000) {
LAB_82e3731c:
      if (iVar12 < 0x800) {
        iVar9 = 0x7e30;
        if (iVar12 < 0x400) {
          iVar9 = 0x3e30;
        }
        param_1[0x1d76] = iVar9;
      }
      else {
        param_1[0x1d76] = 0xfe30;
      }
    }
    else if ((*(ushort *)(iVar2 + 0x22) < 7) || (param_1[0x1d74] < 0x602)) {
      if ((iVar12 < 0x1000) || (*(ushort *)(iVar2 + 0x22) < 7)) goto LAB_82e3731c;
      param_1[0x1d76] = 76000;
    }
    else {
      param_1[0x1d76] = 0x1fbe0;
    }
  }
  dVar19 = (double)lbl_82002C5C;
  dVar18 = (double)lbl_821AAD20;
  if (param_3 != 0) {
    dVar16 = (double)(((float)(longlong)*(int *)(iVar2 + 0x100) * (float)param_4) /
                     (float)(longlong)*(int *)(iVar2 + 0x50));
    if (dVar18 <= dVar16) {
      dVar16 = dVar16 + dVar19;
    }
    else {
      dVar16 = dVar16 - dVar19;
    }
    iVar12 = param_1[0x1d76];
    if ((int)dVar16 < param_1[0x1d76]) {
      iVar12 = (int)dVar16;
    }
    param_1[0x1d76] = iVar12;
  }
  iVar12 = param_1[0x1d89];
  *(undefined1 *)((int)param_1 + 0x75dd) = 0x3a;
  *(undefined1 *)(param_1 + 0x1d77) = 0x23;
  dVar16 = (double)lbl_82002AE0;
  iVar9 = *(int *)(iVar2 + 0xc);
  if (lbl_82027070 <=
      (float)((double)(uint)param_1[0x4232] / (double)(longlong)iVar9) * (float)(longlong)iVar12) {
    if ((*(int *)(iVar2 + 0x50) < 0x7d01) && ((double)*(float *)(iVar2 + 0x30) < dVar16)) {
      uVar14 = 0x14;
      uVar10 = 0x1e;
      goto LAB_82e37494;
    }
  }
  else {
    uVar14 = 10;
    uVar10 = 0xf;
LAB_82e37494:
    *(undefined1 *)((int)param_1 + 0x75dd) = uVar10;
    *(undefined1 *)(param_1 + 0x1d77) = uVar14;
  }
  if (*(int *)(iVar2 + 0x7c) == 1) {
    param_1[0x1d76] = 0x7fffffff;
  }
  iVar11 = *(int *)(iVar2 + 0xe4);
  if (1 < *(ushort *)(iVar2 + 0x22)) {
    iVar11 = iVar11 << 1;
  }
  param_1[0x1d54] = -1;
  param_1[0x1d55] = -1;
  *(undefined8 *)(param_1 + 0x1d56) = lbl_8200E890;
  param_1[0x4236] = iVar11;
  if (*(int *)(iVar2 + 0xd4) != 0) {
    *(undefined2 *)(param_1 + 0x4234) = 2;
  }
  if (param_1[5] == 0) {
    dVar17 = (double)(float)((double)(uint)param_1[0x4232] / (double)(longlong)*(int *)(iVar2 + 0xc)
                            );
    if (dVar17 < dVar16) {
      dVar17 = dVar16;
    }
    if ((iVar12 < 2) && (param_1[6] == 0)) {
      dVar17 = (double)lbl_82005344;
    }
    else if (dVar17 < dVar18) {
      param_1[0x420d] = (int)(dVar17 - dVar19);
      goto LAB_82e37658;
    }
    param_1[0x420d] = (int)(dVar17 + dVar19);
  }
  else if (*(int *)(iVar2 + 0x3c) < 3) {
    param_1[0x420d] = iVar12 + 1;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x6e) * *(int *)(iVar2 + 0xfc) *
            (uint)*(ushort *)(iVar2 + 0x22) * iVar12;
    if (*(int *)(iVar2 + 0xb0) == 1) {
      uVar7 = ((ulonglong)uVar8 & 0x7fffffff) << 1;
    }
    else if (*(int *)(iVar2 + 0xb0) == 0) {
      uVar7 = (ulonglong)(uint)(int)((double)(longlong)(int)uVar8 * lbl_82015408);
    }
    else {
      uStack_90 = iVar9 >> 0x1f;
      uVar7 = (ulonglong)uStack_90;
    }
    uVar8 = *(uint *)(iVar2 + 0xc);
    trapWord(6,(ulonglong)uVar8,0);
    uVar7 = (((ulonglong)uVar8 & 0x7fffffff) * 2 + uVar7) - 1;
    param_1[0x420d] = (int)uVar7 / (int)uVar8;
    trapWord(5,(ulonglong)uVar8 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),
             0xffff);
  }
LAB_82e37658:
  uVar8 = param_1[0x420d];
  param_1[0x4228] = 0;
  iVar9 = (*(int *)(iVar2 + 0xc) >> 3) * uVar8;
  param_1[0x4209] = iVar9;
  param_1[0x420a] = iVar9 * 8;
  if (param_1[5] == 0) {
    param_1[9] = 0;
    param_1[0x421a] = *(int *)(iVar2 + 0x54) << 3;
    uVar15 = uVar8 * *(int *)(iVar2 + 0xc);
    param_1[0x4212] = uVar15;
    uVar6 = *(int *)(*param_1 + 0x100) * iVar12;
    param_1[0x4218] = uVar6;
    param_1[0x4219] = *(int *)(iVar2 + 0xc);
    lVar3 = (ulonglong)uVar6 * (ulonglong)uVar15;
    *(longlong *)(param_1 + 0x4216) = lVar3;
    *(longlong *)(param_1 + 0x4214) = lVar3;
  }
  if (param_1[4] != 0) {
    param_1[0x423e] = param_1[0x1d50] * 6;
    uVar6 = param_1[0x1d50] * 6 + 200000;
    param_1[0x423f] = uVar6;
    param_1[0x4240] = 0x200;
    param_1[0x4241] = (uVar6 >> 9) + 1;
  }
  param_1[0x4208] = ((*(int *)(iVar2 + 0xc) >> 3) + param_1[0x4209]) * 2;
  if (*(int *)(iVar2 + 0x3c) < 3) {
    iVar12 = (int)((float)((double)(longlong)*(int *)(iVar2 + 0x50) /
                          (double)(longlong)*(int *)(iVar2 + 0x100)) *
                  (float)(longlong)*(int *)(iVar2 + 0xc) * lbl_82006848);
    iVar11 = iVar12 + 1;
    param_1[0x1d71] = iVar11;
    iVar9 = (int)((((longlong)(int)(*(int *)(iVar2 + 0x58) * (uint)*(ushort *)(iVar2 + 0x22)) *
                    (longlong)*(int *)(iVar2 + 0x50) & 0x1fffffffU) << 3) / 1000) + 1;
    iVar12 = iVar12 + 1;
    if (iVar9 <= iVar11) {
      iVar12 = iVar9;
    }
    param_1[0x1d71] = iVar12;
  }
  else {
    iVar12 = (int)((((longlong)(int)(*(int *)(iVar2 + 0x58) * (uint)*(ushort *)(iVar2 + 0x22)) *
                     (longlong)*(int *)(iVar2 + 0x50) & 0x1fffffffU) << 3) / 1000) + 1;
    param_1[0x1d71] = (iVar12 >> 3) + iVar12 + 1;
  }
  param_1[0x1d72] = 0;
  param_1[0x41f1] = (int)((ulonglong)uVar8 - 1) - ((uVar8 - 2) + (uint)((ulonglong)uVar8 - 1 == 0));
  fn_82E33170(param_1);
  uVar5 = fn_82E35B70();
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if (lbl_8208DD74 <= *(float *)(iVar2 + 0x30)) {
    *(short *)(param_1 + 0x1da3) = (short)*(undefined4 *)(iVar2 + 0xe4);
  }
  else {
    fVar4 = ((float)(longlong)*(int *)(iVar2 + 0x100) * lbl_8200DFF4) /
            (float)(longlong)*(int *)(iVar2 + 0x50);
    if (fVar4 <= lbl_82015BDC) {
      iVar12 = 2;
      if (fVar4 <= lbl_820885C8) {
        iVar12 = 1;
      }
    }
    else {
      iVar12 = 4;
    }
    iVar9 = *(int *)(iVar2 + 0xe4);
    if (iVar12 < *(int *)(iVar2 + 0xe4)) {
      iVar9 = iVar12;
    }
    *(short *)(param_1 + 0x1da3) = (short)iVar9;
    if (((*(int *)(iVar2 + 0x310) != 0) && (*(short *)(iVar2 + 0x22) == 1)) &&
       (param_1[0x1d74] < 0x21)) {
      iVar9 = *(int *)(iVar2 + 0xe4);
      if (iVar12 << 1 < *(int *)(iVar2 + 0xe4)) {
        iVar9 = iVar12 << 1;
      }
      *(short *)(param_1 + 0x1da3) = (short)iVar9;
    }
    if (param_1[0x1d8c] == 0) {
      iVar9 = *(int *)(iVar2 + 0xe4);
      if (iVar12 << 1 < *(int *)(iVar2 + 0xe4)) {
        iVar9 = iVar12 << 1;
      }
      *(short *)(param_1 + 0x1da3) = (short)iVar9;
    }
  }
  uVar1 = *(ushort *)(iVar2 + 0x22);
  param_1[0x1d78] = 0;
  param_1[0x1da4] = (int)((float)(longlong)param_1[0x1d9e] * (float)uVar1);
  fn_82E36390(param_1);
  if (*(int *)(iVar2 + 0x120) == 0) {
    return 0xffffffff80040000;
  }
  iVar12 = *param_1;
  if ((*(int *)(iVar12 + 0x50) < 0xac44) || (iVar9 = 0, *(float *)(iVar12 + 0x30) <= lbl_8208DE28))
  {
    iVar9 = 1;
  }
  param_1[0x41e7] = iVar9;
  if ((*(short *)(iVar2 + 0x22) != 2) || (iVar9 = 1, 0x20 < param_1[0x1d74])) {
    iVar9 = 0;
  }
  param_1[0x41e8] = iVar9;
  if (((*(ushort *)(param_1 + 0x4234) < 2) || (*(int *)(iVar2 + 0x334) != 0)) ||
     (2 < *(int *)(iVar2 + 0x3c))) {
    param_1[0x41e6] = 0;
  }
  else {
    param_1[0x41e6] =
         (uint)((float)((double)(longlong)(1 << (*(uint *)(iVar2 + 8) & 0x3f)) * dVar20) /
                ((float)(longlong)*(int *)(iVar2 + 0x100) * *(float *)(iVar2 + 0x2c)) <
               lbl_8208DE44);
  }
  if ((*(int *)(iVar2 + 0x3c) < 3) && (*(short *)(iVar2 + 0x22) == 2)) {
    if (param_1[5] == 0) {
      iVar9 = param_1[0x1d74];
joined_r0x82e37b94:
      if (iVar9 < 0x60) goto LAB_82e37ba0;
    }
    else if ((param_1[7] != 0) || (lbl_82079FB8 < (float)param_1[0x1d6d])) {
      if ((param_1[5] == 0) || (param_1[7] == 0)) goto LAB_82e37ba0;
      iVar9 = param_1[0x1d74];
      goto joined_r0x82e37b94;
    }
    iVar9 = 1;
  }
  else {
LAB_82e37ba0:
    iVar9 = 0;
  }
  param_1[0x41e9] = iVar9;
  param_1[0x41ea] = 0;
  if ((*(int *)(iVar2 + 0x3c) != 2) || (iVar9 = 1, 0x28 < param_1[0x1d74])) {
    iVar9 = 0;
  }
  param_1[0x41ec] = 1;
  param_1[0x41eb] = iVar9;
  if (*(float *)(iVar2 + 0x30) <= lbl_8208DE24) {
    iVar9 = 0x10;
    if (*(float *)(iVar2 + 0x30) <= lbl_8208DE14) {
      iVar9 = 0x20;
    }
  }
  else {
    iVar9 = 8;
  }
  param_1[0x41ed] = iVar9;
  param_1[0x41ee] = 0;
  if ((*(int *)(iVar2 + 0x3c) < 3) || (*(short *)(iVar12 + 0x22) == 2)) {
    param_1[0x4242] = 1;
  }
  else {
    param_1[0x4242] = 0;
  }
  param_1[0x41ef] = 0;
  param_1[0x41f0] = 0;
  param_1[0x41f2] = 0;
  if (((param_1[5] != 0) && (param_1[7] != 0)) || (iVar9 = 1, *(int *)(iVar12 + 0x50) < 16000)) {
    iVar9 = 0;
  }
  param_1[0x41f3] = iVar9;
  fn_82E36C28(param_1);
  fn_82E6DEC0();
  param_1[0x424c] = 1;
  param_1[0x4258] = 1;
  param_1[0x4259] = 1;
  param_1[0x425a] = param_1[0x1d85];
  param_1[0x425b] = param_1[0x1d84];
  param_1[0x4255] = 1;
  param_1[0x4256] = 1;
  param_1[0x4257] = param_1[0x4243];
  if (param_1[0x1d78] == 0) {
    param_1[0x425c] = (int)(float)dVar16;
    param_1[0x425d] = (int)(float)dVar16;
  }
  else {
    param_1[0x425c] = param_1[0x1d86];
    param_1[0x425d] = param_1[0x1d87];
  }
  param_1[0x1d62] = 0;
  param_1[0x1d63] = 0;
  param_1[0x4266] = (int)(float)dVar16;
  param_1[17000] = (int)(float)dVar16;
  param_1[0x4264] = (int)(float)dVar16;
  param_1[0x4269] = 1;
  param_1[0x426a] = param_1[0x421a];
  param_1[0x425e] = param_1[0x4246];
  param_1[0x425f] = param_1[0x4247];
  param_1[0x4260] = (int)(float)dVar16;
  param_1[0x4261] = (int)(float)dVar16;
  param_1[0x4262] = (int)(float)dVar16;
  param_1[0x4263] = (int)(float)dVar16;
  param_1[0x4265] = (int)(float)dVar16;
  param_1[16999] = (int)(float)dVar16;
  if (((*(int *)(iVar2 + 0x3c) < 3) || (param_1[0x4270] != 0)) || (uVar13 = 1, param_1[7] != 0)) {
    uVar13 = 0;
  }
  *(undefined4 *)(iVar2 + 0x80) = uVar13;
  return uVar5;
}

